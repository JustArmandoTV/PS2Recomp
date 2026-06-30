#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B4DD0
// Address: 0x4b4dd0 - 0x4b4f30
void sub_004B4DD0_0x4b4dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4DD0_0x4b4dd0");
#endif

    switch (ctx->pc) {
        case 0x4b4dd0u: goto label_4b4dd0;
        case 0x4b4dd4u: goto label_4b4dd4;
        case 0x4b4dd8u: goto label_4b4dd8;
        case 0x4b4ddcu: goto label_4b4ddc;
        case 0x4b4de0u: goto label_4b4de0;
        case 0x4b4de4u: goto label_4b4de4;
        case 0x4b4de8u: goto label_4b4de8;
        case 0x4b4decu: goto label_4b4dec;
        case 0x4b4df0u: goto label_4b4df0;
        case 0x4b4df4u: goto label_4b4df4;
        case 0x4b4df8u: goto label_4b4df8;
        case 0x4b4dfcu: goto label_4b4dfc;
        case 0x4b4e00u: goto label_4b4e00;
        case 0x4b4e04u: goto label_4b4e04;
        case 0x4b4e08u: goto label_4b4e08;
        case 0x4b4e0cu: goto label_4b4e0c;
        case 0x4b4e10u: goto label_4b4e10;
        case 0x4b4e14u: goto label_4b4e14;
        case 0x4b4e18u: goto label_4b4e18;
        case 0x4b4e1cu: goto label_4b4e1c;
        case 0x4b4e20u: goto label_4b4e20;
        case 0x4b4e24u: goto label_4b4e24;
        case 0x4b4e28u: goto label_4b4e28;
        case 0x4b4e2cu: goto label_4b4e2c;
        case 0x4b4e30u: goto label_4b4e30;
        case 0x4b4e34u: goto label_4b4e34;
        case 0x4b4e38u: goto label_4b4e38;
        case 0x4b4e3cu: goto label_4b4e3c;
        case 0x4b4e40u: goto label_4b4e40;
        case 0x4b4e44u: goto label_4b4e44;
        case 0x4b4e48u: goto label_4b4e48;
        case 0x4b4e4cu: goto label_4b4e4c;
        case 0x4b4e50u: goto label_4b4e50;
        case 0x4b4e54u: goto label_4b4e54;
        case 0x4b4e58u: goto label_4b4e58;
        case 0x4b4e5cu: goto label_4b4e5c;
        case 0x4b4e60u: goto label_4b4e60;
        case 0x4b4e64u: goto label_4b4e64;
        case 0x4b4e68u: goto label_4b4e68;
        case 0x4b4e6cu: goto label_4b4e6c;
        case 0x4b4e70u: goto label_4b4e70;
        case 0x4b4e74u: goto label_4b4e74;
        case 0x4b4e78u: goto label_4b4e78;
        case 0x4b4e7cu: goto label_4b4e7c;
        case 0x4b4e80u: goto label_4b4e80;
        case 0x4b4e84u: goto label_4b4e84;
        case 0x4b4e88u: goto label_4b4e88;
        case 0x4b4e8cu: goto label_4b4e8c;
        case 0x4b4e90u: goto label_4b4e90;
        case 0x4b4e94u: goto label_4b4e94;
        case 0x4b4e98u: goto label_4b4e98;
        case 0x4b4e9cu: goto label_4b4e9c;
        case 0x4b4ea0u: goto label_4b4ea0;
        case 0x4b4ea4u: goto label_4b4ea4;
        case 0x4b4ea8u: goto label_4b4ea8;
        case 0x4b4eacu: goto label_4b4eac;
        case 0x4b4eb0u: goto label_4b4eb0;
        case 0x4b4eb4u: goto label_4b4eb4;
        case 0x4b4eb8u: goto label_4b4eb8;
        case 0x4b4ebcu: goto label_4b4ebc;
        case 0x4b4ec0u: goto label_4b4ec0;
        case 0x4b4ec4u: goto label_4b4ec4;
        case 0x4b4ec8u: goto label_4b4ec8;
        case 0x4b4eccu: goto label_4b4ecc;
        case 0x4b4ed0u: goto label_4b4ed0;
        case 0x4b4ed4u: goto label_4b4ed4;
        case 0x4b4ed8u: goto label_4b4ed8;
        case 0x4b4edcu: goto label_4b4edc;
        case 0x4b4ee0u: goto label_4b4ee0;
        case 0x4b4ee4u: goto label_4b4ee4;
        case 0x4b4ee8u: goto label_4b4ee8;
        case 0x4b4eecu: goto label_4b4eec;
        case 0x4b4ef0u: goto label_4b4ef0;
        case 0x4b4ef4u: goto label_4b4ef4;
        case 0x4b4ef8u: goto label_4b4ef8;
        case 0x4b4efcu: goto label_4b4efc;
        case 0x4b4f00u: goto label_4b4f00;
        case 0x4b4f04u: goto label_4b4f04;
        case 0x4b4f08u: goto label_4b4f08;
        case 0x4b4f0cu: goto label_4b4f0c;
        case 0x4b4f10u: goto label_4b4f10;
        case 0x4b4f14u: goto label_4b4f14;
        case 0x4b4f18u: goto label_4b4f18;
        case 0x4b4f1cu: goto label_4b4f1c;
        case 0x4b4f20u: goto label_4b4f20;
        case 0x4b4f24u: goto label_4b4f24;
        case 0x4b4f28u: goto label_4b4f28;
        case 0x4b4f2cu: goto label_4b4f2c;
        default: break;
    }

    ctx->pc = 0x4b4dd0u;

label_4b4dd0:
    // 0x4b4dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b4dd4:
    // 0x4b4dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b4dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b4dd8:
    // 0x4b4dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b4ddc:
    // 0x4b4ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b4de0:
    // 0x4b4de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b4de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b4de4:
    // 0x4b4de4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4b4de8:
    if (ctx->pc == 0x4B4DE8u) {
        ctx->pc = 0x4B4DE8u;
            // 0x4b4de8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4DECu;
        goto label_4b4dec;
    }
    ctx->pc = 0x4B4DE4u;
    {
        const bool branch_taken_0x4b4de4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4DE4u;
            // 0x4b4de8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4de4) {
            ctx->pc = 0x4B4F18u;
            goto label_4b4f18;
        }
    }
    ctx->pc = 0x4B4DECu;
label_4b4dec:
    // 0x4b4dec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b4decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b4df0:
    // 0x4b4df0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b4df4:
    // 0x4b4df4: 0x24630990  addiu       $v1, $v1, 0x990
    ctx->pc = 0x4b4df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
label_4b4df8:
    // 0x4b4df8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b4df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_4b4dfc:
    // 0x4b4dfc: 0x244209c8  addiu       $v0, $v0, 0x9C8
    ctx->pc = 0x4b4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2504));
label_4b4e00:
    // 0x4b4e00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b4e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4b4e04:
    // 0x4b4e04: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4b4e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4b4e08:
    // 0x4b4e08: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4b4e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4b4e0c:
    // 0x4b4e0c: 0xc0407c0  jal         func_101F00
label_4b4e10:
    if (ctx->pc == 0x4B4E10u) {
        ctx->pc = 0x4B4E10u;
            // 0x4b4e10: 0x24a547a0  addiu       $a1, $a1, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
        ctx->pc = 0x4B4E14u;
        goto label_4b4e14;
    }
    ctx->pc = 0x4B4E0Cu;
    SET_GPR_U32(ctx, 31, 0x4B4E14u);
    ctx->pc = 0x4B4E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4E0Cu;
            // 0x4b4e10: 0x24a547a0  addiu       $a1, $a1, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4E14u; }
        if (ctx->pc != 0x4B4E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4E14u; }
        if (ctx->pc != 0x4B4E14u) { return; }
    }
    ctx->pc = 0x4B4E14u;
label_4b4e14:
    // 0x4b4e14: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4b4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4b4e18:
    // 0x4b4e18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4b4e1c:
    if (ctx->pc == 0x4B4E1Cu) {
        ctx->pc = 0x4B4E1Cu;
            // 0x4b4e1c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4B4E20u;
        goto label_4b4e20;
    }
    ctx->pc = 0x4B4E18u;
    {
        const bool branch_taken_0x4b4e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e18) {
            ctx->pc = 0x4B4E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4E18u;
            // 0x4b4e1c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4E2Cu;
            goto label_4b4e2c;
        }
    }
    ctx->pc = 0x4B4E20u;
label_4b4e20:
    // 0x4b4e20: 0xc07507c  jal         func_1D41F0
label_4b4e24:
    if (ctx->pc == 0x4B4E24u) {
        ctx->pc = 0x4B4E24u;
            // 0x4b4e24: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4B4E28u;
        goto label_4b4e28;
    }
    ctx->pc = 0x4B4E20u;
    SET_GPR_U32(ctx, 31, 0x4B4E28u);
    ctx->pc = 0x4B4E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4E20u;
            // 0x4b4e24: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4E28u; }
        if (ctx->pc != 0x4B4E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4E28u; }
        if (ctx->pc != 0x4B4E28u) { return; }
    }
    ctx->pc = 0x4B4E28u;
label_4b4e28:
    // 0x4b4e28: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4b4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4b4e2c:
    // 0x4b4e2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4b4e30:
    if (ctx->pc == 0x4B4E30u) {
        ctx->pc = 0x4B4E30u;
            // 0x4b4e30: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4B4E34u;
        goto label_4b4e34;
    }
    ctx->pc = 0x4B4E2Cu;
    {
        const bool branch_taken_0x4b4e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e2c) {
            ctx->pc = 0x4B4E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4E2Cu;
            // 0x4b4e30: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4E5Cu;
            goto label_4b4e5c;
        }
    }
    ctx->pc = 0x4B4E34u;
label_4b4e34:
    // 0x4b4e34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4b4e38:
    if (ctx->pc == 0x4B4E38u) {
        ctx->pc = 0x4B4E3Cu;
        goto label_4b4e3c;
    }
    ctx->pc = 0x4B4E34u;
    {
        const bool branch_taken_0x4b4e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e34) {
            ctx->pc = 0x4B4E58u;
            goto label_4b4e58;
        }
    }
    ctx->pc = 0x4B4E3Cu;
label_4b4e3c:
    // 0x4b4e3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b4e40:
    if (ctx->pc == 0x4B4E40u) {
        ctx->pc = 0x4B4E44u;
        goto label_4b4e44;
    }
    ctx->pc = 0x4B4E3Cu;
    {
        const bool branch_taken_0x4b4e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e3c) {
            ctx->pc = 0x4B4E58u;
            goto label_4b4e58;
        }
    }
    ctx->pc = 0x4B4E44u;
label_4b4e44:
    // 0x4b4e44: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4b4e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4b4e48:
    // 0x4b4e48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b4e4c:
    if (ctx->pc == 0x4B4E4Cu) {
        ctx->pc = 0x4B4E50u;
        goto label_4b4e50;
    }
    ctx->pc = 0x4B4E48u;
    {
        const bool branch_taken_0x4b4e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e48) {
            ctx->pc = 0x4B4E58u;
            goto label_4b4e58;
        }
    }
    ctx->pc = 0x4B4E50u;
label_4b4e50:
    // 0x4b4e50: 0xc0400a8  jal         func_1002A0
label_4b4e54:
    if (ctx->pc == 0x4B4E54u) {
        ctx->pc = 0x4B4E58u;
        goto label_4b4e58;
    }
    ctx->pc = 0x4B4E50u;
    SET_GPR_U32(ctx, 31, 0x4B4E58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4E58u; }
        if (ctx->pc != 0x4B4E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4E58u; }
        if (ctx->pc != 0x4B4E58u) { return; }
    }
    ctx->pc = 0x4B4E58u;
label_4b4e58:
    // 0x4b4e58: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4b4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4b4e5c:
    // 0x4b4e5c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4b4e60:
    if (ctx->pc == 0x4B4E60u) {
        ctx->pc = 0x4B4E60u;
            // 0x4b4e60: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4B4E64u;
        goto label_4b4e64;
    }
    ctx->pc = 0x4B4E5Cu;
    {
        const bool branch_taken_0x4b4e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e5c) {
            ctx->pc = 0x4B4E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4E5Cu;
            // 0x4b4e60: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4E8Cu;
            goto label_4b4e8c;
        }
    }
    ctx->pc = 0x4B4E64u;
label_4b4e64:
    // 0x4b4e64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4b4e68:
    if (ctx->pc == 0x4B4E68u) {
        ctx->pc = 0x4B4E6Cu;
        goto label_4b4e6c;
    }
    ctx->pc = 0x4B4E64u;
    {
        const bool branch_taken_0x4b4e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e64) {
            ctx->pc = 0x4B4E88u;
            goto label_4b4e88;
        }
    }
    ctx->pc = 0x4B4E6Cu;
label_4b4e6c:
    // 0x4b4e6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b4e70:
    if (ctx->pc == 0x4B4E70u) {
        ctx->pc = 0x4B4E74u;
        goto label_4b4e74;
    }
    ctx->pc = 0x4B4E6Cu;
    {
        const bool branch_taken_0x4b4e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e6c) {
            ctx->pc = 0x4B4E88u;
            goto label_4b4e88;
        }
    }
    ctx->pc = 0x4B4E74u;
label_4b4e74:
    // 0x4b4e74: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4b4e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4b4e78:
    // 0x4b4e78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b4e7c:
    if (ctx->pc == 0x4B4E7Cu) {
        ctx->pc = 0x4B4E80u;
        goto label_4b4e80;
    }
    ctx->pc = 0x4B4E78u;
    {
        const bool branch_taken_0x4b4e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e78) {
            ctx->pc = 0x4B4E88u;
            goto label_4b4e88;
        }
    }
    ctx->pc = 0x4B4E80u;
label_4b4e80:
    // 0x4b4e80: 0xc0400a8  jal         func_1002A0
label_4b4e84:
    if (ctx->pc == 0x4B4E84u) {
        ctx->pc = 0x4B4E88u;
        goto label_4b4e88;
    }
    ctx->pc = 0x4B4E80u;
    SET_GPR_U32(ctx, 31, 0x4B4E88u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4E88u; }
        if (ctx->pc != 0x4B4E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4E88u; }
        if (ctx->pc != 0x4B4E88u) { return; }
    }
    ctx->pc = 0x4B4E88u;
label_4b4e88:
    // 0x4b4e88: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4b4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4b4e8c:
    // 0x4b4e8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b4e90:
    if (ctx->pc == 0x4B4E90u) {
        ctx->pc = 0x4B4E94u;
        goto label_4b4e94;
    }
    ctx->pc = 0x4B4E8Cu;
    {
        const bool branch_taken_0x4b4e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e8c) {
            ctx->pc = 0x4B4EA8u;
            goto label_4b4ea8;
        }
    }
    ctx->pc = 0x4B4E94u;
label_4b4e94:
    // 0x4b4e94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b4e98:
    // 0x4b4e98: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4b4e9c:
    // 0x4b4e9c: 0x24630980  addiu       $v1, $v1, 0x980
    ctx->pc = 0x4b4e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2432));
label_4b4ea0:
    // 0x4b4ea0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4b4ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4b4ea4:
    // 0x4b4ea4: 0xac40a9a0  sw          $zero, -0x5660($v0)
    ctx->pc = 0x4b4ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945184), GPR_U32(ctx, 0));
label_4b4ea8:
    // 0x4b4ea8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4b4eac:
    if (ctx->pc == 0x4B4EACu) {
        ctx->pc = 0x4B4EACu;
            // 0x4b4eac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4B4EB0u;
        goto label_4b4eb0;
    }
    ctx->pc = 0x4B4EA8u;
    {
        const bool branch_taken_0x4b4ea8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4ea8) {
            ctx->pc = 0x4B4EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4EA8u;
            // 0x4b4eac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4F04u;
            goto label_4b4f04;
        }
    }
    ctx->pc = 0x4B4EB0u;
label_4b4eb0:
    // 0x4b4eb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b4eb4:
    // 0x4b4eb4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4b4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4b4eb8:
    // 0x4b4eb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4b4ebc:
    // 0x4b4ebc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4b4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4b4ec0:
    // 0x4b4ec0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b4ec4:
    if (ctx->pc == 0x4B4EC4u) {
        ctx->pc = 0x4B4EC4u;
            // 0x4b4ec4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4B4EC8u;
        goto label_4b4ec8;
    }
    ctx->pc = 0x4B4EC0u;
    {
        const bool branch_taken_0x4b4ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4ec0) {
            ctx->pc = 0x4B4EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4EC0u;
            // 0x4b4ec4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4EDCu;
            goto label_4b4edc;
        }
    }
    ctx->pc = 0x4B4EC8u;
label_4b4ec8:
    // 0x4b4ec8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b4ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4ecc:
    // 0x4b4ecc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b4eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b4ed0:
    // 0x4b4ed0: 0x320f809  jalr        $t9
label_4b4ed4:
    if (ctx->pc == 0x4B4ED4u) {
        ctx->pc = 0x4B4ED4u;
            // 0x4b4ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B4ED8u;
        goto label_4b4ed8;
    }
    ctx->pc = 0x4B4ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B4ED8u);
        ctx->pc = 0x4B4ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4ED0u;
            // 0x4b4ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B4ED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B4ED8u; }
            if (ctx->pc != 0x4B4ED8u) { return; }
        }
        }
    }
    ctx->pc = 0x4B4ED8u;
label_4b4ed8:
    // 0x4b4ed8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4b4ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4b4edc:
    // 0x4b4edc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b4ee0:
    if (ctx->pc == 0x4B4EE0u) {
        ctx->pc = 0x4B4EE0u;
            // 0x4b4ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4EE4u;
        goto label_4b4ee4;
    }
    ctx->pc = 0x4B4EDCu;
    {
        const bool branch_taken_0x4b4edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4edc) {
            ctx->pc = 0x4B4EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4EDCu;
            // 0x4b4ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4EF8u;
            goto label_4b4ef8;
        }
    }
    ctx->pc = 0x4B4EE4u;
label_4b4ee4:
    // 0x4b4ee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b4ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4ee8:
    // 0x4b4ee8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b4ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b4eec:
    // 0x4b4eec: 0x320f809  jalr        $t9
label_4b4ef0:
    if (ctx->pc == 0x4B4EF0u) {
        ctx->pc = 0x4B4EF0u;
            // 0x4b4ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B4EF4u;
        goto label_4b4ef4;
    }
    ctx->pc = 0x4B4EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B4EF4u);
        ctx->pc = 0x4B4EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4EECu;
            // 0x4b4ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B4EF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B4EF4u; }
            if (ctx->pc != 0x4B4EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x4B4EF4u;
label_4b4ef4:
    // 0x4b4ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b4ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b4ef8:
    // 0x4b4ef8: 0xc075bf8  jal         func_1D6FE0
label_4b4efc:
    if (ctx->pc == 0x4B4EFCu) {
        ctx->pc = 0x4B4EFCu;
            // 0x4b4efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F00u;
        goto label_4b4f00;
    }
    ctx->pc = 0x4B4EF8u;
    SET_GPR_U32(ctx, 31, 0x4B4F00u);
    ctx->pc = 0x4B4EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4EF8u;
            // 0x4b4efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4F00u; }
        if (ctx->pc != 0x4B4F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4F00u; }
        if (ctx->pc != 0x4B4F00u) { return; }
    }
    ctx->pc = 0x4B4F00u;
label_4b4f00:
    // 0x4b4f00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b4f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b4f04:
    // 0x4b4f04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b4f04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b4f08:
    // 0x4b4f08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b4f0c:
    if (ctx->pc == 0x4B4F0Cu) {
        ctx->pc = 0x4B4F0Cu;
            // 0x4b4f0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F10u;
        goto label_4b4f10;
    }
    ctx->pc = 0x4B4F08u;
    {
        const bool branch_taken_0x4b4f08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b4f08) {
            ctx->pc = 0x4B4F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4F08u;
            // 0x4b4f0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4F1Cu;
            goto label_4b4f1c;
        }
    }
    ctx->pc = 0x4B4F10u;
label_4b4f10:
    // 0x4b4f10: 0xc0400a8  jal         func_1002A0
label_4b4f14:
    if (ctx->pc == 0x4B4F14u) {
        ctx->pc = 0x4B4F14u;
            // 0x4b4f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F18u;
        goto label_4b4f18;
    }
    ctx->pc = 0x4B4F10u;
    SET_GPR_U32(ctx, 31, 0x4B4F18u);
    ctx->pc = 0x4B4F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4F10u;
            // 0x4b4f14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4F18u; }
        if (ctx->pc != 0x4B4F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4F18u; }
        if (ctx->pc != 0x4B4F18u) { return; }
    }
    ctx->pc = 0x4B4F18u;
label_4b4f18:
    // 0x4b4f18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b4f1c:
    // 0x4b4f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b4f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b4f20:
    // 0x4b4f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4f24:
    // 0x4b4f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b4f28:
    // 0x4b4f28: 0x3e00008  jr          $ra
label_4b4f2c:
    if (ctx->pc == 0x4B4F2Cu) {
        ctx->pc = 0x4B4F2Cu;
            // 0x4b4f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B4F30u;
        goto label_fallthrough_0x4b4f28;
    }
    ctx->pc = 0x4B4F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4F28u;
            // 0x4b4f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4b4f28:
    ctx->pc = 0x4B4F30u;
}
