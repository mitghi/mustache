#include "../inc/text.h"
#include "../inc/position.h"

char text_get_char(pmustache m) {
    if (pos_get(m) < text_get_size(m)) {
        return m->text[pos_get_inc(m)];
    }
    return EOF;
}

char text_get_char_pos(pmustache m, int n) {
    if (n < text_get_size(m)) {
        return m->text[n];
    }
    return EOF;
}

void text_set(pmustache m, char *text) {
    m->text = text;
}

void text_set_size(pmustache m) {
    if (m->text != NULL) {
        m->text_size = (int) strlen(m->text);
    }
}

int text_get_size(pmustache m) {
    return m->text_size;
}
