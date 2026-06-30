#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002213F0
// Address: 0x2213f0 - 0x221720
void sub_002213F0_0x2213f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002213F0_0x2213f0");
#endif

    switch (ctx->pc) {
        case 0x2214e8u: goto label_2214e8;
        case 0x221610u: goto label_221610;
        case 0x22166cu: goto label_22166c;
        case 0x221678u: goto label_221678;
        default: break;
    }

    ctx->pc = 0x2213f0u;

    // 0x2213f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2213f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2213f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2213f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2213f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2213f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2213fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2213fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x221404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221408: 0x10c000bc  beqz        $a2, . + 4 + (0xBC << 2)
    ctx->pc = 0x221408u;
    {
        const bool branch_taken_0x221408 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22140Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221408u;
            // 0x22140c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221408) {
            ctx->pc = 0x2216FCu;
            goto label_2216fc;
        }
    }
    ctx->pc = 0x221410u;
    // 0x221410: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x221410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x221414: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x221414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x221418: 0x5482002c  bnel        $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x221418u;
    {
        const bool branch_taken_0x221418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x221418) {
            ctx->pc = 0x22141Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221418u;
            // 0x22141c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2214CCu;
            goto label_2214cc;
        }
    }
    ctx->pc = 0x221420u;
    // 0x221420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221424: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x221424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x221428: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x221428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22142c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x22142cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x221430: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x221430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x221434: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x221434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x221438: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x221438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x22143c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x22143cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x221440: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x221440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x221444: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x221444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x221448: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x221448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x22144c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x22144cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x221450: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x221450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x221454: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x221454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x221458: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x221458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x22145c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x22145cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x221460: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x221460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x221464: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x221464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x221468: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x221468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x22146c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x22146cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x221470: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x221470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x221474: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x221474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x221478: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x221478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x22147c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x22147cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x221480: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x221480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x221484: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x221484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x221488: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x221488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x22148c: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x22148cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x221490: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x221490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x221494: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x221494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x221498: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x221498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x22149c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x22149cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x2214a0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2214a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2214a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2214a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2214a8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2214a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2214ac: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2214acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2214b0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2214b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2214b4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2214b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2214b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2214b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2214bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2214bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2214c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2214c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2214c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2214c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2214c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2214c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2214cc:
    // 0x2214cc: 0x10c0005c  beqz        $a2, . + 4 + (0x5C << 2)
    ctx->pc = 0x2214CCu;
    {
        const bool branch_taken_0x2214cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2214CCu;
            // 0x2214d0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214cc) {
            ctx->pc = 0x221640u;
            goto label_221640;
        }
    }
    ctx->pc = 0x2214D4u;
    // 0x2214d4: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x2214d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2214d8: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x2214D8u;
    {
        const bool branch_taken_0x2214d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2214DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2214D8u;
            // 0x2214dc: 0x24c2fff8  addiu       $v0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214d8) {
            ctx->pc = 0x2215F8u;
            goto label_2215f8;
        }
    }
    ctx->pc = 0x2214E0u;
    // 0x2214e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2214e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2214e4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2214e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2214e8:
    // 0x2214e8: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x2214e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2214ec: 0x8e0b0014  lw          $t3, 0x14($s0)
    ctx->pc = 0x2214ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2214f0: 0x891c0  sll         $s2, $t0, 7
    ctx->pc = 0x2214f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x2214f4: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x2214f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2214f8: 0x24e80002  addiu       $t0, $a3, 0x2
    ctx->pc = 0x2214f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2214fc: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2214fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221500: 0x879c0  sll         $t7, $t0, 7
    ctx->pc = 0x221500u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x221504: 0x24e80003  addiu       $t0, $a3, 0x3
    ctx->pc = 0x221504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x221508: 0x16a5023  subu        $t2, $t3, $t2
    ctx->pc = 0x221508u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x22150c: 0x871c0  sll         $t6, $t0, 7
    ctx->pc = 0x22150cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x221510: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x221510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x221514: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x221514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x221518: 0xad2a0068  sw          $t2, 0x68($t1)
    ctx->pc = 0x221518u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 10));
    // 0x22151c: 0x869c0  sll         $t5, $t0, 7
    ctx->pc = 0x22151cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x221520: 0x8e180014  lw          $t8, 0x14($s0)
    ctx->pc = 0x221520u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x221524: 0x24e80005  addiu       $t0, $a3, 0x5
    ctx->pc = 0x221524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x221528: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x221528u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22152c: 0x861c0  sll         $t4, $t0, 7
    ctx->pc = 0x22152cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x221530: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x221530u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x221534: 0x24e80006  addiu       $t0, $a3, 0x6
    ctx->pc = 0x221534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x221538: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x22153c: 0x859c0  sll         $t3, $t0, 7
    ctx->pc = 0x22153cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x221540: 0x30ac023  subu        $t8, $t8, $t2
    ctx->pc = 0x221540u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 10)));
    // 0x221544: 0x24e80007  addiu       $t0, $a3, 0x7
    ctx->pc = 0x221544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x221548: 0x851c0  sll         $t2, $t0, 7
    ctx->pc = 0x221548u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x22154c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x22154cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x221550: 0x2584021  addu        $t0, $s2, $t8
    ctx->pc = 0x221550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 24)));
    // 0x221554: 0xad280068  sw          $t0, 0x68($t1)
    ctx->pc = 0x221554u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 8));
    // 0x221558: 0x8e180014  lw          $t8, 0x14($s0)
    ctx->pc = 0x221558u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22155c: 0xe2402b  sltu        $t0, $a3, $v0
    ctx->pc = 0x22155cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x221560: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x221560u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x221564: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x221564u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x221568: 0x3129023  subu        $s2, $t8, $s2
    ctx->pc = 0x221568u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 18)));
    // 0x22156c: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x22156cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x221570: 0xad2f0068  sw          $t7, 0x68($t1)
    ctx->pc = 0x221570u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 15));
    // 0x221574: 0x8e120014  lw          $s2, 0x14($s0)
    ctx->pc = 0x221574u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x221578: 0x8e0f000c  lw          $t7, 0xC($s0)
    ctx->pc = 0x221578u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22157c: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x22157cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x221580: 0x24f7823  subu        $t7, $s2, $t7
    ctx->pc = 0x221580u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x221584: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x221584u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x221588: 0xad2e0068  sw          $t6, 0x68($t1)
    ctx->pc = 0x221588u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 14));
    // 0x22158c: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x22158cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x221590: 0x8e0e000c  lw          $t6, 0xC($s0)
    ctx->pc = 0x221590u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x221594: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x221594u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x221598: 0x1ee7023  subu        $t6, $t7, $t6
    ctx->pc = 0x221598u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x22159c: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x22159cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2215a0: 0xad2d0068  sw          $t5, 0x68($t1)
    ctx->pc = 0x2215a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 13));
    // 0x2215a4: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x2215a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2215a8: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x2215a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2215ac: 0x8c690014  lw          $t1, 0x14($v1)
    ctx->pc = 0x2215acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2215b0: 0x1cd6823  subu        $t5, $t6, $t5
    ctx->pc = 0x2215b0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x2215b4: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x2215b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x2215b8: 0xad2c0068  sw          $t4, 0x68($t1)
    ctx->pc = 0x2215b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 12));
    // 0x2215bc: 0x8e0d0014  lw          $t5, 0x14($s0)
    ctx->pc = 0x2215bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2215c0: 0x8e0c000c  lw          $t4, 0xC($s0)
    ctx->pc = 0x2215c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2215c4: 0x8c690018  lw          $t1, 0x18($v1)
    ctx->pc = 0x2215c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2215c8: 0x1ac6023  subu        $t4, $t5, $t4
    ctx->pc = 0x2215c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x2215cc: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x2215d0: 0xad2b0068  sw          $t3, 0x68($t1)
    ctx->pc = 0x2215d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 11));
    // 0x2215d4: 0x8c69001c  lw          $t1, 0x1C($v1)
    ctx->pc = 0x2215d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2215d8: 0x8e0c0014  lw          $t4, 0x14($s0)
    ctx->pc = 0x2215d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2215dc: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x2215dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2215e0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2215e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2215e4: 0x18b5823  subu        $t3, $t4, $t3
    ctx->pc = 0x2215e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2215e8: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2215e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2215ec: 0x1500ffbe  bnez        $t0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2215ECu;
    {
        const bool branch_taken_0x2215ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2215F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2215ECu;
            // 0x2215f0: 0xad2a0068  sw          $t2, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215ec) {
            ctx->pc = 0x2214E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2214e8;
        }
    }
    ctx->pc = 0x2215F4u;
    // 0x2215f4: 0x0  nop
    ctx->pc = 0x2215f4u;
    // NOP
label_2215f8:
    // 0x2215f8: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x2215f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2215fc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2215FCu;
    {
        const bool branch_taken_0x2215fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215fc) {
            ctx->pc = 0x221640u;
            goto label_221640;
        }
    }
    ctx->pc = 0x221604u;
    // 0x221604: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x221604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x221608: 0x751c0  sll         $t2, $a3, 7
    ctx->pc = 0x221608u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x22160c: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x22160cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_221610:
    // 0x221610: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x221610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x221614: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x221614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x221618: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x221618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22161c: 0xf1102b  sltu        $v0, $a3, $s1
    ctx->pc = 0x22161cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x221620: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x221620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x221624: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x221624u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x221628: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x221628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x22162c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x221630: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x221630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x221634: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x221634u;
    {
        const bool branch_taken_0x221634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221634u;
            // 0x221638: 0x254a0080  addiu       $t2, $t2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221634) {
            ctx->pc = 0x221610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221610;
        }
    }
    ctx->pc = 0x22163Cu;
    // 0x22163c: 0x0  nop
    ctx->pc = 0x22163cu;
    // NOP
label_221640:
    // 0x221640: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x221640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x221644: 0x8e120014  lw          $s2, 0x14($s0)
    ctx->pc = 0x221644u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x221648: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x221648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x22164c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x22164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x221650: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x221650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x221654: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x221654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221658: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x221658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22165c: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x22165cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x221660: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x221660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x221664: 0xc08a2cc  jal         func_228B30
    ctx->pc = 0x221664u;
    SET_GPR_U32(ctx, 31, 0x22166Cu);
    ctx->pc = 0x221668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221664u;
            // 0x221668: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228B30u;
    if (runtime->hasFunction(0x228B30u)) {
        auto targetFn = runtime->lookupFunction(0x228B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22166Cu; }
        if (ctx->pc != 0x22166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228B30_0x228b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22166Cu; }
        if (ctx->pc != 0x22166Cu) { return; }
    }
    ctx->pc = 0x22166Cu;
label_22166c:
    // 0x22166c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x22166cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x221670: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x221670u;
    {
        const bool branch_taken_0x221670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x221674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221670u;
            // 0x221674: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221670) {
            ctx->pc = 0x2216F0u;
            goto label_2216f0;
        }
    }
    ctx->pc = 0x221678u;
label_221678:
    // 0x221678: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x221678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22167c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x221680: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x221680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x221684: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x221684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x221688: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x221688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22168c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x22168cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x221690: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x221690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221694: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x221694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x221698: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x221698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22169c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x22169cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2216a0: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2216a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2216a4: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2216a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2216a8: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x2216a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2216ac: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x2216acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x2216b0: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x2216b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2216b4: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x2216b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x2216b8: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x2216b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2216bc: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x2216bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x2216c0: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x2216c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x2216c4: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x2216c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2216c8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x2216c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x2216cc: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x2216ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x2216d0: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x2216d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x2216d4: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x2216d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x2216d8: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x2216d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x2216dc: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x2216dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x2216e0: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x2216e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x2216e4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2216E4u;
    {
        const bool branch_taken_0x2216e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2216E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2216E4u;
            // 0x2216e8: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216e4) {
            ctx->pc = 0x221678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221678;
        }
    }
    ctx->pc = 0x2216ECu;
    // 0x2216ec: 0x0  nop
    ctx->pc = 0x2216ecu;
    // NOP
label_2216f0:
    // 0x2216f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2216f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2216f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2216f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2216f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2216f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2216fc:
    // 0x2216fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2216fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22170c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22170cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221710: 0x3e00008  jr          $ra
    ctx->pc = 0x221710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221710u;
            // 0x221714: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221718u;
    // 0x221718: 0x0  nop
    ctx->pc = 0x221718u;
    // NOP
    // 0x22171c: 0x0  nop
    ctx->pc = 0x22171cu;
    // NOP
}
