#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362CD0
// Address: 0x362cd0 - 0x362f30
void sub_00362CD0_0x362cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362CD0_0x362cd0");
#endif

    switch (ctx->pc) {
        case 0x362cd0u: goto label_362cd0;
        case 0x362cd4u: goto label_362cd4;
        case 0x362cd8u: goto label_362cd8;
        case 0x362cdcu: goto label_362cdc;
        case 0x362ce0u: goto label_362ce0;
        case 0x362ce4u: goto label_362ce4;
        case 0x362ce8u: goto label_362ce8;
        case 0x362cecu: goto label_362cec;
        case 0x362cf0u: goto label_362cf0;
        case 0x362cf4u: goto label_362cf4;
        case 0x362cf8u: goto label_362cf8;
        case 0x362cfcu: goto label_362cfc;
        case 0x362d00u: goto label_362d00;
        case 0x362d04u: goto label_362d04;
        case 0x362d08u: goto label_362d08;
        case 0x362d0cu: goto label_362d0c;
        case 0x362d10u: goto label_362d10;
        case 0x362d14u: goto label_362d14;
        case 0x362d18u: goto label_362d18;
        case 0x362d1cu: goto label_362d1c;
        case 0x362d20u: goto label_362d20;
        case 0x362d24u: goto label_362d24;
        case 0x362d28u: goto label_362d28;
        case 0x362d2cu: goto label_362d2c;
        case 0x362d30u: goto label_362d30;
        case 0x362d34u: goto label_362d34;
        case 0x362d38u: goto label_362d38;
        case 0x362d3cu: goto label_362d3c;
        case 0x362d40u: goto label_362d40;
        case 0x362d44u: goto label_362d44;
        case 0x362d48u: goto label_362d48;
        case 0x362d4cu: goto label_362d4c;
        case 0x362d50u: goto label_362d50;
        case 0x362d54u: goto label_362d54;
        case 0x362d58u: goto label_362d58;
        case 0x362d5cu: goto label_362d5c;
        case 0x362d60u: goto label_362d60;
        case 0x362d64u: goto label_362d64;
        case 0x362d68u: goto label_362d68;
        case 0x362d6cu: goto label_362d6c;
        case 0x362d70u: goto label_362d70;
        case 0x362d74u: goto label_362d74;
        case 0x362d78u: goto label_362d78;
        case 0x362d7cu: goto label_362d7c;
        case 0x362d80u: goto label_362d80;
        case 0x362d84u: goto label_362d84;
        case 0x362d88u: goto label_362d88;
        case 0x362d8cu: goto label_362d8c;
        case 0x362d90u: goto label_362d90;
        case 0x362d94u: goto label_362d94;
        case 0x362d98u: goto label_362d98;
        case 0x362d9cu: goto label_362d9c;
        case 0x362da0u: goto label_362da0;
        case 0x362da4u: goto label_362da4;
        case 0x362da8u: goto label_362da8;
        case 0x362dacu: goto label_362dac;
        case 0x362db0u: goto label_362db0;
        case 0x362db4u: goto label_362db4;
        case 0x362db8u: goto label_362db8;
        case 0x362dbcu: goto label_362dbc;
        case 0x362dc0u: goto label_362dc0;
        case 0x362dc4u: goto label_362dc4;
        case 0x362dc8u: goto label_362dc8;
        case 0x362dccu: goto label_362dcc;
        case 0x362dd0u: goto label_362dd0;
        case 0x362dd4u: goto label_362dd4;
        case 0x362dd8u: goto label_362dd8;
        case 0x362ddcu: goto label_362ddc;
        case 0x362de0u: goto label_362de0;
        case 0x362de4u: goto label_362de4;
        case 0x362de8u: goto label_362de8;
        case 0x362decu: goto label_362dec;
        case 0x362df0u: goto label_362df0;
        case 0x362df4u: goto label_362df4;
        case 0x362df8u: goto label_362df8;
        case 0x362dfcu: goto label_362dfc;
        case 0x362e00u: goto label_362e00;
        case 0x362e04u: goto label_362e04;
        case 0x362e08u: goto label_362e08;
        case 0x362e0cu: goto label_362e0c;
        case 0x362e10u: goto label_362e10;
        case 0x362e14u: goto label_362e14;
        case 0x362e18u: goto label_362e18;
        case 0x362e1cu: goto label_362e1c;
        case 0x362e20u: goto label_362e20;
        case 0x362e24u: goto label_362e24;
        case 0x362e28u: goto label_362e28;
        case 0x362e2cu: goto label_362e2c;
        case 0x362e30u: goto label_362e30;
        case 0x362e34u: goto label_362e34;
        case 0x362e38u: goto label_362e38;
        case 0x362e3cu: goto label_362e3c;
        case 0x362e40u: goto label_362e40;
        case 0x362e44u: goto label_362e44;
        case 0x362e48u: goto label_362e48;
        case 0x362e4cu: goto label_362e4c;
        case 0x362e50u: goto label_362e50;
        case 0x362e54u: goto label_362e54;
        case 0x362e58u: goto label_362e58;
        case 0x362e5cu: goto label_362e5c;
        case 0x362e60u: goto label_362e60;
        case 0x362e64u: goto label_362e64;
        case 0x362e68u: goto label_362e68;
        case 0x362e6cu: goto label_362e6c;
        case 0x362e70u: goto label_362e70;
        case 0x362e74u: goto label_362e74;
        case 0x362e78u: goto label_362e78;
        case 0x362e7cu: goto label_362e7c;
        case 0x362e80u: goto label_362e80;
        case 0x362e84u: goto label_362e84;
        case 0x362e88u: goto label_362e88;
        case 0x362e8cu: goto label_362e8c;
        case 0x362e90u: goto label_362e90;
        case 0x362e94u: goto label_362e94;
        case 0x362e98u: goto label_362e98;
        case 0x362e9cu: goto label_362e9c;
        case 0x362ea0u: goto label_362ea0;
        case 0x362ea4u: goto label_362ea4;
        case 0x362ea8u: goto label_362ea8;
        case 0x362eacu: goto label_362eac;
        case 0x362eb0u: goto label_362eb0;
        case 0x362eb4u: goto label_362eb4;
        case 0x362eb8u: goto label_362eb8;
        case 0x362ebcu: goto label_362ebc;
        case 0x362ec0u: goto label_362ec0;
        case 0x362ec4u: goto label_362ec4;
        case 0x362ec8u: goto label_362ec8;
        case 0x362eccu: goto label_362ecc;
        case 0x362ed0u: goto label_362ed0;
        case 0x362ed4u: goto label_362ed4;
        case 0x362ed8u: goto label_362ed8;
        case 0x362edcu: goto label_362edc;
        case 0x362ee0u: goto label_362ee0;
        case 0x362ee4u: goto label_362ee4;
        case 0x362ee8u: goto label_362ee8;
        case 0x362eecu: goto label_362eec;
        case 0x362ef0u: goto label_362ef0;
        case 0x362ef4u: goto label_362ef4;
        case 0x362ef8u: goto label_362ef8;
        case 0x362efcu: goto label_362efc;
        case 0x362f00u: goto label_362f00;
        case 0x362f04u: goto label_362f04;
        case 0x362f08u: goto label_362f08;
        case 0x362f0cu: goto label_362f0c;
        case 0x362f10u: goto label_362f10;
        case 0x362f14u: goto label_362f14;
        case 0x362f18u: goto label_362f18;
        case 0x362f1cu: goto label_362f1c;
        case 0x362f20u: goto label_362f20;
        case 0x362f24u: goto label_362f24;
        case 0x362f28u: goto label_362f28;
        case 0x362f2cu: goto label_362f2c;
        default: break;
    }

    ctx->pc = 0x362cd0u;

label_362cd0:
    // 0x362cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x362cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_362cd4:
    // 0x362cd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x362cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_362cd8:
    // 0x362cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_362cdc:
    // 0x362cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_362ce0:
    // 0x362ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_362ce4:
    // 0x362ce4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_362ce8:
    if (ctx->pc == 0x362CE8u) {
        ctx->pc = 0x362CE8u;
            // 0x362ce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362CECu;
        goto label_362cec;
    }
    ctx->pc = 0x362CE4u;
    {
        const bool branch_taken_0x362ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x362CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362CE4u;
            // 0x362ce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ce4) {
            ctx->pc = 0x362E18u;
            goto label_362e18;
        }
    }
    ctx->pc = 0x362CECu;
label_362cec:
    // 0x362cec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x362cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_362cf0:
    // 0x362cf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_362cf4:
    // 0x362cf4: 0x24636720  addiu       $v1, $v1, 0x6720
    ctx->pc = 0x362cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26400));
label_362cf8:
    // 0x362cf8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x362cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_362cfc:
    // 0x362cfc: 0x24426758  addiu       $v0, $v0, 0x6758
    ctx->pc = 0x362cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26456));
label_362d00:
    // 0x362d00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x362d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_362d04:
    // 0x362d04: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x362d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_362d08:
    // 0x362d08: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x362d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_362d0c:
    // 0x362d0c: 0xc0407c0  jal         func_101F00
label_362d10:
    if (ctx->pc == 0x362D10u) {
        ctx->pc = 0x362D10u;
            // 0x362d10: 0x24a52e30  addiu       $a1, $a1, 0x2E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11824));
        ctx->pc = 0x362D14u;
        goto label_362d14;
    }
    ctx->pc = 0x362D0Cu;
    SET_GPR_U32(ctx, 31, 0x362D14u);
    ctx->pc = 0x362D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362D0Cu;
            // 0x362d10: 0x24a52e30  addiu       $a1, $a1, 0x2E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362D14u; }
        if (ctx->pc != 0x362D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362D14u; }
        if (ctx->pc != 0x362D14u) { return; }
    }
    ctx->pc = 0x362D14u;
label_362d14:
    // 0x362d14: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x362d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_362d18:
    // 0x362d18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_362d1c:
    if (ctx->pc == 0x362D1Cu) {
        ctx->pc = 0x362D1Cu;
            // 0x362d1c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x362D20u;
        goto label_362d20;
    }
    ctx->pc = 0x362D18u;
    {
        const bool branch_taken_0x362d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d18) {
            ctx->pc = 0x362D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362D18u;
            // 0x362d1c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362D2Cu;
            goto label_362d2c;
        }
    }
    ctx->pc = 0x362D20u;
label_362d20:
    // 0x362d20: 0xc07507c  jal         func_1D41F0
label_362d24:
    if (ctx->pc == 0x362D24u) {
        ctx->pc = 0x362D24u;
            // 0x362d24: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x362D28u;
        goto label_362d28;
    }
    ctx->pc = 0x362D20u;
    SET_GPR_U32(ctx, 31, 0x362D28u);
    ctx->pc = 0x362D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362D20u;
            // 0x362d24: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362D28u; }
        if (ctx->pc != 0x362D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362D28u; }
        if (ctx->pc != 0x362D28u) { return; }
    }
    ctx->pc = 0x362D28u;
label_362d28:
    // 0x362d28: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x362d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_362d2c:
    // 0x362d2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_362d30:
    if (ctx->pc == 0x362D30u) {
        ctx->pc = 0x362D30u;
            // 0x362d30: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x362D34u;
        goto label_362d34;
    }
    ctx->pc = 0x362D2Cu;
    {
        const bool branch_taken_0x362d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d2c) {
            ctx->pc = 0x362D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362D2Cu;
            // 0x362d30: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362D5Cu;
            goto label_362d5c;
        }
    }
    ctx->pc = 0x362D34u;
label_362d34:
    // 0x362d34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_362d38:
    if (ctx->pc == 0x362D38u) {
        ctx->pc = 0x362D3Cu;
        goto label_362d3c;
    }
    ctx->pc = 0x362D34u;
    {
        const bool branch_taken_0x362d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d34) {
            ctx->pc = 0x362D58u;
            goto label_362d58;
        }
    }
    ctx->pc = 0x362D3Cu;
label_362d3c:
    // 0x362d3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_362d40:
    if (ctx->pc == 0x362D40u) {
        ctx->pc = 0x362D44u;
        goto label_362d44;
    }
    ctx->pc = 0x362D3Cu;
    {
        const bool branch_taken_0x362d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d3c) {
            ctx->pc = 0x362D58u;
            goto label_362d58;
        }
    }
    ctx->pc = 0x362D44u;
label_362d44:
    // 0x362d44: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x362d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_362d48:
    // 0x362d48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_362d4c:
    if (ctx->pc == 0x362D4Cu) {
        ctx->pc = 0x362D50u;
        goto label_362d50;
    }
    ctx->pc = 0x362D48u;
    {
        const bool branch_taken_0x362d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d48) {
            ctx->pc = 0x362D58u;
            goto label_362d58;
        }
    }
    ctx->pc = 0x362D50u;
label_362d50:
    // 0x362d50: 0xc0400a8  jal         func_1002A0
label_362d54:
    if (ctx->pc == 0x362D54u) {
        ctx->pc = 0x362D58u;
        goto label_362d58;
    }
    ctx->pc = 0x362D50u;
    SET_GPR_U32(ctx, 31, 0x362D58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362D58u; }
        if (ctx->pc != 0x362D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362D58u; }
        if (ctx->pc != 0x362D58u) { return; }
    }
    ctx->pc = 0x362D58u;
label_362d58:
    // 0x362d58: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x362d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_362d5c:
    // 0x362d5c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_362d60:
    if (ctx->pc == 0x362D60u) {
        ctx->pc = 0x362D60u;
            // 0x362d60: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x362D64u;
        goto label_362d64;
    }
    ctx->pc = 0x362D5Cu;
    {
        const bool branch_taken_0x362d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d5c) {
            ctx->pc = 0x362D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362D5Cu;
            // 0x362d60: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362D8Cu;
            goto label_362d8c;
        }
    }
    ctx->pc = 0x362D64u;
label_362d64:
    // 0x362d64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_362d68:
    if (ctx->pc == 0x362D68u) {
        ctx->pc = 0x362D6Cu;
        goto label_362d6c;
    }
    ctx->pc = 0x362D64u;
    {
        const bool branch_taken_0x362d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d64) {
            ctx->pc = 0x362D88u;
            goto label_362d88;
        }
    }
    ctx->pc = 0x362D6Cu;
label_362d6c:
    // 0x362d6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_362d70:
    if (ctx->pc == 0x362D70u) {
        ctx->pc = 0x362D74u;
        goto label_362d74;
    }
    ctx->pc = 0x362D6Cu;
    {
        const bool branch_taken_0x362d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d6c) {
            ctx->pc = 0x362D88u;
            goto label_362d88;
        }
    }
    ctx->pc = 0x362D74u;
label_362d74:
    // 0x362d74: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x362d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_362d78:
    // 0x362d78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_362d7c:
    if (ctx->pc == 0x362D7Cu) {
        ctx->pc = 0x362D80u;
        goto label_362d80;
    }
    ctx->pc = 0x362D78u;
    {
        const bool branch_taken_0x362d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d78) {
            ctx->pc = 0x362D88u;
            goto label_362d88;
        }
    }
    ctx->pc = 0x362D80u;
label_362d80:
    // 0x362d80: 0xc0400a8  jal         func_1002A0
label_362d84:
    if (ctx->pc == 0x362D84u) {
        ctx->pc = 0x362D88u;
        goto label_362d88;
    }
    ctx->pc = 0x362D80u;
    SET_GPR_U32(ctx, 31, 0x362D88u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362D88u; }
        if (ctx->pc != 0x362D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362D88u; }
        if (ctx->pc != 0x362D88u) { return; }
    }
    ctx->pc = 0x362D88u;
label_362d88:
    // 0x362d88: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x362d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_362d8c:
    // 0x362d8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_362d90:
    if (ctx->pc == 0x362D90u) {
        ctx->pc = 0x362D94u;
        goto label_362d94;
    }
    ctx->pc = 0x362D8Cu;
    {
        const bool branch_taken_0x362d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d8c) {
            ctx->pc = 0x362DA8u;
            goto label_362da8;
        }
    }
    ctx->pc = 0x362D94u;
label_362d94:
    // 0x362d94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x362d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_362d98:
    // 0x362d98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x362d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_362d9c:
    // 0x362d9c: 0x24636708  addiu       $v1, $v1, 0x6708
    ctx->pc = 0x362d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26376));
label_362da0:
    // 0x362da0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x362da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_362da4:
    // 0x362da4: 0xac404018  sw          $zero, 0x4018($v0)
    ctx->pc = 0x362da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16408), GPR_U32(ctx, 0));
label_362da8:
    // 0x362da8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_362dac:
    if (ctx->pc == 0x362DACu) {
        ctx->pc = 0x362DACu;
            // 0x362dac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x362DB0u;
        goto label_362db0;
    }
    ctx->pc = 0x362DA8u;
    {
        const bool branch_taken_0x362da8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x362da8) {
            ctx->pc = 0x362DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362DA8u;
            // 0x362dac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362E04u;
            goto label_362e04;
        }
    }
    ctx->pc = 0x362DB0u;
label_362db0:
    // 0x362db0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_362db4:
    // 0x362db4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x362db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_362db8:
    // 0x362db8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x362db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_362dbc:
    // 0x362dbc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x362dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_362dc0:
    // 0x362dc0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_362dc4:
    if (ctx->pc == 0x362DC4u) {
        ctx->pc = 0x362DC4u;
            // 0x362dc4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x362DC8u;
        goto label_362dc8;
    }
    ctx->pc = 0x362DC0u;
    {
        const bool branch_taken_0x362dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362dc0) {
            ctx->pc = 0x362DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362DC0u;
            // 0x362dc4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362DDCu;
            goto label_362ddc;
        }
    }
    ctx->pc = 0x362DC8u;
label_362dc8:
    // 0x362dc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x362dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_362dcc:
    // 0x362dcc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x362dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_362dd0:
    // 0x362dd0: 0x320f809  jalr        $t9
label_362dd4:
    if (ctx->pc == 0x362DD4u) {
        ctx->pc = 0x362DD4u;
            // 0x362dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x362DD8u;
        goto label_362dd8;
    }
    ctx->pc = 0x362DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x362DD8u);
        ctx->pc = 0x362DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362DD0u;
            // 0x362dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x362DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x362DD8u; }
            if (ctx->pc != 0x362DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x362DD8u;
label_362dd8:
    // 0x362dd8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x362dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_362ddc:
    // 0x362ddc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_362de0:
    if (ctx->pc == 0x362DE0u) {
        ctx->pc = 0x362DE0u;
            // 0x362de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362DE4u;
        goto label_362de4;
    }
    ctx->pc = 0x362DDCu;
    {
        const bool branch_taken_0x362ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362ddc) {
            ctx->pc = 0x362DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362DDCu;
            // 0x362de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362DF8u;
            goto label_362df8;
        }
    }
    ctx->pc = 0x362DE4u;
label_362de4:
    // 0x362de4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x362de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_362de8:
    // 0x362de8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x362de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_362dec:
    // 0x362dec: 0x320f809  jalr        $t9
label_362df0:
    if (ctx->pc == 0x362DF0u) {
        ctx->pc = 0x362DF0u;
            // 0x362df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x362DF4u;
        goto label_362df4;
    }
    ctx->pc = 0x362DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x362DF4u);
        ctx->pc = 0x362DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362DECu;
            // 0x362df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x362DF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x362DF4u; }
            if (ctx->pc != 0x362DF4u) { return; }
        }
        }
    }
    ctx->pc = 0x362DF4u;
label_362df4:
    // 0x362df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x362df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_362df8:
    // 0x362df8: 0xc075bf8  jal         func_1D6FE0
label_362dfc:
    if (ctx->pc == 0x362DFCu) {
        ctx->pc = 0x362DFCu;
            // 0x362dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362E00u;
        goto label_362e00;
    }
    ctx->pc = 0x362DF8u;
    SET_GPR_U32(ctx, 31, 0x362E00u);
    ctx->pc = 0x362DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362DF8u;
            // 0x362dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362E00u; }
        if (ctx->pc != 0x362E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362E00u; }
        if (ctx->pc != 0x362E00u) { return; }
    }
    ctx->pc = 0x362E00u;
label_362e00:
    // 0x362e00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x362e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_362e04:
    // 0x362e04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x362e04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_362e08:
    // 0x362e08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_362e0c:
    if (ctx->pc == 0x362E0Cu) {
        ctx->pc = 0x362E0Cu;
            // 0x362e0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362E10u;
        goto label_362e10;
    }
    ctx->pc = 0x362E08u;
    {
        const bool branch_taken_0x362e08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x362e08) {
            ctx->pc = 0x362E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362E08u;
            // 0x362e0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362E1Cu;
            goto label_362e1c;
        }
    }
    ctx->pc = 0x362E10u;
label_362e10:
    // 0x362e10: 0xc0400a8  jal         func_1002A0
label_362e14:
    if (ctx->pc == 0x362E14u) {
        ctx->pc = 0x362E14u;
            // 0x362e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362E18u;
        goto label_362e18;
    }
    ctx->pc = 0x362E10u;
    SET_GPR_U32(ctx, 31, 0x362E18u);
    ctx->pc = 0x362E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362E10u;
            // 0x362e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362E18u; }
        if (ctx->pc != 0x362E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362E18u; }
        if (ctx->pc != 0x362E18u) { return; }
    }
    ctx->pc = 0x362E18u;
label_362e18:
    // 0x362e18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x362e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_362e1c:
    // 0x362e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x362e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_362e20:
    // 0x362e20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x362e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_362e24:
    // 0x362e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_362e28:
    // 0x362e28: 0x3e00008  jr          $ra
label_362e2c:
    if (ctx->pc == 0x362E2Cu) {
        ctx->pc = 0x362E2Cu;
            // 0x362e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x362E30u;
        goto label_362e30;
    }
    ctx->pc = 0x362E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362E28u;
            // 0x362e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x362E30u;
label_362e30:
    // 0x362e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x362e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_362e34:
    // 0x362e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x362e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_362e38:
    // 0x362e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_362e3c:
    // 0x362e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_362e40:
    // 0x362e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_362e44:
    // 0x362e44: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_362e48:
    if (ctx->pc == 0x362E48u) {
        ctx->pc = 0x362E48u;
            // 0x362e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362E4Cu;
        goto label_362e4c;
    }
    ctx->pc = 0x362E44u;
    {
        const bool branch_taken_0x362e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x362E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362E44u;
            // 0x362e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e44) {
            ctx->pc = 0x362F0Cu;
            goto label_362f0c;
        }
    }
    ctx->pc = 0x362E4Cu;
label_362e4c:
    // 0x362e4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x362e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_362e50:
    // 0x362e50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_362e54:
    // 0x362e54: 0x246367c0  addiu       $v1, $v1, 0x67C0
    ctx->pc = 0x362e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26560));
label_362e58:
    // 0x362e58: 0x24426800  addiu       $v0, $v0, 0x6800
    ctx->pc = 0x362e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26624));
label_362e5c:
    // 0x362e5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x362e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_362e60:
    // 0x362e60: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x362e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_362e64:
    // 0x362e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x362e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_362e68:
    // 0x362e68: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x362e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_362e6c:
    // 0x362e6c: 0x320f809  jalr        $t9
label_362e70:
    if (ctx->pc == 0x362E70u) {
        ctx->pc = 0x362E74u;
        goto label_362e74;
    }
    ctx->pc = 0x362E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x362E74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x362E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x362E74u; }
            if (ctx->pc != 0x362E74u) { return; }
        }
        }
    }
    ctx->pc = 0x362E74u;
label_362e74:
    // 0x362e74: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_362e78:
    if (ctx->pc == 0x362E78u) {
        ctx->pc = 0x362E78u;
            // 0x362e78: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x362E7Cu;
        goto label_362e7c;
    }
    ctx->pc = 0x362E74u;
    {
        const bool branch_taken_0x362e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x362e74) {
            ctx->pc = 0x362E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362E74u;
            // 0x362e78: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362EF8u;
            goto label_362ef8;
        }
    }
    ctx->pc = 0x362E7Cu;
label_362e7c:
    // 0x362e7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_362e80:
    // 0x362e80: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x362e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_362e84:
    // 0x362e84: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x362e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_362e88:
    // 0x362e88: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x362e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_362e8c:
    // 0x362e8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x362e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_362e90:
    // 0x362e90: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x362e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_362e94:
    // 0x362e94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_362e98:
    if (ctx->pc == 0x362E98u) {
        ctx->pc = 0x362E98u;
            // 0x362e98: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x362E9Cu;
        goto label_362e9c;
    }
    ctx->pc = 0x362E94u;
    {
        const bool branch_taken_0x362e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362E94u;
            // 0x362e98: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e94) {
            ctx->pc = 0x362ED0u;
            goto label_362ed0;
        }
    }
    ctx->pc = 0x362E9Cu;
label_362e9c:
    // 0x362e9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_362ea0:
    // 0x362ea0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x362ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_362ea4:
    // 0x362ea4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x362ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_362ea8:
    // 0x362ea8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x362ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_362eac:
    // 0x362eac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_362eb0:
    if (ctx->pc == 0x362EB0u) {
        ctx->pc = 0x362EB4u;
        goto label_362eb4;
    }
    ctx->pc = 0x362EACu;
    {
        const bool branch_taken_0x362eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362eac) {
            ctx->pc = 0x362ED0u;
            goto label_362ed0;
        }
    }
    ctx->pc = 0x362EB4u;
label_362eb4:
    // 0x362eb4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_362eb8:
    if (ctx->pc == 0x362EB8u) {
        ctx->pc = 0x362EB8u;
            // 0x362eb8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x362EBCu;
        goto label_362ebc;
    }
    ctx->pc = 0x362EB4u;
    {
        const bool branch_taken_0x362eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362eb4) {
            ctx->pc = 0x362EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362EB4u;
            // 0x362eb8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362ED0u;
            goto label_362ed0;
        }
    }
    ctx->pc = 0x362EBCu;
label_362ebc:
    // 0x362ebc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x362ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_362ec0:
    // 0x362ec0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x362ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_362ec4:
    // 0x362ec4: 0x320f809  jalr        $t9
label_362ec8:
    if (ctx->pc == 0x362EC8u) {
        ctx->pc = 0x362EC8u;
            // 0x362ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x362ECCu;
        goto label_362ecc;
    }
    ctx->pc = 0x362EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x362ECCu);
        ctx->pc = 0x362EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362EC4u;
            // 0x362ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x362ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x362ECCu; }
            if (ctx->pc != 0x362ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x362ECCu;
label_362ecc:
    // 0x362ecc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x362eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_362ed0:
    // 0x362ed0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_362ed4:
    if (ctx->pc == 0x362ED4u) {
        ctx->pc = 0x362ED8u;
        goto label_362ed8;
    }
    ctx->pc = 0x362ED0u;
    {
        const bool branch_taken_0x362ed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x362ed0) {
            ctx->pc = 0x362EF4u;
            goto label_362ef4;
        }
    }
    ctx->pc = 0x362ED8u;
label_362ed8:
    // 0x362ed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_362edc:
    // 0x362edc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x362edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_362ee0:
    // 0x362ee0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_362ee4:
    if (ctx->pc == 0x362EE4u) {
        ctx->pc = 0x362EE4u;
            // 0x362ee4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x362EE8u;
        goto label_362ee8;
    }
    ctx->pc = 0x362EE0u;
    {
        const bool branch_taken_0x362ee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x362EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362EE0u;
            // 0x362ee4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ee0) {
            ctx->pc = 0x362EF4u;
            goto label_362ef4;
        }
    }
    ctx->pc = 0x362EE8u;
label_362ee8:
    // 0x362ee8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_362eec:
    // 0x362eec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x362eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_362ef0:
    // 0x362ef0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x362ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_362ef4:
    // 0x362ef4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x362ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_362ef8:
    // 0x362ef8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x362ef8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_362efc:
    // 0x362efc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_362f00:
    if (ctx->pc == 0x362F00u) {
        ctx->pc = 0x362F00u;
            // 0x362f00: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362F04u;
        goto label_362f04;
    }
    ctx->pc = 0x362EFCu;
    {
        const bool branch_taken_0x362efc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x362efc) {
            ctx->pc = 0x362F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362EFCu;
            // 0x362f00: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362F10u;
            goto label_362f10;
        }
    }
    ctx->pc = 0x362F04u;
label_362f04:
    // 0x362f04: 0xc0400a8  jal         func_1002A0
label_362f08:
    if (ctx->pc == 0x362F08u) {
        ctx->pc = 0x362F08u;
            // 0x362f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362F0Cu;
        goto label_362f0c;
    }
    ctx->pc = 0x362F04u;
    SET_GPR_U32(ctx, 31, 0x362F0Cu);
    ctx->pc = 0x362F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362F04u;
            // 0x362f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362F0Cu; }
        if (ctx->pc != 0x362F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362F0Cu; }
        if (ctx->pc != 0x362F0Cu) { return; }
    }
    ctx->pc = 0x362F0Cu;
label_362f0c:
    // 0x362f0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x362f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_362f10:
    // 0x362f10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x362f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_362f14:
    // 0x362f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x362f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_362f18:
    // 0x362f18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_362f1c:
    // 0x362f1c: 0x3e00008  jr          $ra
label_362f20:
    if (ctx->pc == 0x362F20u) {
        ctx->pc = 0x362F20u;
            // 0x362f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x362F24u;
        goto label_362f24;
    }
    ctx->pc = 0x362F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362F1Cu;
            // 0x362f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x362F24u;
label_362f24:
    // 0x362f24: 0x0  nop
    ctx->pc = 0x362f24u;
    // NOP
label_362f28:
    // 0x362f28: 0x0  nop
    ctx->pc = 0x362f28u;
    // NOP
label_362f2c:
    // 0x362f2c: 0x0  nop
    ctx->pc = 0x362f2cu;
    // NOP
}
