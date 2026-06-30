#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00556900
// Address: 0x556900 - 0x556a80
void sub_00556900_0x556900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00556900_0x556900");
#endif

    switch (ctx->pc) {
        case 0x556924u: goto label_556924;
        case 0x556930u: goto label_556930;
        case 0x556968u: goto label_556968;
        case 0x5569a0u: goto label_5569a0;
        case 0x5569f0u: goto label_5569f0;
        case 0x556a48u: goto label_556a48;
        case 0x556a60u: goto label_556a60;
        default: break;
    }

    ctx->pc = 0x556900u;

    // 0x556900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x556900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556904: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x556904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x556908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55690c: 0x3c0904c1  lui         $t1, 0x4C1
    ctx->pc = 0x55690cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1217 << 16));
    // 0x556910: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x556910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x556914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x556914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x556918: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x556918u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x55691c: 0x352c1db7  ori         $t4, $t1, 0x1DB7
    ctx->pc = 0x55691cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)7607);
    // 0x556920: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x556920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_556924:
    // 0x556924: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x556924u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556928: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x556928u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55692c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x55692cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_556930:
    // 0x556930: 0x31e90001  andi        $t1, $t7, 0x1
    ctx->pc = 0x556930u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x556934: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x556934u;
    {
        const bool branch_taken_0x556934 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x556934) {
            ctx->pc = 0x556948u;
            goto label_556948;
        }
    }
    ctx->pc = 0x55693Cu;
    // 0x55693c: 0x6e4823  subu        $t1, $v1, $t6
    ctx->pc = 0x55693cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x556940: 0x1254804  sllv        $t1, $a1, $t1
    ctx->pc = 0x556940u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 9) & 0x1F));
    // 0x556944: 0x1695825  or          $t3, $t3, $t1
    ctx->pc = 0x556944u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_556948:
    // 0x556948: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x556948u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x55694c: 0x29c90009  slti        $t1, $t6, 0x9
    ctx->pc = 0x55694cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x556950: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x556950u;
    {
        const bool branch_taken_0x556950 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x556954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556950u;
            // 0x556954: 0xf7843  sra         $t7, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556950) {
            ctx->pc = 0x556930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556930;
        }
    }
    ctx->pc = 0x556958u;
    // 0x556958: 0xb4e00  sll         $t1, $t3, 24
    ctx->pc = 0x556958u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x55695c: 0x60c02d  daddu       $t8, $v1, $zero
    ctx->pc = 0x55695cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556960: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x556960u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x556964: 0x867821  addu        $t7, $a0, $a2
    ctx->pc = 0x556964u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_556968:
    // 0x556968: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x556968u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x55696c: 0x1cd4824  and         $t1, $t6, $t5
    ctx->pc = 0x55696cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x556970: 0x51200002  beql        $t1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x556970u;
    {
        const bool branch_taken_0x556970 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x556970) {
            ctx->pc = 0x556974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556970u;
            // 0x556974: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55697Cu;
            goto label_55697c;
        }
    }
    ctx->pc = 0x556978u;
    // 0x556978: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x556978u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_55697c:
    // 0x55697c: 0xe4840  sll         $t1, $t6, 1
    ctx->pc = 0x55697cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x556980: 0x2718ffff  addiu       $t8, $t8, -0x1
    ctx->pc = 0x556980u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x556984: 0x12b4826  xor         $t1, $t1, $t3
    ctx->pc = 0x556984u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 11));
    // 0x556988: 0x1700fff7  bnez        $t8, . + 4 + (-0x9 << 2)
    ctx->pc = 0x556988u;
    {
        const bool branch_taken_0x556988 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x55698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556988u;
            // 0x55698c: 0xade90000  sw          $t1, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556988) {
            ctx->pc = 0x556968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556968;
        }
    }
    ctx->pc = 0x556990u;
    // 0x556990: 0x8cef0000  lw          $t7, 0x0($a3)
    ctx->pc = 0x556990u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x556994: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x556994u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556998: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x556998u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55699c: 0x0  nop
    ctx->pc = 0x55699cu;
    // NOP
label_5569a0:
    // 0x5569a0: 0x31e90001  andi        $t1, $t7, 0x1
    ctx->pc = 0x5569a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x5569a4: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5569A4u;
    {
        const bool branch_taken_0x5569a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x5569a4) {
            ctx->pc = 0x5569B8u;
            goto label_5569b8;
        }
    }
    ctx->pc = 0x5569ACu;
    // 0x5569ac: 0x14e4823  subu        $t1, $t2, $t6
    ctx->pc = 0x5569acu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x5569b0: 0x1254804  sllv        $t1, $a1, $t1
    ctx->pc = 0x5569b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 9) & 0x1F));
    // 0x5569b4: 0x1695825  or          $t3, $t3, $t1
    ctx->pc = 0x5569b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_5569b8:
    // 0x5569b8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x5569b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x5569bc: 0x29c90021  slti        $t1, $t6, 0x21
    ctx->pc = 0x5569bcu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x5569c0: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x5569C0u;
    {
        const bool branch_taken_0x5569c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x5569C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5569C0u;
            // 0x5569c4: 0xf7843  sra         $t7, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5569c0) {
            ctx->pc = 0x5569A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5569a0;
        }
    }
    ctx->pc = 0x5569C8u;
    // 0x5569c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x5569c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x5569cc: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x5569ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x5569d0: 0x29090100  slti        $t1, $t0, 0x100
    ctx->pc = 0x5569d0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x5569d4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x5569d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x5569d8: 0x1520ffd2  bnez        $t1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x5569D8u;
    {
        const bool branch_taken_0x5569d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x5569DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5569D8u;
            // 0x5569dc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5569d8) {
            ctx->pc = 0x556924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556924;
        }
    }
    ctx->pc = 0x5569E0u;
    // 0x5569e0: 0x3e00008  jr          $ra
    ctx->pc = 0x5569E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5569E8u;
    // 0x5569e8: 0x0  nop
    ctx->pc = 0x5569e8u;
    // NOP
    // 0x5569ec: 0x0  nop
    ctx->pc = 0x5569ecu;
    // NOP
label_5569f0:
    // 0x5569f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5569f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5569f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5569f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5569f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5569f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5569fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5569fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x556a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x556a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556a04: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x556A04u;
    {
        const bool branch_taken_0x556a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x556A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556A04u;
            // 0x556a08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556a04) {
            ctx->pc = 0x556A60u;
            goto label_556a60;
        }
    }
    ctx->pc = 0x556A0Cu;
    // 0x556a0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x556a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x556a10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x556a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x556a14: 0x24637a30  addiu       $v1, $v1, 0x7A30
    ctx->pc = 0x556a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31280));
    // 0x556a18: 0x24427a68  addiu       $v0, $v0, 0x7A68
    ctx->pc = 0x556a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31336));
    // 0x556a1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x556a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x556a20: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x556A20u;
    {
        const bool branch_taken_0x556a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x556A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556A20u;
            // 0x556a24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556a20) {
            ctx->pc = 0x556A48u;
            goto label_556a48;
        }
    }
    ctx->pc = 0x556A28u;
    // 0x556a28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x556a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x556a2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x556a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x556a30: 0x24637b90  addiu       $v1, $v1, 0x7B90
    ctx->pc = 0x556a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31632));
    // 0x556a34: 0x24427bc8  addiu       $v0, $v0, 0x7BC8
    ctx->pc = 0x556a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31688));
    // 0x556a38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x556a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x556a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x556a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556a40: 0xc155aa0  jal         func_556A80
    ctx->pc = 0x556A40u;
    SET_GPR_U32(ctx, 31, 0x556A48u);
    ctx->pc = 0x556A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556A40u;
            // 0x556a44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556A80u;
    if (runtime->hasFunction(0x556A80u)) {
        auto targetFn = runtime->lookupFunction(0x556A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556A48u; }
        if (ctx->pc != 0x556A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556A80_0x556a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556A48u; }
        if (ctx->pc != 0x556A48u) { return; }
    }
    ctx->pc = 0x556A48u;
label_556a48:
    // 0x556a48: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x556a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x556a4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x556a4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x556a50: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x556A50u;
    {
        const bool branch_taken_0x556a50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x556a50) {
            ctx->pc = 0x556A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556A50u;
            // 0x556a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556A64u;
            goto label_556a64;
        }
    }
    ctx->pc = 0x556A58u;
    // 0x556a58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x556A58u;
    SET_GPR_U32(ctx, 31, 0x556A60u);
    ctx->pc = 0x556A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556A58u;
            // 0x556a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556A60u; }
        if (ctx->pc != 0x556A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556A60u; }
        if (ctx->pc != 0x556A60u) { return; }
    }
    ctx->pc = 0x556A60u;
label_556a60:
    // 0x556a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x556a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_556a64:
    // 0x556a64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x556a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x556a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x556a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x556a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x556a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x556a70: 0x3e00008  jr          $ra
    ctx->pc = 0x556A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x556A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556A70u;
            // 0x556a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x556A78u;
    // 0x556a78: 0x0  nop
    ctx->pc = 0x556a78u;
    // NOP
    // 0x556a7c: 0x0  nop
    ctx->pc = 0x556a7cu;
    // NOP
}
