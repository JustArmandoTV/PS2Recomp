#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197538
// Address: 0x197538 - 0x197620
void sub_00197538_0x197538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197538_0x197538");
#endif

    ctx->pc = 0x197538u;

    // 0x197538: 0x8c8d0014  lw          $t5, 0x14($a0)
    ctx->pc = 0x197538u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19753c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19753cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197540: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x197540u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197544: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x197544u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197548: 0xd102a  slt         $v0, $zero, $t5
    ctx->pc = 0x197548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x19754c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x19754cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197550: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x197550u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197554: 0x62680a  movz        $t5, $v1, $v0
    ctx->pc = 0x197554u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x197558: 0xe0c82d  daddu       $t9, $a3, $zero
    ctx->pc = 0x197558u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19755c: 0x15cb000c  bne         $t6, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x19755Cu;
    {
        const bool branch_taken_0x19755c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 11));
        ctx->pc = 0x197560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19755Cu;
            // 0x197560: 0x8c8c0004  lw          $t4, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19755c) {
            ctx->pc = 0x197590u;
            goto label_197590;
        }
    }
    ctx->pc = 0x197564u;
    // 0x197564: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x197564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x197568: 0x29830000  slti        $v1, $t4, 0x0
    ctx->pc = 0x197568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19756c: 0x83600b  movn        $t4, $a0, $v1
    ctx->pc = 0x19756cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x197570: 0xc1383  sra         $v0, $t4, 14
    ctx->pc = 0x197570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 14));
    // 0x197574: 0x4d1018  mult        $v0, $v0, $t5
    ctx->pc = 0x197574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197578: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x197578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x19757c: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x19757cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x197580: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x197580u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x197584: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x197584u;
    {
        const bool branch_taken_0x197584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197584u;
            // 0x197588: 0xaf200000  sw          $zero, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197584) {
            ctx->pc = 0x1975C8u;
            goto label_1975c8;
        }
    }
    ctx->pc = 0x19758Cu;
    // 0x19758c: 0x0  nop
    ctx->pc = 0x19758cu;
    // NOP
label_197590:
    // 0x197590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197594: 0x15c20010  bne         $t6, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x197594u;
    {
        const bool branch_taken_0x197594 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x197598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197594u;
            // 0x197598: 0x29830000  slti        $v1, $t4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197594) {
            ctx->pc = 0x1975D8u;
            goto label_1975d8;
        }
    }
    ctx->pc = 0x19759Cu;
    // 0x19759c: 0x29820000  slti        $v0, $t4, 0x0
    ctx->pc = 0x19759cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1975a0: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x1975a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x1975a4: 0x82600b  movn        $t4, $a0, $v0
    ctx->pc = 0x1975a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x1975a8: 0xc1b83  sra         $v1, $t4, 14
    ctx->pc = 0x1975a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 14));
    // 0x1975ac: 0x6d1018  mult        $v0, $v1, $t5
    ctx->pc = 0x1975acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1975b0: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1975b4: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x1975b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1975b8: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1975b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1975bc: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x1975bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x1975c0: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x1975c0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x1975c4: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x1975c4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
label_1975c8:
    // 0x1975c8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1975c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1975cc: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1975ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1975d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1975D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1975D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975D0u;
            // 0x1975d4: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1975D8u;
label_1975d8:
    // 0x1975d8: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x1975d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x1975dc: 0x83600b  movn        $t4, $a0, $v1
    ctx->pc = 0x1975dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x1975e0: 0x24055dcc  addiu       $a1, $zero, 0x5DCC
    ctx->pc = 0x1975e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24012));
    // 0x1975e4: 0xc1383  sra         $v0, $t4, 14
    ctx->pc = 0x1975e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 14));
    // 0x1975e8: 0x24065f0c  addiu       $a2, $zero, 0x5F0C
    ctx->pc = 0x1975e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24332));
    // 0x1975ec: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x1975ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1975f0: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1975f4: 0x340781c0  ori         $a3, $zero, 0x81C0
    ctx->pc = 0x1975f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
    // 0x1975f8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x1975f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1975fc: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1975fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x197600: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x197600u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x197604: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x197604u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x197608: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x197608u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x19760c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x19760cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x197610: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x197610u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x197614: 0x3e00008  jr          $ra
    ctx->pc = 0x197614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197614u;
            // 0x197618: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19761Cu;
    // 0x19761c: 0x0  nop
    ctx->pc = 0x19761cu;
    // NOP
}
