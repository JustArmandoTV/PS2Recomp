#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8990
// Address: 0x1b8990 - 0x1b8a80
void sub_001B8990_0x1b8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8990_0x1b8990");
#endif

    switch (ctx->pc) {
        case 0x1b89b4u: goto label_1b89b4;
        case 0x1b89d4u: goto label_1b89d4;
        case 0x1b89e0u: goto label_1b89e0;
        case 0x1b89f0u: goto label_1b89f0;
        case 0x1b8a0cu: goto label_1b8a0c;
        case 0x1b8a18u: goto label_1b8a18;
        case 0x1b8a2cu: goto label_1b8a2c;
        case 0x1b8a48u: goto label_1b8a48;
        default: break;
    }

    ctx->pc = 0x1b8990u;

    // 0x1b8990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b899c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b899cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b89a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b89a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b89a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b89a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b89ac: 0xc06e328  jal         func_1B8CA0
    ctx->pc = 0x1B89ACu;
    SET_GPR_U32(ctx, 31, 0x1B89B4u);
    ctx->pc = 0x1B89B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89ACu;
            // 0x1b89b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89B4u; }
        if (ctx->pc != 0x1B89B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89B4u; }
        if (ctx->pc != 0x1B89B4u) { return; }
    }
    ctx->pc = 0x1B89B4u;
label_1b89b4:
    // 0x1b89b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b89b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b89bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b89bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b89c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B89C0u;
    {
        const bool branch_taken_0x1b89c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89C0u;
            // 0x1b89c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89c0) {
            ctx->pc = 0x1B89E8u;
            goto label_1b89e8;
        }
    }
    ctx->pc = 0x1B89C8u;
    // 0x1b89c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b89c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b89cc: 0xc06e300  jal         func_1B8C00
    ctx->pc = 0x1B89CCu;
    SET_GPR_U32(ctx, 31, 0x1B89D4u);
    ctx->pc = 0x1B89D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89CCu;
            // 0x1b89d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C00u;
    if (runtime->hasFunction(0x1B8C00u)) {
        auto targetFn = runtime->lookupFunction(0x1B8C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89D4u; }
        if (ctx->pc != 0x1B89D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8C00_0x1b8c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89D4u; }
        if (ctx->pc != 0x1B89D4u) { return; }
    }
    ctx->pc = 0x1B89D4u;
label_1b89d4:
    // 0x1b89d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b89d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89d8: 0xc06e2a0  jal         func_1B8A80
    ctx->pc = 0x1B89D8u;
    SET_GPR_U32(ctx, 31, 0x1B89E0u);
    ctx->pc = 0x1B89DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89D8u;
            // 0x1b89dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A80u;
    if (runtime->hasFunction(0x1B8A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B8A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89E0u; }
        if (ctx->pc != 0x1B89E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8A80_0x1b8a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89E0u; }
        if (ctx->pc != 0x1B89E0u) { return; }
    }
    ctx->pc = 0x1B89E0u;
label_1b89e0:
    // 0x1b89e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B89E0u;
    {
        const bool branch_taken_0x1b89e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89E0u;
            // 0x1b89e4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89e0) {
            ctx->pc = 0x1B89F8u;
            goto label_1b89f8;
        }
    }
    ctx->pc = 0x1B89E8u;
label_1b89e8:
    // 0x1b89e8: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B89E8u;
    SET_GPR_U32(ctx, 31, 0x1B89F0u);
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89F0u; }
        if (ctx->pc != 0x1B89F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89F0u; }
        if (ctx->pc != 0x1B89F0u) { return; }
    }
    ctx->pc = 0x1B89F0u;
label_1b89f0:
    // 0x1b89f0: 0xae000bb0  sw          $zero, 0xBB0($s0)
    ctx->pc = 0x1b89f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 0));
    // 0x1b89f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1b89f8:
    // 0x1b89f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B89F8u;
    {
        const bool branch_taken_0x1b89f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89F8u;
            // 0x1b89fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89f8) {
            ctx->pc = 0x1B8A20u;
            goto label_1b8a20;
        }
    }
    ctx->pc = 0x1B8A00u;
    // 0x1b8a00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8a04: 0xc06e308  jal         func_1B8C20
    ctx->pc = 0x1B8A04u;
    SET_GPR_U32(ctx, 31, 0x1B8A0Cu);
    ctx->pc = 0x1B8A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A04u;
            // 0x1b8a08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C20u;
    if (runtime->hasFunction(0x1B8C20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A0Cu; }
        if (ctx->pc != 0x1B8A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8C20_0x1b8c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A0Cu; }
        if (ctx->pc != 0x1B8A0Cu) { return; }
    }
    ctx->pc = 0x1B8A0Cu;
label_1b8a0c:
    // 0x1b8a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a10: 0xc06e2c8  jal         func_1B8B20
    ctx->pc = 0x1B8A10u;
    SET_GPR_U32(ctx, 31, 0x1B8A18u);
    ctx->pc = 0x1B8A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A10u;
            // 0x1b8a14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8B20u;
    if (runtime->hasFunction(0x1B8B20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A18u; }
        if (ctx->pc != 0x1B8A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8B20_0x1b8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A18u; }
        if (ctx->pc != 0x1B8A18u) { return; }
    }
    ctx->pc = 0x1B8A18u;
label_1b8a18:
    // 0x1b8a18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8A18u;
    {
        const bool branch_taken_0x1b8a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A18u;
            // 0x1b8a1c: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a18) {
            ctx->pc = 0x1B8A34u;
            goto label_1b8a34;
        }
    }
    ctx->pc = 0x1B8A20u;
label_1b8a20:
    // 0x1b8a20: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b8a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b8a24: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B8A24u;
    SET_GPR_U32(ctx, 31, 0x1B8A2Cu);
    ctx->pc = 0x1B8A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A24u;
            // 0x1b8a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A2Cu; }
        if (ctx->pc != 0x1B8A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A2Cu; }
        if (ctx->pc != 0x1B8A2Cu) { return; }
    }
    ctx->pc = 0x1B8A2Cu;
label_1b8a2c:
    // 0x1b8a2c: 0xae000bb4  sw          $zero, 0xBB4($s0)
    ctx->pc = 0x1b8a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2996), GPR_U32(ctx, 0));
    // 0x1b8a30: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1b8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1b8a34:
    // 0x1b8a34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B8A34u;
    {
        const bool branch_taken_0x1b8a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A34u;
            // 0x1b8a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a34) {
            ctx->pc = 0x1B8A68u;
            goto label_1b8a68;
        }
    }
    ctx->pc = 0x1B8A3Cu;
    // 0x1b8a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8a40: 0xc06e310  jal         func_1B8C40
    ctx->pc = 0x1B8A40u;
    SET_GPR_U32(ctx, 31, 0x1B8A48u);
    ctx->pc = 0x1B8A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A40u;
            // 0x1b8a44: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C40u;
    if (runtime->hasFunction(0x1B8C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B8C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A48u; }
        if (ctx->pc != 0x1B8A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8C40_0x1b8c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A48u; }
        if (ctx->pc != 0x1B8A48u) { return; }
    }
    ctx->pc = 0x1B8A48u;
label_1b8a48:
    // 0x1b8a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b8a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8a5c: 0x806e2f0  j           func_1B8BC0
    ctx->pc = 0x1B8A5Cu;
    ctx->pc = 0x1B8A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A5Cu;
            // 0x1b8a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BC0u;
    if (runtime->hasFunction(0x1B8BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8BC0_0x1b8bc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8A64u;
    // 0x1b8a64: 0x0  nop
    ctx->pc = 0x1b8a64u;
    // NOP
label_1b8a68:
    // 0x1b8a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A74u;
            // 0x1b8a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8A7Cu;
    // 0x1b8a7c: 0x0  nop
    ctx->pc = 0x1b8a7cu;
    // NOP
}
