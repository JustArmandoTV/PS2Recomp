#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001821B8
// Address: 0x1821b8 - 0x182358
void sub_001821B8_0x1821b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001821B8_0x1821b8");
#endif

    switch (ctx->pc) {
        case 0x182218u: goto label_182218;
        default: break;
    }

    ctx->pc = 0x1821b8u;

    // 0x1821b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1821b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1821bc: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x1821bcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1821c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1821c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1821c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1821c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1821cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1821ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1821d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1821d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1821d4: 0x24128000  addiu       $s2, $zero, -0x8000
    ctx->pc = 0x1821d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1821d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1821d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1821dc: 0x24137fff  addiu       $s3, $zero, 0x7FFF
    ctx->pc = 0x1821dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1821e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1821e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1821e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1821e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1821e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1821ec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1821ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1821f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1821f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1821f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821f8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1821f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1821fc: 0x241707d6  addiu       $s7, $zero, 0x7D6
    ctx->pc = 0x1821fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
    // 0x182200: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x182200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x182204: 0x241e0def  addiu       $fp, $zero, 0xDEF
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3567));
    // 0x182208: 0x24516dd0  addiu       $s1, $v0, 0x6DD0
    ctx->pc = 0x182208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28112));
    // 0x18220c: 0x8df9000c  lw          $t9, 0xC($t7)
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x182210: 0x8df80008  lw          $t8, 0x8($t7)
    ctx->pc = 0x182210u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x182214: 0x0  nop
    ctx->pc = 0x182214u;
    // NOP
label_182218:
    // 0x182218: 0x8de3001c  lw          $v1, 0x1C($t7)
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x18221c: 0x106040  sll         $t4, $s0, 1
    ctx->pc = 0x18221cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x182220: 0x8de20020  lw          $v0, 0x20($t7)
    ctx->pc = 0x182220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x182224: 0x1962021  addu        $a0, $t4, $s6
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 22)));
    // 0x182228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18222c: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x18222cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182234: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x182234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x182238: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x182238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18223c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18223cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182240: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x182240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182244: 0x240e7fff  addiu       $t6, $zero, 0x7FFF
    ctx->pc = 0x182244u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x182248: 0x8de20028  lw          $v0, 0x28($t7)
    ctx->pc = 0x182248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 40)));
    // 0x18224c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x18224cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x182250: 0x70a62818  mult1       $a1, $a1, $a2
    ctx->pc = 0x182250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x182254: 0x8de30024  lw          $v1, 0x24($t7)
    ctx->pc = 0x182254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 36)));
    // 0x182258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x182258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18225c: 0x8f070000  lw          $a3, 0x0($t8)
    ctx->pc = 0x18225cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x182260: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x182260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x182264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182268: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x182268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18226c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x18226cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x182270: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x182270u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x182274: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x182274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x182278: 0xa64018  mult        $t0, $a1, $a2
    ctx->pc = 0x182278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x18227c: 0x70863018  mult1       $a2, $a0, $a2
    ctx->pc = 0x18227cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x182280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182284: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x182284u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x182288: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x182288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x18228c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18228cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x182290: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x182290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x182294: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x182294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x182298: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x182298u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x18229c: 0x2402f211  addiu       $v0, $zero, -0xDEF
    ctx->pc = 0x18229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963729));
    // 0x1822a0: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x1822a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x1822a4: 0x70d75818  mult1       $t3, $a2, $s7
    ctx->pc = 0x1822a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1822a8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x1822a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1822ac: 0x2402f82a  addiu       $v0, $zero, -0x7D6
    ctx->pc = 0x1822acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
    // 0x1822b0: 0x11e5018  mult        $t2, $t0, $fp
    ctx->pc = 0x1822b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1822b4: 0x71024018  mult1       $t0, $t0, $v0
    ctx->pc = 0x1822b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1822b8: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1822b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1822bc: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x1822bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x1822c0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1822c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1822c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1822c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1822c8: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x1822c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1822cc: 0x265182a  slt         $v1, $s3, $a1
    ctx->pc = 0x1822ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1822d0: 0x28878000  slti        $a3, $a0, -0x8000
    ctx->pc = 0x1822d0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1822d4: 0x28a98000  slti        $t1, $a1, -0x8000
    ctx->pc = 0x1822d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1822d8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1822d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1822dc: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x1822dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x1822e0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1822e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1822e4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1822e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1822e8: 0x247200b  movn        $a0, $s2, $a3
    ctx->pc = 0x1822e8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    // 0x1822ec: 0x249280b  movn        $a1, $s2, $t1
    ctx->pc = 0x1822ecu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x1822f0: 0x1c2200b  movn        $a0, $t6, $v0
    ctx->pc = 0x1822f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 14));
    // 0x1822f4: 0x1941021  addu        $v0, $t4, $s4
    ctx->pc = 0x1822f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 20)));
    // 0x1822f8: 0x1a3280b  movn        $a1, $t5, $v1
    ctx->pc = 0x1822f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
    // 0x1822fc: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1822fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x182300: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x182300u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x182304: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x182304u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x182308: 0x1956021  addu        $t4, $t4, $s5
    ctx->pc = 0x182308u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
    // 0x18230c: 0xaf060000  sw          $a2, 0x0($t8)
    ctx->pc = 0x18230cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 6));
    // 0x182310: 0xa5840000  sh          $a0, 0x0($t4)
    ctx->pc = 0x182310u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x182314: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x182314u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x182318: 0xaf2a0000  sw          $t2, 0x0($t9)
    ctx->pc = 0x182318u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 10));
    // 0x18231c: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x18231cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x182320: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x182320u;
    {
        const bool branch_taken_0x182320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182320u;
            // 0x182324: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182320) {
            ctx->pc = 0x182218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182218;
        }
    }
    ctx->pc = 0x182328u;
    // 0x182328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18232c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18232cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x182334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182338: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x182338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18233c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18233cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182340: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x182340u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182344: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x182344u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182348: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x182348u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18234c: 0x3e00008  jr          $ra
    ctx->pc = 0x18234Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18234Cu;
            // 0x182350: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182354u;
    // 0x182354: 0x0  nop
    ctx->pc = 0x182354u;
    // NOP
}
