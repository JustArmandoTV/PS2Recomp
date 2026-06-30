#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3D90
// Address: 0x1a3d90 - 0x1a3e38
void sub_001A3D90_0x1a3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3D90_0x1a3d90");
#endif

    switch (ctx->pc) {
        case 0x1a3db8u: goto label_1a3db8;
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3de0u: goto label_1a3de0;
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3e04u: goto label_1a3e04;
        case 0x1a3e10u: goto label_1a3e10;
        case 0x1a3e20u: goto label_1a3e20;
        default: break;
    }

    ctx->pc = 0x1a3d90u;

    // 0x1a3d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3d94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a3d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3d9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a3d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a3da0: 0x2602206c  addiu       $v0, $s0, 0x206C
    ctx->pc = 0x1a3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8300));
    // 0x1a3da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3da8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a3da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3dac: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1a3dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a3db0: 0xc06978c  jal         func_1A5E30
    ctx->pc = 0x1A3DB0u;
    SET_GPR_U32(ctx, 31, 0x1A3DB8u);
    ctx->pc = 0x1A3DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DB0u;
            // 0x1a3db4: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E30u;
    if (runtime->hasFunction(0x1A5E30u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DB8u; }
        if (ctx->pc != 0x1A3DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5E30_0x1a5e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DB8u; }
        if (ctx->pc != 0x1A3DB8u) { return; }
    }
    ctx->pc = 0x1A3DB8u;
label_1a3db8:
    // 0x1a3db8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3dbc: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1a3dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a3dc0: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1a3dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1a3dc4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A3DC4u;
    {
        const bool branch_taken_0x1a3dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DC4u;
            // 0x1a3dc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3dc4) {
            ctx->pc = 0x1A3E24u;
            goto label_1a3e24;
        }
    }
    ctx->pc = 0x1A3DCCu;
    // 0x1a3dcc: 0xc069984  jal         func_1A6610
    ctx->pc = 0x1A3DCCu;
    SET_GPR_U32(ctx, 31, 0x1A3DD4u);
    ctx->pc = 0x1A6610u;
    if (runtime->hasFunction(0x1A6610u)) {
        auto targetFn = runtime->lookupFunction(0x1A6610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DD4u; }
        if (ctx->pc != 0x1A3DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6610_0x1a6610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DD4u; }
        if (ctx->pc != 0x1A3DD4u) { return; }
    }
    ctx->pc = 0x1A3DD4u;
label_1a3dd4:
    // 0x1a3dd4: 0xde0409b8  ld          $a0, 0x9B8($s0)
    ctx->pc = 0x1a3dd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2488)));
    // 0x1a3dd8: 0xc0699f2  jal         func_1A67C8
    ctx->pc = 0x1A3DD8u;
    SET_GPR_U32(ctx, 31, 0x1A3DE0u);
    ctx->pc = 0x1A3DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DD8u;
            // 0x1a3ddc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C8u;
    if (runtime->hasFunction(0x1A67C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DE0u; }
        if (ctx->pc != 0x1A3DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A67C8_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DE0u; }
        if (ctx->pc != 0x1A3DE0u) { return; }
    }
    ctx->pc = 0x1A3DE0u;
label_1a3de0:
    // 0x1a3de0: 0xde0409c0  ld          $a0, 0x9C0($s0)
    ctx->pc = 0x1a3de0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2496)));
    // 0x1a3de4: 0xfe0209b8  sd          $v0, 0x9B8($s0)
    ctx->pc = 0x1a3de4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2488), GPR_U64(ctx, 2));
    // 0x1a3de8: 0xc0699f2  jal         func_1A67C8
    ctx->pc = 0x1A3DE8u;
    SET_GPR_U32(ctx, 31, 0x1A3DF0u);
    ctx->pc = 0x1A3DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DE8u;
            // 0x1a3dec: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C8u;
    if (runtime->hasFunction(0x1A67C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DF0u; }
        if (ctx->pc != 0x1A3DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A67C8_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DF0u; }
        if (ctx->pc != 0x1A3DF0u) { return; }
    }
    ctx->pc = 0x1A3DF0u;
label_1a3df0:
    // 0x1a3df0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a3df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a3df4: 0xfe0209c0  sd          $v0, 0x9C0($s0)
    ctx->pc = 0x1a3df4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2496), GPR_U64(ctx, 2));
    // 0x1a3df8: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1a3df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a3dfc: 0xc069984  jal         func_1A6610
    ctx->pc = 0x1A3DFCu;
    SET_GPR_U32(ctx, 31, 0x1A3E04u);
    ctx->pc = 0x1A3E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DFCu;
            // 0x1a3e00: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6610u;
    if (runtime->hasFunction(0x1A6610u)) {
        auto targetFn = runtime->lookupFunction(0x1A6610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E04u; }
        if (ctx->pc != 0x1A3E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6610_0x1a6610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E04u; }
        if (ctx->pc != 0x1A3E04u) { return; }
    }
    ctx->pc = 0x1A3E04u;
label_1a3e04:
    // 0x1a3e04: 0xde0409d0  ld          $a0, 0x9D0($s0)
    ctx->pc = 0x1a3e04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x1a3e08: 0xc0699f2  jal         func_1A67C8
    ctx->pc = 0x1A3E08u;
    SET_GPR_U32(ctx, 31, 0x1A3E10u);
    ctx->pc = 0x1A3E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E08u;
            // 0x1a3e0c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C8u;
    if (runtime->hasFunction(0x1A67C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E10u; }
        if (ctx->pc != 0x1A3E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A67C8_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E10u; }
        if (ctx->pc != 0x1A3E10u) { return; }
    }
    ctx->pc = 0x1A3E10u;
label_1a3e10:
    // 0x1a3e10: 0xde0409d8  ld          $a0, 0x9D8($s0)
    ctx->pc = 0x1a3e10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2520)));
    // 0x1a3e14: 0xfe0209d0  sd          $v0, 0x9D0($s0)
    ctx->pc = 0x1a3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2512), GPR_U64(ctx, 2));
    // 0x1a3e18: 0xc0699f2  jal         func_1A67C8
    ctx->pc = 0x1A3E18u;
    SET_GPR_U32(ctx, 31, 0x1A3E20u);
    ctx->pc = 0x1A3E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E18u;
            // 0x1a3e1c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C8u;
    if (runtime->hasFunction(0x1A67C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E20u; }
        if (ctx->pc != 0x1A3E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A67C8_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E20u; }
        if (ctx->pc != 0x1A3E20u) { return; }
    }
    ctx->pc = 0x1A3E20u;
label_1a3e20:
    // 0x1a3e20: 0xfe0209d8  sd          $v0, 0x9D8($s0)
    ctx->pc = 0x1a3e20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2520), GPR_U64(ctx, 2));
label_1a3e24:
    // 0x1a3e24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a3e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3e28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a3e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E30u;
            // 0x1a3e34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3E38u;
}
