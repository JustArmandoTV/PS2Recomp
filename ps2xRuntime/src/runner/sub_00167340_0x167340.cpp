#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167340
// Address: 0x167340 - 0x167c30
void sub_00167340_0x167340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167340_0x167340");
#endif

    switch (ctx->pc) {
        case 0x1673b0u: goto label_1673b0;
        case 0x167410u: goto label_167410;
        case 0x167520u: goto label_167520;
        case 0x1675b0u: goto label_1675b0;
        case 0x167680u: goto label_167680;
        case 0x1678e8u: goto label_1678e8;
        case 0x167970u: goto label_167970;
        case 0x167a40u: goto label_167a40;
        default: break;
    }

    ctx->pc = 0x167340u;

    // 0x167340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x167344: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x167344u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x167348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16734c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x16734cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x167350: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x167350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x167354: 0x88c03  sra         $s1, $t0, 16
    ctx->pc = 0x167354u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 16));
    // 0x167358: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x167358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16735c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x16735cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167360: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x167360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x167364: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x167364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167368: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x167368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16736c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x16736cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167370: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x167370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x167374: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x167374u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x167378: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x167378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16737c: 0xbb403  sra         $s6, $t3, 16
    ctx->pc = 0x16737cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 11), 16));
    // 0x167380: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x167380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x167384: 0x98403  sra         $s0, $t1, 16
    ctx->pc = 0x167384u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 9), 16));
    // 0x167388: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x167388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x16738c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x16738cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167390: 0x87b50050  lh          $s5, 0x50($sp)
    ctx->pc = 0x167390u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167394: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x167394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167398: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x167398u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16739c: 0x1a600051  blez        $s3, . + 4 + (0x51 << 2)
    ctx->pc = 0x16739Cu;
    {
        const bool branch_taken_0x16739c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1673A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16739Cu;
            // 0x1673a0: 0x868e0002  lh          $t6, 0x2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16739c) {
            ctx->pc = 0x1674E4u;
            goto label_1674e4;
        }
    }
    ctx->pc = 0x1673A4u;
    // 0x1673a4: 0x241eff00  addiu       $fp, $zero, -0x100
    ctx->pc = 0x1673a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1673a8: 0x3c170063  lui         $s7, 0x63
    ctx->pc = 0x1673a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)99 << 16));
    // 0x1673ac: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x1673acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_1673b0:
    // 0x1673b0: 0x91a40001  lbu         $a0, 0x1($t5)
    ctx->pc = 0x1673b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x1673b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1673b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1673b8: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x1673b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x1673bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1673bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1673c0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1673c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1673c4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1673c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1673c8: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x1673c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x1673cc: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1673CCu;
    {
        const bool branch_taken_0x1673cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1673D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1673CCu;
            // 0x1673d0: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673cc) {
            ctx->pc = 0x1674F0u;
            goto label_1674f0;
        }
    }
    ctx->pc = 0x1673D4u;
    // 0x1673d4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1673d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1673d8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x1673d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1673dc: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x1673dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1673e0: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1673e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1673e4: 0x563818  mult        $a3, $v0, $s6
    ctx->pc = 0x1673e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1673e8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x1673e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1673ec: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x1673ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x1673f0: 0x24197fff  addiu       $t9, $zero, 0x7FFF
    ctx->pc = 0x1673f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1673f4: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1673f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1673f8: 0x26eb32e8  addiu       $t3, $s7, 0x32E8
    ctx->pc = 0x1673f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 13032));
    // 0x1673fc: 0xf51821  addu        $v1, $a3, $s5
    ctx->pc = 0x1673fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x167400: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x167400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x167404: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x167404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x167408: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x167408u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16740c: 0x0  nop
    ctx->pc = 0x16740cu;
    // NOP
label_167410:
    // 0x167410: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x167410u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x167414: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x167414u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x167418: 0x20e1018  mult        $v0, $s0, $t6
    ctx->pc = 0x167418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16741c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x16741cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167420: 0x72252018  mult1       $a0, $s1, $a1
    ctx->pc = 0x167420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x167424: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x167424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x167428: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x16742c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x167430: 0xaf2818  mult        $a1, $a1, $t7
    ctx->pc = 0x167430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x167434: 0x20ec018  mult        $t8, $s0, $t6
    ctx->pc = 0x167434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x167438: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16743c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x16743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x167440: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x167440u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x167444: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167448: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16744c: 0x4b6021  addu        $t4, $v0, $t3
    ctx->pc = 0x16744cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x167450: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x167450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x167454: 0x28838000  slti        $v1, $a0, -0x8000
    ctx->pc = 0x167454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167458: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x167458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16745c: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x16745cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x167460: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167460u;
    {
        const bool branch_taken_0x167460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167460u;
            // 0x167464: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167460) {
            ctx->pc = 0x167474u;
            goto label_167474;
        }
    }
    ctx->pc = 0x167468u;
    // 0x167468: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x167468u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x16746c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x16746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x167470: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x167470u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_167474:
    // 0x167474: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x167474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167478: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x167478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x16747c: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x16747cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167480: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x167480u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x167484: 0x6f2018  mult        $a0, $v1, $t7
    ctx->pc = 0x167484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x167488: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x167488u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16748c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x16748cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x167490: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x167490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x167494: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x167494u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x167498: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x167498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16749c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x16749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1674a0: 0x28828000  slti        $v0, $a0, -0x8000
    ctx->pc = 0x1674a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1674a4: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1674a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1674a8: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x1674a8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1674ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1674ACu;
    {
        const bool branch_taken_0x1674ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1674ACu;
            // 0x1674b0: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674ac) {
            ctx->pc = 0x1674C0u;
            goto label_1674c0;
        }
    }
    ctx->pc = 0x1674B4u;
    // 0x1674b4: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x1674b4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x1674b8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1674b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1674bc: 0x4c200b  movn        $a0, $v0, $t4
    ctx->pc = 0x1674bcu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1674c0:
    // 0x1674c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1674c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674c4: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x1674c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x1674c8: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x1674c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1674cc: 0x4e1ffd0  bgez        $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1674CCu;
    {
        const bool branch_taken_0x1674cc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1674D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1674CCu;
            // 0x1674d0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674cc) {
            ctx->pc = 0x167410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167410;
        }
    }
    ctx->pc = 0x1674D4u;
    // 0x1674d4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1674d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1674d8: 0x153102a  slt         $v0, $t2, $s3
    ctx->pc = 0x1674d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1674dc: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1674DCu;
    {
        const bool branch_taken_0x1674dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1674dc) {
            ctx->pc = 0x1674E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1674DCu;
            // 0x1674e0: 0x95a30000  lhu         $v1, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1673B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1673b0;
        }
    }
    ctx->pc = 0x1674E4u;
label_1674e4:
    // 0x1674e4: 0xa68e0002  sh          $t6, 0x2($s4)
    ctx->pc = 0x1674e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x1674e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1674e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674ec: 0xa6850000  sh          $a1, 0x0($s4)
    ctx->pc = 0x1674ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
label_1674f0:
    // 0x1674f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1674f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1674f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1674f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1674f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1674f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1674fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1674fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167500: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x167500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167504: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x167504u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167508: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x167508u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16750c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16750cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167510: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x167510u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167514: 0x3e00008  jr          $ra
    ctx->pc = 0x167514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167514u;
            // 0x167518: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16751Cu;
    // 0x16751c: 0x0  nop
    ctx->pc = 0x16751cu;
    // NOP
label_167520:
    // 0x167520: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x167520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x167524: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x167528: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x167528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16752c: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x16752cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x167530: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x167534: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x167534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x167538: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x167538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x16753c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x16753cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167540: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x167540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x167544: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x167544u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x167548: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x167548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16754c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x167550: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x167550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x167554: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x167554u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x167558: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x167558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x16755c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x16755cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167560: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x167560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x167564: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x167564u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x167568: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x167568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16756c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x16756cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167570: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x167570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x167574: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x167574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x167578: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x167578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x16757c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x16757cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x167580: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x167580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x167584: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x167584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x167588: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x167588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x16758c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x16758cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x167590: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x167590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167594: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x167594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x167598: 0x84f80000  lh          $t8, 0x0($a3)
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16759c: 0x84ec0002  lh          $t4, 0x2($a3)
    ctx->pc = 0x16759cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1675a0: 0x84b90000  lh          $t9, 0x0($a1)
    ctx->pc = 0x1675a0u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1675a4: 0x18c000bd  blez        $a2, . + 4 + (0xBD << 2)
    ctx->pc = 0x1675A4u;
    {
        const bool branch_taken_0x1675a4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1675A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1675A4u;
            // 0x1675a8: 0x84b10002  lh          $s1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675a4) {
            ctx->pc = 0x16789Cu;
            goto label_16789c;
        }
    }
    ctx->pc = 0x1675ACu;
    // 0x1675ac: 0x0  nop
    ctx->pc = 0x1675acu;
    // NOP
label_1675b0:
    // 0x1675b0: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x1675b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1675b4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1675b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1675b8: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x1675b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x1675bc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1675c0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1675c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1675c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1675c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1675c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1675cc: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x1675ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1675d0: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x1675d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1675d4: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1675D4u;
    {
        const bool branch_taken_0x1675d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1675D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1675D4u;
            // 0x1675d8: 0x171040  sll         $v0, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675d4) {
            ctx->pc = 0x1678B8u;
            goto label_1678b8;
        }
    }
    ctx->pc = 0x1675DCu;
    // 0x1675dc: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1675dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1675e0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1675e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1675e4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1675e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1675e8: 0xc00013  mtlo        $a2
    ctx->pc = 0x1675e8u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x1675ec: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1675f0: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x1675f0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1675f4: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x1675f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1675f8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x1675f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x1675fc: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1675fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x167600: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x167600u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x167604: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x167604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167608: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x167608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x16760c: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x16760cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x167610: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x167610u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x167614: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x167614u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x167618: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x167618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x16761c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x16761cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x167620: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x167620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x167624: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x167624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x167628: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x167628u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16762c: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x16762cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x167630: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x167630u;
    {
        const bool branch_taken_0x167630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167630u;
            // 0x167634: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167630) {
            ctx->pc = 0x1678B8u;
            goto label_1678b8;
        }
    }
    ctx->pc = 0x167638u;
    // 0x167638: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16763c: 0x249e32e8  addiu       $fp, $a0, 0x32E8
    ctx->pc = 0x16763cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 13032));
    // 0x167640: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x167640u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x167644: 0x600013  mtlo        $v1
    ctx->pc = 0x167644u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x167648: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x167648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16764c: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x16764cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167650: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x167650u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x167654: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x167654u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167658: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x167658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x16765c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167660: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x167660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x167664: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x167664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x167668: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x167668u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x16766c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x16766cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167670: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x167670u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x167674: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x167674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x167678: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x167678u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16767c: 0x0  nop
    ctx->pc = 0x16767cu;
    // NOP
label_167680:
    // 0x167680: 0x91e20000  lbu         $v0, 0x0($t7)
    ctx->pc = 0x167680u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x167684: 0x24c3018  mult        $a2, $s2, $t4
    ctx->pc = 0x167684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x167688: 0x72781818  mult1       $v1, $s3, $t8
    ctx->pc = 0x167688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16768c: 0x91e40012  lbu         $a0, 0x12($t7)
    ctx->pc = 0x16768cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x167690: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x167690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x167694: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x167694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x167698: 0x22f03  sra         $a1, $v0, 28
    ctx->pc = 0x167698u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 28));
    // 0x16769c: 0x27603  sra         $t6, $v0, 24
    ctx->pc = 0x16769cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1676a0: 0xb52818  mult        $a1, $a1, $s5
    ctx->pc = 0x1676a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1676a4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1676a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1676a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1676ac: 0x46703  sra         $t4, $a0, 28
    ctx->pc = 0x1676acu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 28));
    // 0x1676b0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1676b4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1676b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1676b8: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1676bc: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x1676bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1676c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1676C0u;
    {
        const bool branch_taken_0x1676c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1676C0u;
            // 0x1676c4: 0x43e03  sra         $a3, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676c0) {
            ctx->pc = 0x1676E0u;
            goto label_1676e0;
        }
    }
    ctx->pc = 0x1676C8u;
    // 0x1676c8: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x1676c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1676cc: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1676ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1676d0: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1676d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1676d4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1676d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1676d8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1676d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1676dc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1676dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1676e0:
    // 0x1676e0: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x1676e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1676e4: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x1676e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1676e8: 0x1942018  mult        $a0, $t4, $s4
    ctx->pc = 0x1676e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1676ec: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x1676ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676f0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x1676f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1676f8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x1676f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1676fc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1676fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167700: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x167700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x167704: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x167704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x167708: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x167708u;
    {
        const bool branch_taken_0x167708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167708u;
            // 0x16770c: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167708) {
            ctx->pc = 0x167728u;
            goto label_167728;
        }
    }
    ctx->pc = 0x167710u;
    // 0x167710: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x167710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167714: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x167714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x167718: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x167718u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x16771c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x16771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x167720: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x167720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x167724: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x167724u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_167728:
    // 0x167728: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x167728u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16772c: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x16772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x167730: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x167730u;
    {
        const bool branch_taken_0x167730 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x167730) {
            ctx->pc = 0x167734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167730u;
            // 0x167734: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x167738u;
            goto label_167738;
        }
    }
    ctx->pc = 0x167738u;
label_167738:
    // 0x167738: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x167738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16773c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16773cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167740: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x167740u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x167744: 0x1012  mflo        $v0
    ctx->pc = 0x167744u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x167748: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x167748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16774c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x16774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x167750: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x167750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x167754: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x167754u;
    {
        const bool branch_taken_0x167754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167754u;
            // 0x167758: 0x31c2000f  andi        $v0, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167754) {
            ctx->pc = 0x167778u;
            goto label_167778;
        }
    }
    ctx->pc = 0x16775Cu;
    // 0x16775c: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x16775cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167760: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x167760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x167764: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x167764u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x167768: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x167768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16776c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x16776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x167770: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x167770u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x167774: 0x31c2000f  andi        $v0, $t6, 0xF
    ctx->pc = 0x167774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_167778:
    // 0x167778: 0x24c2818  mult        $a1, $s2, $t4
    ctx->pc = 0x167778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16777c: 0x72782018  mult1       $a0, $s3, $t8
    ctx->pc = 0x16777cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x167780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167784: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x167784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x167788: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x167788u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x16778c: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x16778cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167790: 0x30e3000f  andi        $v1, $a3, 0xF
    ctx->pc = 0x167790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x167794: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x167794u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x167798: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x167798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x16779c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1677a0: 0x1d52818  mult        $a1, $t6, $s5
    ctx->pc = 0x1677a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1677a4: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1677a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1677a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1677a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1677ac: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1677acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1677b0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1677b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1677b4: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1677b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1677b8: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1677b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1677bc: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x1677bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1677c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1677C0u;
    {
        const bool branch_taken_0x1677c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677C0u;
            // 0x1677c4: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677c0) {
            ctx->pc = 0x1677E0u;
            goto label_1677e0;
        }
    }
    ctx->pc = 0x1677C8u;
    // 0x1677c8: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x1677c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1677cc: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1677ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1677d0: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1677d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1677d4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1677d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1677d8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1677d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1677dc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1677dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1677e0:
    // 0x1677e0: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x1677e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1677e4: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x1677e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1677e8: 0xf42018  mult        $a0, $a3, $s4
    ctx->pc = 0x1677e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1677ec: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x1677ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677f0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x1677f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1677f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1677f8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x1677f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1677fc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1677fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167800: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x167800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x167804: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x167804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x167808: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x167808u;
    {
        const bool branch_taken_0x167808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16780Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167808u;
            // 0x16780c: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167808) {
            ctx->pc = 0x167828u;
            goto label_167828;
        }
    }
    ctx->pc = 0x167810u;
    // 0x167810: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x167810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167814: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x167814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x167818: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x167818u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x16781c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x16781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x167820: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x167820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x167824: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x167824u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_167828:
    // 0x167828: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x167828u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16782c: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x16782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x167830: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x167830u;
    {
        const bool branch_taken_0x167830 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x167830) {
            ctx->pc = 0x167834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167830u;
            // 0x167834: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x167838u;
            goto label_167838;
        }
    }
    ctx->pc = 0x167838u;
label_167838:
    // 0x167838: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x167838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16783c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167840: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x167840u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x167844: 0x1012  mflo        $v0
    ctx->pc = 0x167844u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x167848: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x167848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16784c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x16784cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x167850: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x167850u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x167854: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x167854u;
    {
        const bool branch_taken_0x167854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167854u;
            // 0x167858: 0x26d6fffe  addiu       $s6, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167854) {
            ctx->pc = 0x167874u;
            goto label_167874;
        }
    }
    ctx->pc = 0x16785Cu;
    // 0x16785c: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x16785cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167860: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x167860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x167864: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x167864u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x167868: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x167868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16786c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x16786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x167870: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x167870u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_167874:
    // 0x167874: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x167874u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x167878: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x167878u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x16787c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x16787cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x167880: 0x6c1ff7f  bgez        $s6, . + 4 + (-0x81 << 2)
    ctx->pc = 0x167880u;
    {
        const bool branch_taken_0x167880 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x167884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167880u;
            // 0x167884: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167880) {
            ctx->pc = 0x167680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167680;
        }
    }
    ctx->pc = 0x167888u;
    // 0x167888: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x167888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16788c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x16788cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x167890: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x167890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167894: 0x1440ff46  bnez        $v0, . + 4 + (-0xBA << 2)
    ctx->pc = 0x167894u;
    {
        const bool branch_taken_0x167894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167894u;
            // 0x167898: 0x25ef0012  addiu       $t7, $t7, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167894) {
            ctx->pc = 0x1675B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1675b0;
        }
    }
    ctx->pc = 0x16789Cu;
label_16789c:
    // 0x16789c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x16789cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1678a0: 0xa4ac0002  sh          $t4, 0x2($a1)
    ctx->pc = 0x1678a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x1678a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1678a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1678a8: 0xa4b80000  sh          $t8, 0x0($a1)
    ctx->pc = 0x1678a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x1678ac: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1678acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1678b0: 0xa4d10002  sh          $s1, 0x2($a2)
    ctx->pc = 0x1678b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x1678b4: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x1678b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
label_1678b8:
    // 0x1678b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1678b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1678bc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1678bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1678c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1678c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1678c4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1678c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1678c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1678c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1678cc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1678ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1678d0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1678d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1678d4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1678d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1678d8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1678d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1678dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1678DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1678E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1678DCu;
            // 0x1678e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1678E4u;
    // 0x1678e4: 0x0  nop
    ctx->pc = 0x1678e4u;
    // NOP
label_1678e8:
    // 0x1678e8: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1678e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1678ec: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1678ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1678f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1678f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1678f4: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x1678f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1678f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1678f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1678fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1678fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x167900: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x167900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x167904: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x167904u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167908: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x167908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16790c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x16790cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x167910: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x167910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x167914: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x167914u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x167918: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x167918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16791c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x16791cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x167920: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x167920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x167924: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x167924u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167928: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x167928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16792c: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x16792cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x167930: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x167930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x167934: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x167934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x167938: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x167938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x16793c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x16793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x167940: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x167940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x167944: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x167944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x167948: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x167948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x16794c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x16794cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x167950: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x167950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x167954: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x167954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x167958: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x167958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16795c: 0x84ed0000  lh          $t5, 0x0($a3)
    ctx->pc = 0x16795cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x167960: 0x84ea0002  lh          $t2, 0x2($a3)
    ctx->pc = 0x167960u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x167964: 0x852e0000  lh          $t6, 0x0($t1)
    ctx->pc = 0x167964u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x167968: 0x1880009f  blez        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x167968u;
    {
        const bool branch_taken_0x167968 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x16796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167968u;
            // 0x16796c: 0x85300002  lh          $s0, 0x2($t1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167968) {
            ctx->pc = 0x167BE8u;
            goto label_167be8;
        }
    }
    ctx->pc = 0x167970u;
label_167970:
    // 0x167970: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x167970u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x167974: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x167974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x167978: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x167978u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x16797c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x16797cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x167980: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x167980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x167984: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x167984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x167988: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x167988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16798c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x16798cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x167990: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x167990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x167994: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x167994u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x167998: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x167998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x16799c: 0x14600099  bnez        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x16799Cu;
    {
        const bool branch_taken_0x16799c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1679A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16799Cu;
            // 0x1679a0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16799c) {
            ctx->pc = 0x167C04u;
            goto label_167c04;
        }
    }
    ctx->pc = 0x1679A4u;
    // 0x1679a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1679a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1679a8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1679a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1679ac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1679acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1679b0: 0xc00013  mtlo        $a2
    ctx->pc = 0x1679b0u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x1679b4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1679b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1679b8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1679b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1679bc: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x1679bcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1679c0: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x1679c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1679c4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x1679c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x1679c8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1679c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1679cc: 0x24770001  addiu       $s7, $v1, 0x1
    ctx->pc = 0x1679ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1679d0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1679d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1679d4: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x1679d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1679d8: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x1679d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1679dc: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x1679dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x1679e0: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x1679e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x1679e4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1679e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1679e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1679e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1679ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1679ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1679f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1679f4: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x1679f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1679f8: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x1679f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1679fc: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1679FCu;
    {
        const bool branch_taken_0x1679fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1679FCu;
            // 0x167a00: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679fc) {
            ctx->pc = 0x167C04u;
            goto label_167c04;
        }
    }
    ctx->pc = 0x167A04u;
    // 0x167a04: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x167a04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x167a08: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x167a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167a0c: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x167a0cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167a10: 0x600013  mtlo        $v1
    ctx->pc = 0x167a10u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x167a14: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x167a18: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x167a18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x167a1c: 0x24187fff  addiu       $t8, $zero, 0x7FFF
    ctx->pc = 0x167a1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x167a20: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x167a20u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167a24: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x167a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x167a28: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x167a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x167a2c: 0x241e001e  addiu       $fp, $zero, 0x1E
    ctx->pc = 0x167a2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x167a30: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x167a30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x167a34: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x167a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x167a38: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x167a38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x167a3c: 0x0  nop
    ctx->pc = 0x167a3cu;
    // NOP
label_167a40:
    // 0x167a40: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x167a40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x167a44: 0x24a1018  mult        $v0, $s2, $t2
    ctx->pc = 0x167a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167a48: 0x726d2018  mult1       $a0, $s3, $t5
    ctx->pc = 0x167a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x167a4c: 0x91e60012  lbu         $a2, 0x12($t7)
    ctx->pc = 0x167a4cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x167a50: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x167a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x167a54: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x167a54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a58: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x167a58u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x167a5c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x167a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x167a60: 0xb72818  mult        $a1, $a1, $s7
    ctx->pc = 0x167a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x167a64: 0x36603  sra         $t4, $v1, 24
    ctx->pc = 0x167a64u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 24));
    // 0x167a68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x167a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167a6c: 0x3182000f  andi        $v0, $t4, 0xF
    ctx->pc = 0x167a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x167a70: 0x61f03  sra         $v1, $a2, 28
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 28));
    // 0x167a74: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x167a74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x167a78: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x167a78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x167a7c: 0x746018  mult        $t4, $v1, $s4
    ctx->pc = 0x167a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x167a80: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x167a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x167a84: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x167a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x167a88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167a8c: 0x246332e8  addiu       $v1, $v1, 0x32E8
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13032));
    // 0x167a90: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x167a90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167a94: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x167a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x167a98: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x167a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167a9c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x167a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x167aa0: 0x24a8818  mult        $s1, $s2, $t2
    ctx->pc = 0x167aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x167aa4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x167aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x167aa8: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x167aa8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x167aac: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x167aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x167ab0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167AB0u;
    {
        const bool branch_taken_0x167ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167AB0u;
            // 0x167ab4: 0x30c9000f  andi        $t1, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ab0) {
            ctx->pc = 0x167AC4u;
            goto label_167ac4;
        }
    }
    ctx->pc = 0x167AB8u;
    // 0x167ab8: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x167ab8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x167abc: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x167abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x167ac0: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x167ac0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_167ac4:
    // 0x167ac4: 0x2502018  mult        $a0, $s2, $s0
    ctx->pc = 0x167ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x167ac8: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x167ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167acc: 0x726e1018  mult1       $v0, $s3, $t6
    ctx->pc = 0x167accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167ad0: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x167ad0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ad4: 0x26d1818  mult        $v1, $s3, $t5
    ctx->pc = 0x167ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x167ad8: 0x2503818  mult        $a3, $s2, $s0
    ctx->pc = 0x167ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x167adc: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x167adcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ae0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x167ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x167ae4: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x167ae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x167ae8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x167ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x167aec: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x167aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x167af0: 0x33303  sra         $a2, $v1, 12
    ctx->pc = 0x167af0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 12));
    // 0x167af4: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x167af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x167af8: 0x28a28000  slti        $v0, $a1, -0x8000
    ctx->pc = 0x167af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167afc: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x167afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x167b00: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x167b00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x167b04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x167B04u;
    {
        const bool branch_taken_0x167b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167B04u;
            // 0x167b08: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b04) {
            ctx->pc = 0x167B18u;
            goto label_167b18;
        }
    }
    ctx->pc = 0x167B0Cu;
    // 0x167b0c: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x167b0cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x167b10: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x167b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x167b14: 0x4c280b  movn        $a1, $v0, $t4
    ctx->pc = 0x167b14u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_167b18:
    // 0x167b18: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x167b18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x167b1c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x167b1cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b20: 0x26e1018  mult        $v0, $s3, $t6
    ctx->pc = 0x167b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167b24: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x167b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x167b28: 0x1972018  mult        $a0, $t4, $s7
    ctx->pc = 0x167b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x167b2c: 0x24a532e8  addiu       $a1, $a1, 0x32E8
    ctx->pc = 0x167b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13032));
    // 0x167b30: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x167b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x167b34: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x167b34u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x167b38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x167b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167b3c: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x167b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b40: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x167b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x167b44: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x167b44u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x167b48: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x167b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x167b4c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b50: 0x26303  sra         $t4, $v0, 12
    ctx->pc = 0x167b50u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 12));
    // 0x167b54: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x167b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x167b58: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x167b58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167b5c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x167b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x167b60: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x167b60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x167b64: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x167b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x167b68: 0xd43018  mult        $a2, $a2, $s4
    ctx->pc = 0x167b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x167b6c: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x167b6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x167b70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167B70u;
    {
        const bool branch_taken_0x167b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167B70u;
            // 0x167b74: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b70) {
            ctx->pc = 0x167B84u;
            goto label_167b84;
        }
    }
    ctx->pc = 0x167B78u;
    // 0x167b78: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x167b78u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x167b7c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x167b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x167b80: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x167b80u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_167b84:
    // 0x167b84: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x167b84u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b88: 0x1862821  addu        $a1, $t4, $a2
    ctx->pc = 0x167b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x167b8c: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x167b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x167b90: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x167b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x167b94: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x167b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x167b98: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x167b98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x167b9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167B9Cu;
    {
        const bool branch_taken_0x167b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167B9Cu;
            // 0x167ba0: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b9c) {
            ctx->pc = 0x167BB0u;
            goto label_167bb0;
        }
    }
    ctx->pc = 0x167BA4u;
    // 0x167ba4: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x167ba4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x167ba8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x167ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x167bac: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x167bacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_167bb0:
    // 0x167bb0: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x167bb0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bb4: 0x27defffe  addiu       $fp, $fp, -0x2
    ctx->pc = 0x167bb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x167bb8: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x167bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x167bbc: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x167bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x167bc0: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x167bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x167bc4: 0x7c1ff9e  bgez        $fp, . + 4 + (-0x62 << 2)
    ctx->pc = 0x167BC4u;
    {
        const bool branch_taken_0x167bc4 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x167BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167BC4u;
            // 0x167bc8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bc4) {
            ctx->pc = 0x167A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167a40;
        }
    }
    ctx->pc = 0x167BCCu;
    // 0x167bcc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x167bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x167bd0: 0x25ef0012  addiu       $t7, $t7, 0x12
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
    // 0x167bd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167bd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x167bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x167bdc: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x167bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167be0: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x167BE0u;
    {
        const bool branch_taken_0x167be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167BE0u;
            // 0x167be4: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167be0) {
            ctx->pc = 0x167970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167970;
        }
    }
    ctx->pc = 0x167BE8u;
label_167be8:
    // 0x167be8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x167be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x167bec: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x167becu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x167bf0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167bf4: 0xa48d0000  sh          $t5, 0x0($a0)
    ctx->pc = 0x167bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x167bf8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x167bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167bfc: 0xa4b00002  sh          $s0, 0x2($a1)
    ctx->pc = 0x167bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x167c00: 0xa4ae0000  sh          $t6, 0x0($a1)
    ctx->pc = 0x167c00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 14));
label_167c04:
    // 0x167c04: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x167c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167c08: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x167c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167c0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x167c0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167c10: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x167c10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167c14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x167c14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167c18: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x167c18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x167c1c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x167c1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167c20: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x167c20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x167c24: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x167c24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167c28: 0x3e00008  jr          $ra
    ctx->pc = 0x167C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167C28u;
            // 0x167c2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167C30u;
}
