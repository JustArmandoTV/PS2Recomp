#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B19A8
// Address: 0x1b19a8 - 0x1b1a58
void sub_001B19A8_0x1b19a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B19A8_0x1b19a8");
#endif

    switch (ctx->pc) {
        case 0x1b19c0u: goto label_1b19c0;
        case 0x1b19d4u: goto label_1b19d4;
        case 0x1b19dcu: goto label_1b19dc;
        case 0x1b1a08u: goto label_1b1a08;
        default: break;
    }

    ctx->pc = 0x1b19a8u;

    // 0x1b19a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b19a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b19ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b19acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b19b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b19b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b19b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b19b8: 0xc06c530  jal         func_1B14C0
    ctx->pc = 0x1B19B8u;
    SET_GPR_U32(ctx, 31, 0x1B19C0u);
    ctx->pc = 0x1B19BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19B8u;
            // 0x1b19bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14C0u;
    if (runtime->hasFunction(0x1B14C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19C0u; }
        if (ctx->pc != 0x1B19C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14C0_0x1b14c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19C0u; }
        if (ctx->pc != 0x1B19C0u) { return; }
    }
    ctx->pc = 0x1B19C0u;
label_1b19c0:
    // 0x1b19c0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B19C0u;
    {
        const bool branch_taken_0x1b19c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19C0u;
            // 0x1b19c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19c0) {
            ctx->pc = 0x1B1A20u;
            goto label_1b1a20;
        }
    }
    ctx->pc = 0x1B19C8u;
    // 0x1b19c8: 0x8e302030  lw          $s0, 0x2030($s1)
    ctx->pc = 0x1b19c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8240)));
    // 0x1b19cc: 0xc06c502  jal         func_1B1408
    ctx->pc = 0x1B19CCu;
    SET_GPR_U32(ctx, 31, 0x1B19D4u);
    ctx->pc = 0x1B19D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19CCu;
            // 0x1b19d0: 0x26041198  addiu       $a0, $s0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1408u;
    if (runtime->hasFunction(0x1B1408u)) {
        auto targetFn = runtime->lookupFunction(0x1B1408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19D4u; }
        if (ctx->pc != 0x1B19D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1408_0x1b1408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19D4u; }
        if (ctx->pc != 0x1B19D4u) { return; }
    }
    ctx->pc = 0x1B19D4u;
label_1b19d4:
    // 0x1b19d4: 0xc06cf70  jal         func_1B3DC0
    ctx->pc = 0x1B19D4u;
    SET_GPR_U32(ctx, 31, 0x1B19DCu);
    ctx->pc = 0x1B3DC0u;
    if (runtime->hasFunction(0x1B3DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19DCu; }
        if (ctx->pc != 0x1B19DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DC0_0x1b3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B19DCu; }
        if (ctx->pc != 0x1B19DCu) { return; }
    }
    ctx->pc = 0x1B19DCu;
label_1b19dc:
    // 0x1b19dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b19e0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B19E0u;
    {
        const bool branch_taken_0x1b19e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B19E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19E0u;
            // 0x1b19e4: 0x26041150  addiu       $a0, $s0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19e0) {
            ctx->pc = 0x1B1A00u;
            goto label_1b1a00;
        }
    }
    ctx->pc = 0x1B19E8u;
    // 0x1b19e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b19e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b19ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b19ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b19f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b19f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b19f4: 0x8042730  j           func_109CC0
    ctx->pc = 0x1B19F4u;
    ctx->pc = 0x1B19F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19F4u;
            // 0x1b19f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109CC0u;
    {
        auto targetFn = runtime->lookupFunction(0x109CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B19FCu;
    // 0x1b19fc: 0x0  nop
    ctx->pc = 0x1b19fcu;
    // NOP
label_1b1a00:
    // 0x1b1a00: 0xc04276a  jal         func_109DA8
    ctx->pc = 0x1B1A00u;
    SET_GPR_U32(ctx, 31, 0x1B1A08u);
    ctx->pc = 0x109DA8u;
    if (runtime->hasFunction(0x109DA8u)) {
        auto targetFn = runtime->lookupFunction(0x109DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A08u; }
        if (ctx->pc != 0x1B1A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109DA8_0x109da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A08u; }
        if (ctx->pc != 0x1B1A08u) { return; }
    }
    ctx->pc = 0x1B1A08u;
label_1b1a08:
    // 0x1b1a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1a14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1a18: 0x806c68c  j           func_1B1A30
    ctx->pc = 0x1B1A18u;
    ctx->pc = 0x1B1A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A18u;
            // 0x1b1a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A30u;
    goto label_1b1a30;
    ctx->pc = 0x1B1A20u;
label_1b1a20:
    // 0x1b1a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1a24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1a28: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A28u;
            // 0x1b1a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1A30u;
label_1b1a30:
    // 0x1b1a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1a34: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1b1a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b1a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1a3c: 0x8c852030  lw          $a1, 0x2030($a0)
    ctx->pc = 0x1b1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b1a40: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1b1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1b1a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1a48: 0x24841e30  addiu       $a0, $a0, 0x1E30
    ctx->pc = 0x1b1a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7728));
    // 0x1b1a4c: 0x24a51150  addiu       $a1, $a1, 0x1150
    ctx->pc = 0x1b1a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x1b1a50: 0x80640b0  j           func_1902C0
    ctx->pc = 0x1B1A50u;
    ctx->pc = 0x1B1A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A50u;
            // 0x1b1a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1902C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B1A58u;
}
