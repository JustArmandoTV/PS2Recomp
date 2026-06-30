#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8EA0
// Address: 0x2b8ea0 - 0x2b9000
void sub_002B8EA0_0x2b8ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8EA0_0x2b8ea0");
#endif

    switch (ctx->pc) {
        case 0x2b8ea0u: goto label_2b8ea0;
        case 0x2b8ea4u: goto label_2b8ea4;
        case 0x2b8ea8u: goto label_2b8ea8;
        case 0x2b8eacu: goto label_2b8eac;
        case 0x2b8eb0u: goto label_2b8eb0;
        case 0x2b8eb4u: goto label_2b8eb4;
        case 0x2b8eb8u: goto label_2b8eb8;
        case 0x2b8ebcu: goto label_2b8ebc;
        case 0x2b8ec0u: goto label_2b8ec0;
        case 0x2b8ec4u: goto label_2b8ec4;
        case 0x2b8ec8u: goto label_2b8ec8;
        case 0x2b8eccu: goto label_2b8ecc;
        case 0x2b8ed0u: goto label_2b8ed0;
        case 0x2b8ed4u: goto label_2b8ed4;
        case 0x2b8ed8u: goto label_2b8ed8;
        case 0x2b8edcu: goto label_2b8edc;
        case 0x2b8ee0u: goto label_2b8ee0;
        case 0x2b8ee4u: goto label_2b8ee4;
        case 0x2b8ee8u: goto label_2b8ee8;
        case 0x2b8eecu: goto label_2b8eec;
        case 0x2b8ef0u: goto label_2b8ef0;
        case 0x2b8ef4u: goto label_2b8ef4;
        case 0x2b8ef8u: goto label_2b8ef8;
        case 0x2b8efcu: goto label_2b8efc;
        case 0x2b8f00u: goto label_2b8f00;
        case 0x2b8f04u: goto label_2b8f04;
        case 0x2b8f08u: goto label_2b8f08;
        case 0x2b8f0cu: goto label_2b8f0c;
        case 0x2b8f10u: goto label_2b8f10;
        case 0x2b8f14u: goto label_2b8f14;
        case 0x2b8f18u: goto label_2b8f18;
        case 0x2b8f1cu: goto label_2b8f1c;
        case 0x2b8f20u: goto label_2b8f20;
        case 0x2b8f24u: goto label_2b8f24;
        case 0x2b8f28u: goto label_2b8f28;
        case 0x2b8f2cu: goto label_2b8f2c;
        case 0x2b8f30u: goto label_2b8f30;
        case 0x2b8f34u: goto label_2b8f34;
        case 0x2b8f38u: goto label_2b8f38;
        case 0x2b8f3cu: goto label_2b8f3c;
        case 0x2b8f40u: goto label_2b8f40;
        case 0x2b8f44u: goto label_2b8f44;
        case 0x2b8f48u: goto label_2b8f48;
        case 0x2b8f4cu: goto label_2b8f4c;
        case 0x2b8f50u: goto label_2b8f50;
        case 0x2b8f54u: goto label_2b8f54;
        case 0x2b8f58u: goto label_2b8f58;
        case 0x2b8f5cu: goto label_2b8f5c;
        case 0x2b8f60u: goto label_2b8f60;
        case 0x2b8f64u: goto label_2b8f64;
        case 0x2b8f68u: goto label_2b8f68;
        case 0x2b8f6cu: goto label_2b8f6c;
        case 0x2b8f70u: goto label_2b8f70;
        case 0x2b8f74u: goto label_2b8f74;
        case 0x2b8f78u: goto label_2b8f78;
        case 0x2b8f7cu: goto label_2b8f7c;
        case 0x2b8f80u: goto label_2b8f80;
        case 0x2b8f84u: goto label_2b8f84;
        case 0x2b8f88u: goto label_2b8f88;
        case 0x2b8f8cu: goto label_2b8f8c;
        case 0x2b8f90u: goto label_2b8f90;
        case 0x2b8f94u: goto label_2b8f94;
        case 0x2b8f98u: goto label_2b8f98;
        case 0x2b8f9cu: goto label_2b8f9c;
        case 0x2b8fa0u: goto label_2b8fa0;
        case 0x2b8fa4u: goto label_2b8fa4;
        case 0x2b8fa8u: goto label_2b8fa8;
        case 0x2b8facu: goto label_2b8fac;
        case 0x2b8fb0u: goto label_2b8fb0;
        case 0x2b8fb4u: goto label_2b8fb4;
        case 0x2b8fb8u: goto label_2b8fb8;
        case 0x2b8fbcu: goto label_2b8fbc;
        case 0x2b8fc0u: goto label_2b8fc0;
        case 0x2b8fc4u: goto label_2b8fc4;
        case 0x2b8fc8u: goto label_2b8fc8;
        case 0x2b8fccu: goto label_2b8fcc;
        case 0x2b8fd0u: goto label_2b8fd0;
        case 0x2b8fd4u: goto label_2b8fd4;
        case 0x2b8fd8u: goto label_2b8fd8;
        case 0x2b8fdcu: goto label_2b8fdc;
        case 0x2b8fe0u: goto label_2b8fe0;
        case 0x2b8fe4u: goto label_2b8fe4;
        case 0x2b8fe8u: goto label_2b8fe8;
        case 0x2b8fecu: goto label_2b8fec;
        case 0x2b8ff0u: goto label_2b8ff0;
        case 0x2b8ff4u: goto label_2b8ff4;
        case 0x2b8ff8u: goto label_2b8ff8;
        case 0x2b8ffcu: goto label_2b8ffc;
        default: break;
    }

    ctx->pc = 0x2b8ea0u;

label_2b8ea0:
    // 0x2b8ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b8ea4:
    // 0x2b8ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b8ea8:
    // 0x2b8ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b8eac:
    // 0x2b8eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b8eb0:
    // 0x2b8eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8eb4:
    // 0x2b8eb4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2b8eb8:
    if (ctx->pc == 0x2B8EB8u) {
        ctx->pc = 0x2B8EB8u;
            // 0x2b8eb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8EBCu;
        goto label_2b8ebc;
    }
    ctx->pc = 0x2B8EB4u;
    {
        const bool branch_taken_0x2b8eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8EB4u;
            // 0x2b8eb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8eb4) {
            ctx->pc = 0x2B8FE8u;
            goto label_2b8fe8;
        }
    }
    ctx->pc = 0x2B8EBCu;
label_2b8ebc:
    // 0x2b8ebc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b8ec0:
    // 0x2b8ec0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b8ec4:
    // 0x2b8ec4: 0x246327a0  addiu       $v1, $v1, 0x27A0
    ctx->pc = 0x2b8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10144));
label_2b8ec8:
    // 0x2b8ec8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2b8ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2b8ecc:
    // 0x2b8ecc: 0x244227d8  addiu       $v0, $v0, 0x27D8
    ctx->pc = 0x2b8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10200));
label_2b8ed0:
    // 0x2b8ed0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b8ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2b8ed4:
    // 0x2b8ed4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2b8ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2b8ed8:
    // 0x2b8ed8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2b8ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2b8edc:
    // 0x2b8edc: 0xc0407c0  jal         func_101F00
label_2b8ee0:
    if (ctx->pc == 0x2B8EE0u) {
        ctx->pc = 0x2B8EE0u;
            // 0x2b8ee0: 0x24a50bf0  addiu       $a1, $a1, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3056));
        ctx->pc = 0x2B8EE4u;
        goto label_2b8ee4;
    }
    ctx->pc = 0x2B8EDCu;
    SET_GPR_U32(ctx, 31, 0x2B8EE4u);
    ctx->pc = 0x2B8EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8EDCu;
            // 0x2b8ee0: 0x24a50bf0  addiu       $a1, $a1, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EE4u; }
        if (ctx->pc != 0x2B8EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EE4u; }
        if (ctx->pc != 0x2B8EE4u) { return; }
    }
    ctx->pc = 0x2B8EE4u;
label_2b8ee4:
    // 0x2b8ee4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2b8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2b8ee8:
    // 0x2b8ee8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b8eec:
    if (ctx->pc == 0x2B8EECu) {
        ctx->pc = 0x2B8EECu;
            // 0x2b8eec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2B8EF0u;
        goto label_2b8ef0;
    }
    ctx->pc = 0x2B8EE8u;
    {
        const bool branch_taken_0x2b8ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8ee8) {
            ctx->pc = 0x2B8EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8EE8u;
            // 0x2b8eec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8EFCu;
            goto label_2b8efc;
        }
    }
    ctx->pc = 0x2B8EF0u;
label_2b8ef0:
    // 0x2b8ef0: 0xc07507c  jal         func_1D41F0
label_2b8ef4:
    if (ctx->pc == 0x2B8EF4u) {
        ctx->pc = 0x2B8EF4u;
            // 0x2b8ef4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2B8EF8u;
        goto label_2b8ef8;
    }
    ctx->pc = 0x2B8EF0u;
    SET_GPR_U32(ctx, 31, 0x2B8EF8u);
    ctx->pc = 0x2B8EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8EF0u;
            // 0x2b8ef4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EF8u; }
        if (ctx->pc != 0x2B8EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EF8u; }
        if (ctx->pc != 0x2B8EF8u) { return; }
    }
    ctx->pc = 0x2B8EF8u;
label_2b8ef8:
    // 0x2b8ef8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2b8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2b8efc:
    // 0x2b8efc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b8f00:
    if (ctx->pc == 0x2B8F00u) {
        ctx->pc = 0x2B8F00u;
            // 0x2b8f00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2B8F04u;
        goto label_2b8f04;
    }
    ctx->pc = 0x2B8EFCu;
    {
        const bool branch_taken_0x2b8efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8efc) {
            ctx->pc = 0x2B8F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8EFCu;
            // 0x2b8f00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F2Cu;
            goto label_2b8f2c;
        }
    }
    ctx->pc = 0x2B8F04u;
label_2b8f04:
    // 0x2b8f04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b8f08:
    if (ctx->pc == 0x2B8F08u) {
        ctx->pc = 0x2B8F0Cu;
        goto label_2b8f0c;
    }
    ctx->pc = 0x2B8F04u;
    {
        const bool branch_taken_0x2b8f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f04) {
            ctx->pc = 0x2B8F28u;
            goto label_2b8f28;
        }
    }
    ctx->pc = 0x2B8F0Cu;
label_2b8f0c:
    // 0x2b8f0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b8f10:
    if (ctx->pc == 0x2B8F10u) {
        ctx->pc = 0x2B8F14u;
        goto label_2b8f14;
    }
    ctx->pc = 0x2B8F0Cu;
    {
        const bool branch_taken_0x2b8f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f0c) {
            ctx->pc = 0x2B8F28u;
            goto label_2b8f28;
        }
    }
    ctx->pc = 0x2B8F14u;
label_2b8f14:
    // 0x2b8f14: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2b8f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2b8f18:
    // 0x2b8f18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b8f1c:
    if (ctx->pc == 0x2B8F1Cu) {
        ctx->pc = 0x2B8F20u;
        goto label_2b8f20;
    }
    ctx->pc = 0x2B8F18u;
    {
        const bool branch_taken_0x2b8f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f18) {
            ctx->pc = 0x2B8F28u;
            goto label_2b8f28;
        }
    }
    ctx->pc = 0x2B8F20u;
label_2b8f20:
    // 0x2b8f20: 0xc0400a8  jal         func_1002A0
label_2b8f24:
    if (ctx->pc == 0x2B8F24u) {
        ctx->pc = 0x2B8F28u;
        goto label_2b8f28;
    }
    ctx->pc = 0x2B8F20u;
    SET_GPR_U32(ctx, 31, 0x2B8F28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F28u; }
        if (ctx->pc != 0x2B8F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F28u; }
        if (ctx->pc != 0x2B8F28u) { return; }
    }
    ctx->pc = 0x2B8F28u;
label_2b8f28:
    // 0x2b8f28: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2b8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2b8f2c:
    // 0x2b8f2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b8f30:
    if (ctx->pc == 0x2B8F30u) {
        ctx->pc = 0x2B8F30u;
            // 0x2b8f30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2B8F34u;
        goto label_2b8f34;
    }
    ctx->pc = 0x2B8F2Cu;
    {
        const bool branch_taken_0x2b8f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f2c) {
            ctx->pc = 0x2B8F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F2Cu;
            // 0x2b8f30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8F5Cu;
            goto label_2b8f5c;
        }
    }
    ctx->pc = 0x2B8F34u;
label_2b8f34:
    // 0x2b8f34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b8f38:
    if (ctx->pc == 0x2B8F38u) {
        ctx->pc = 0x2B8F3Cu;
        goto label_2b8f3c;
    }
    ctx->pc = 0x2B8F34u;
    {
        const bool branch_taken_0x2b8f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f34) {
            ctx->pc = 0x2B8F58u;
            goto label_2b8f58;
        }
    }
    ctx->pc = 0x2B8F3Cu;
label_2b8f3c:
    // 0x2b8f3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b8f40:
    if (ctx->pc == 0x2B8F40u) {
        ctx->pc = 0x2B8F44u;
        goto label_2b8f44;
    }
    ctx->pc = 0x2B8F3Cu;
    {
        const bool branch_taken_0x2b8f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f3c) {
            ctx->pc = 0x2B8F58u;
            goto label_2b8f58;
        }
    }
    ctx->pc = 0x2B8F44u;
label_2b8f44:
    // 0x2b8f44: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2b8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2b8f48:
    // 0x2b8f48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b8f4c:
    if (ctx->pc == 0x2B8F4Cu) {
        ctx->pc = 0x2B8F50u;
        goto label_2b8f50;
    }
    ctx->pc = 0x2B8F48u;
    {
        const bool branch_taken_0x2b8f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f48) {
            ctx->pc = 0x2B8F58u;
            goto label_2b8f58;
        }
    }
    ctx->pc = 0x2B8F50u;
label_2b8f50:
    // 0x2b8f50: 0xc0400a8  jal         func_1002A0
label_2b8f54:
    if (ctx->pc == 0x2B8F54u) {
        ctx->pc = 0x2B8F58u;
        goto label_2b8f58;
    }
    ctx->pc = 0x2B8F50u;
    SET_GPR_U32(ctx, 31, 0x2B8F58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F58u; }
        if (ctx->pc != 0x2B8F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F58u; }
        if (ctx->pc != 0x2B8F58u) { return; }
    }
    ctx->pc = 0x2B8F58u;
label_2b8f58:
    // 0x2b8f58: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2b8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2b8f5c:
    // 0x2b8f5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b8f60:
    if (ctx->pc == 0x2B8F60u) {
        ctx->pc = 0x2B8F64u;
        goto label_2b8f64;
    }
    ctx->pc = 0x2B8F5Cu;
    {
        const bool branch_taken_0x2b8f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f5c) {
            ctx->pc = 0x2B8F78u;
            goto label_2b8f78;
        }
    }
    ctx->pc = 0x2B8F64u;
label_2b8f64:
    // 0x2b8f64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b8f68:
    // 0x2b8f68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b8f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2b8f6c:
    // 0x2b8f6c: 0x24632788  addiu       $v1, $v1, 0x2788
    ctx->pc = 0x2b8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10120));
label_2b8f70:
    // 0x2b8f70: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2b8f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2b8f74:
    // 0x2b8f74: 0xac400cc8  sw          $zero, 0xCC8($v0)
    ctx->pc = 0x2b8f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3272), GPR_U32(ctx, 0));
label_2b8f78:
    // 0x2b8f78: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2b8f7c:
    if (ctx->pc == 0x2B8F7Cu) {
        ctx->pc = 0x2B8F7Cu;
            // 0x2b8f7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B8F80u;
        goto label_2b8f80;
    }
    ctx->pc = 0x2B8F78u;
    {
        const bool branch_taken_0x2b8f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f78) {
            ctx->pc = 0x2B8F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F78u;
            // 0x2b8f7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FD4u;
            goto label_2b8fd4;
        }
    }
    ctx->pc = 0x2B8F80u;
label_2b8f80:
    // 0x2b8f80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b8f84:
    // 0x2b8f84: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2b8f88:
    // 0x2b8f88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b8f8c:
    // 0x2b8f8c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2b8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b8f90:
    // 0x2b8f90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b8f94:
    if (ctx->pc == 0x2B8F94u) {
        ctx->pc = 0x2B8F94u;
            // 0x2b8f94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2B8F98u;
        goto label_2b8f98;
    }
    ctx->pc = 0x2B8F90u;
    {
        const bool branch_taken_0x2b8f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f90) {
            ctx->pc = 0x2B8F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8F90u;
            // 0x2b8f94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FACu;
            goto label_2b8fac;
        }
    }
    ctx->pc = 0x2B8F98u;
label_2b8f98:
    // 0x2b8f98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b8f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b8f9c:
    // 0x2b8f9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b8f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b8fa0:
    // 0x2b8fa0: 0x320f809  jalr        $t9
label_2b8fa4:
    if (ctx->pc == 0x2B8FA4u) {
        ctx->pc = 0x2B8FA4u;
            // 0x2b8fa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B8FA8u;
        goto label_2b8fa8;
    }
    ctx->pc = 0x2B8FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B8FA8u);
        ctx->pc = 0x2B8FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FA0u;
            // 0x2b8fa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B8FA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FA8u; }
            if (ctx->pc != 0x2B8FA8u) { return; }
        }
        }
    }
    ctx->pc = 0x2B8FA8u;
label_2b8fa8:
    // 0x2b8fa8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2b8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2b8fac:
    // 0x2b8fac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b8fb0:
    if (ctx->pc == 0x2B8FB0u) {
        ctx->pc = 0x2B8FB0u;
            // 0x2b8fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FB4u;
        goto label_2b8fb4;
    }
    ctx->pc = 0x2B8FACu;
    {
        const bool branch_taken_0x2b8fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fac) {
            ctx->pc = 0x2B8FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FACu;
            // 0x2b8fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FC8u;
            goto label_2b8fc8;
        }
    }
    ctx->pc = 0x2B8FB4u;
label_2b8fb4:
    // 0x2b8fb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b8fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b8fb8:
    // 0x2b8fb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b8fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b8fbc:
    // 0x2b8fbc: 0x320f809  jalr        $t9
label_2b8fc0:
    if (ctx->pc == 0x2B8FC0u) {
        ctx->pc = 0x2B8FC0u;
            // 0x2b8fc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B8FC4u;
        goto label_2b8fc4;
    }
    ctx->pc = 0x2B8FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B8FC4u);
        ctx->pc = 0x2B8FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FBCu;
            // 0x2b8fc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B8FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FC4u; }
            if (ctx->pc != 0x2B8FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B8FC4u;
label_2b8fc4:
    // 0x2b8fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fc8:
    // 0x2b8fc8: 0xc075bf8  jal         func_1D6FE0
label_2b8fcc:
    if (ctx->pc == 0x2B8FCCu) {
        ctx->pc = 0x2B8FCCu;
            // 0x2b8fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FD0u;
        goto label_2b8fd0;
    }
    ctx->pc = 0x2B8FC8u;
    SET_GPR_U32(ctx, 31, 0x2B8FD0u);
    ctx->pc = 0x2B8FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FC8u;
            // 0x2b8fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FD0u; }
        if (ctx->pc != 0x2B8FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FD0u; }
        if (ctx->pc != 0x2B8FD0u) { return; }
    }
    ctx->pc = 0x2B8FD0u;
label_2b8fd0:
    // 0x2b8fd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b8fd4:
    // 0x2b8fd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b8fd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b8fd8:
    // 0x2b8fd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b8fdc:
    if (ctx->pc == 0x2B8FDCu) {
        ctx->pc = 0x2B8FDCu;
            // 0x2b8fdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FE0u;
        goto label_2b8fe0;
    }
    ctx->pc = 0x2B8FD8u;
    {
        const bool branch_taken_0x2b8fd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b8fd8) {
            ctx->pc = 0x2B8FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FD8u;
            // 0x2b8fdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FECu;
            goto label_2b8fec;
        }
    }
    ctx->pc = 0x2B8FE0u;
label_2b8fe0:
    // 0x2b8fe0: 0xc0400a8  jal         func_1002A0
label_2b8fe4:
    if (ctx->pc == 0x2B8FE4u) {
        ctx->pc = 0x2B8FE4u;
            // 0x2b8fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FE8u;
        goto label_2b8fe8;
    }
    ctx->pc = 0x2B8FE0u;
    SET_GPR_U32(ctx, 31, 0x2B8FE8u);
    ctx->pc = 0x2B8FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FE0u;
            // 0x2b8fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FE8u; }
        if (ctx->pc != 0x2B8FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FE8u; }
        if (ctx->pc != 0x2B8FE8u) { return; }
    }
    ctx->pc = 0x2B8FE8u;
label_2b8fe8:
    // 0x2b8fe8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b8fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fec:
    // 0x2b8fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b8fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b8ff0:
    // 0x2b8ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8ff4:
    // 0x2b8ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8ff8:
    // 0x2b8ff8: 0x3e00008  jr          $ra
label_2b8ffc:
    if (ctx->pc == 0x2B8FFCu) {
        ctx->pc = 0x2B8FFCu;
            // 0x2b8ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B9000u;
        goto label_fallthrough_0x2b8ff8;
    }
    ctx->pc = 0x2B8FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8FF8u;
            // 0x2b8ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b8ff8:
    ctx->pc = 0x2B9000u;
}
