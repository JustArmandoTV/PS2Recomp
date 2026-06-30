#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B2550
// Address: 0x4b2550 - 0x4b2680
void sub_004B2550_0x4b2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2550_0x4b2550");
#endif

    switch (ctx->pc) {
        case 0x4b25ccu: goto label_4b25cc;
        case 0x4b25ecu: goto label_4b25ec;
        default: break;
    }

    ctx->pc = 0x4b2550u;

    // 0x4b2550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b2550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b2554: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b2558: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b2558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4b255c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4b2560: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4b2560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2564: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b2564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b2568: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4b2568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b256c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b2570: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2570u;
    {
        const bool branch_taken_0x4b2570 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2570u;
            // 0x4b2574: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2570) {
            ctx->pc = 0x4B2580u;
            goto label_4b2580;
        }
    }
    ctx->pc = 0x4B2578u;
    // 0x4b2578: 0x52600038  beql        $s3, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x4B2578u;
    {
        const bool branch_taken_0x4b2578 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2578) {
            ctx->pc = 0x4B257Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2578u;
            // 0x4b257c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B265Cu;
            goto label_4b265c;
        }
    }
    ctx->pc = 0x4B2580u;
label_4b2580:
    // 0x4b2580: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B2580u;
    {
        const bool branch_taken_0x4b2580 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2580) {
            ctx->pc = 0x4B258Cu;
            goto label_4b258c;
        }
    }
    ctx->pc = 0x4B2588u;
    // 0x4b2588: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4b2588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_4b258c:
    // 0x4b258c: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B258Cu;
    {
        const bool branch_taken_0x4b258c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b258c) {
            ctx->pc = 0x4B2590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B258Cu;
            // 0x4b2590: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B259Cu;
            goto label_4b259c;
        }
    }
    ctx->pc = 0x4B2594u;
    // 0x4b2594: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x4b2594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x4b2598: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4b2598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4b259c:
    // 0x4b259c: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x4b259cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x4b25a0: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x4b25a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x4b25a4: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x4B25A4u;
    {
        const bool branch_taken_0x4b25a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b25a4) {
            ctx->pc = 0x4B2658u;
            goto label_4b2658;
        }
    }
    ctx->pc = 0x4B25ACu;
    // 0x4b25ac: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x4b25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4b25b0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x4b25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4b25b4: 0x8cf10008  lw          $s1, 0x8($a3)
    ctx->pc = 0x4b25b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4b25b8: 0xe38021  addu        $s0, $a3, $v1
    ctx->pc = 0x4b25b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4b25bc: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x4b25bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b25c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b25c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b25c4: 0xc074fc0  jal         func_1D3F00
    ctx->pc = 0x4B25C4u;
    SET_GPR_U32(ctx, 31, 0x4B25CCu);
    ctx->pc = 0x4B25C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B25C4u;
            // 0x4b25c8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F00u;
    if (runtime->hasFunction(0x1D3F00u)) {
        auto targetFn = runtime->lookupFunction(0x1D3F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B25CCu; }
        if (ctx->pc != 0x4B25CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3F00_0x1d3f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B25CCu; }
        if (ctx->pc != 0x4B25CCu) { return; }
    }
    ctx->pc = 0x4B25CCu;
label_4b25cc:
    // 0x4b25cc: 0x1a200022  blez        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x4B25CCu;
    {
        const bool branch_taken_0x4b25cc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4B25D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B25CCu;
            // 0x4b25d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b25cc) {
            ctx->pc = 0x4B2658u;
            goto label_4b2658;
        }
    }
    ctx->pc = 0x4B25D4u;
    // 0x4b25d4: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x4b25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x4b25d8: 0x3c044c4d  lui         $a0, 0x4C4D
    ctx->pc = 0x4b25d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19533 << 16));
    // 0x4b25dc: 0x3465454e  ori         $a1, $v1, 0x454E
    ctx->pc = 0x4b25dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x4b25e0: 0x3486534e  ori         $a2, $a0, 0x534E
    ctx->pc = 0x4b25e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21326);
    // 0x4b25e4: 0x3c03494c  lui         $v1, 0x494C
    ctx->pc = 0x4b25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18764 << 16));
    // 0x4b25e8: 0x3467534e  ori         $a3, $v1, 0x534E
    ctx->pc = 0x4b25e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
label_4b25ec:
    // 0x4b25ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b25f0: 0x14670007  bne         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B25F0u;
    {
        const bool branch_taken_0x4b25f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4b25f0) {
            ctx->pc = 0x4B2610u;
            goto label_4b2610;
        }
    }
    ctx->pc = 0x4B25F8u;
    // 0x4b25f8: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B25F8u;
    {
        const bool branch_taken_0x4b25f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b25f8) {
            ctx->pc = 0x4B2640u;
            goto label_4b2640;
        }
    }
    ctx->pc = 0x4B2600u;
    // 0x4b2600: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4b2600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b2604: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4b2604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4b2608: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B2608u;
    {
        const bool branch_taken_0x4b2608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2608u;
            // 0x4b260c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2608) {
            ctx->pc = 0x4B2640u;
            goto label_4b2640;
        }
    }
    ctx->pc = 0x4B2610u;
label_4b2610:
    // 0x4b2610: 0x14660008  bne         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B2610u;
    {
        const bool branch_taken_0x4b2610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x4b2610) {
            ctx->pc = 0x4B2634u;
            goto label_4b2634;
        }
    }
    ctx->pc = 0x4B2618u;
    // 0x4b2618: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x4B2618u;
    {
        const bool branch_taken_0x4b2618 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2618) {
            ctx->pc = 0x4B2658u;
            goto label_4b2658;
        }
    }
    ctx->pc = 0x4B2620u;
    // 0x4b2620: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4b2620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b2624: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4b2624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4b2628: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b2628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b262c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4B262Cu;
    {
        const bool branch_taken_0x4b262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b262c) {
            ctx->pc = 0x4B2658u;
            goto label_4b2658;
        }
    }
    ctx->pc = 0x4B2634u;
label_4b2634:
    // 0x4b2634: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B2634u;
    {
        const bool branch_taken_0x4b2634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4b2634) {
            ctx->pc = 0x4B2658u;
            goto label_4b2658;
        }
    }
    ctx->pc = 0x4B263Cu;
    // 0x4b263c: 0x0  nop
    ctx->pc = 0x4b263cu;
    // NOP
label_4b2640:
    // 0x4b2640: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4b2640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b2644: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4b2644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4b2648: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x4b2648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4b264c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x4b264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x4b2650: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4B2650u;
    {
        const bool branch_taken_0x4b2650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2650u;
            // 0x4b2654: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2650) {
            ctx->pc = 0x4B25ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b25ec;
        }
    }
    ctx->pc = 0x4B2658u;
label_4b2658:
    // 0x4b2658: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b2658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b265c:
    // 0x4b265c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b265cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b2660: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b2660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b2664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b2668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b266c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b266cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2670: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2670u;
            // 0x4b2674: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2678u;
    // 0x4b2678: 0x0  nop
    ctx->pc = 0x4b2678u;
    // NOP
    // 0x4b267c: 0x0  nop
    ctx->pc = 0x4b267cu;
    // NOP
}
