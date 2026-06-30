#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00524DB0
// Address: 0x524db0 - 0x525050
void sub_00524DB0_0x524db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00524DB0_0x524db0");
#endif

    switch (ctx->pc) {
        case 0x524db0u: goto label_524db0;
        case 0x524db4u: goto label_524db4;
        case 0x524db8u: goto label_524db8;
        case 0x524dbcu: goto label_524dbc;
        case 0x524dc0u: goto label_524dc0;
        case 0x524dc4u: goto label_524dc4;
        case 0x524dc8u: goto label_524dc8;
        case 0x524dccu: goto label_524dcc;
        case 0x524dd0u: goto label_524dd0;
        case 0x524dd4u: goto label_524dd4;
        case 0x524dd8u: goto label_524dd8;
        case 0x524ddcu: goto label_524ddc;
        case 0x524de0u: goto label_524de0;
        case 0x524de4u: goto label_524de4;
        case 0x524de8u: goto label_524de8;
        case 0x524decu: goto label_524dec;
        case 0x524df0u: goto label_524df0;
        case 0x524df4u: goto label_524df4;
        case 0x524df8u: goto label_524df8;
        case 0x524dfcu: goto label_524dfc;
        case 0x524e00u: goto label_524e00;
        case 0x524e04u: goto label_524e04;
        case 0x524e08u: goto label_524e08;
        case 0x524e0cu: goto label_524e0c;
        case 0x524e10u: goto label_524e10;
        case 0x524e14u: goto label_524e14;
        case 0x524e18u: goto label_524e18;
        case 0x524e1cu: goto label_524e1c;
        case 0x524e20u: goto label_524e20;
        case 0x524e24u: goto label_524e24;
        case 0x524e28u: goto label_524e28;
        case 0x524e2cu: goto label_524e2c;
        case 0x524e30u: goto label_524e30;
        case 0x524e34u: goto label_524e34;
        case 0x524e38u: goto label_524e38;
        case 0x524e3cu: goto label_524e3c;
        case 0x524e40u: goto label_524e40;
        case 0x524e44u: goto label_524e44;
        case 0x524e48u: goto label_524e48;
        case 0x524e4cu: goto label_524e4c;
        case 0x524e50u: goto label_524e50;
        case 0x524e54u: goto label_524e54;
        case 0x524e58u: goto label_524e58;
        case 0x524e5cu: goto label_524e5c;
        case 0x524e60u: goto label_524e60;
        case 0x524e64u: goto label_524e64;
        case 0x524e68u: goto label_524e68;
        case 0x524e6cu: goto label_524e6c;
        case 0x524e70u: goto label_524e70;
        case 0x524e74u: goto label_524e74;
        case 0x524e78u: goto label_524e78;
        case 0x524e7cu: goto label_524e7c;
        case 0x524e80u: goto label_524e80;
        case 0x524e84u: goto label_524e84;
        case 0x524e88u: goto label_524e88;
        case 0x524e8cu: goto label_524e8c;
        case 0x524e90u: goto label_524e90;
        case 0x524e94u: goto label_524e94;
        case 0x524e98u: goto label_524e98;
        case 0x524e9cu: goto label_524e9c;
        case 0x524ea0u: goto label_524ea0;
        case 0x524ea4u: goto label_524ea4;
        case 0x524ea8u: goto label_524ea8;
        case 0x524eacu: goto label_524eac;
        case 0x524eb0u: goto label_524eb0;
        case 0x524eb4u: goto label_524eb4;
        case 0x524eb8u: goto label_524eb8;
        case 0x524ebcu: goto label_524ebc;
        case 0x524ec0u: goto label_524ec0;
        case 0x524ec4u: goto label_524ec4;
        case 0x524ec8u: goto label_524ec8;
        case 0x524eccu: goto label_524ecc;
        case 0x524ed0u: goto label_524ed0;
        case 0x524ed4u: goto label_524ed4;
        case 0x524ed8u: goto label_524ed8;
        case 0x524edcu: goto label_524edc;
        case 0x524ee0u: goto label_524ee0;
        case 0x524ee4u: goto label_524ee4;
        case 0x524ee8u: goto label_524ee8;
        case 0x524eecu: goto label_524eec;
        case 0x524ef0u: goto label_524ef0;
        case 0x524ef4u: goto label_524ef4;
        case 0x524ef8u: goto label_524ef8;
        case 0x524efcu: goto label_524efc;
        case 0x524f00u: goto label_524f00;
        case 0x524f04u: goto label_524f04;
        case 0x524f08u: goto label_524f08;
        case 0x524f0cu: goto label_524f0c;
        case 0x524f10u: goto label_524f10;
        case 0x524f14u: goto label_524f14;
        case 0x524f18u: goto label_524f18;
        case 0x524f1cu: goto label_524f1c;
        case 0x524f20u: goto label_524f20;
        case 0x524f24u: goto label_524f24;
        case 0x524f28u: goto label_524f28;
        case 0x524f2cu: goto label_524f2c;
        case 0x524f30u: goto label_524f30;
        case 0x524f34u: goto label_524f34;
        case 0x524f38u: goto label_524f38;
        case 0x524f3cu: goto label_524f3c;
        case 0x524f40u: goto label_524f40;
        case 0x524f44u: goto label_524f44;
        case 0x524f48u: goto label_524f48;
        case 0x524f4cu: goto label_524f4c;
        case 0x524f50u: goto label_524f50;
        case 0x524f54u: goto label_524f54;
        case 0x524f58u: goto label_524f58;
        case 0x524f5cu: goto label_524f5c;
        case 0x524f60u: goto label_524f60;
        case 0x524f64u: goto label_524f64;
        case 0x524f68u: goto label_524f68;
        case 0x524f6cu: goto label_524f6c;
        case 0x524f70u: goto label_524f70;
        case 0x524f74u: goto label_524f74;
        case 0x524f78u: goto label_524f78;
        case 0x524f7cu: goto label_524f7c;
        case 0x524f80u: goto label_524f80;
        case 0x524f84u: goto label_524f84;
        case 0x524f88u: goto label_524f88;
        case 0x524f8cu: goto label_524f8c;
        case 0x524f90u: goto label_524f90;
        case 0x524f94u: goto label_524f94;
        case 0x524f98u: goto label_524f98;
        case 0x524f9cu: goto label_524f9c;
        case 0x524fa0u: goto label_524fa0;
        case 0x524fa4u: goto label_524fa4;
        case 0x524fa8u: goto label_524fa8;
        case 0x524facu: goto label_524fac;
        case 0x524fb0u: goto label_524fb0;
        case 0x524fb4u: goto label_524fb4;
        case 0x524fb8u: goto label_524fb8;
        case 0x524fbcu: goto label_524fbc;
        case 0x524fc0u: goto label_524fc0;
        case 0x524fc4u: goto label_524fc4;
        case 0x524fc8u: goto label_524fc8;
        case 0x524fccu: goto label_524fcc;
        case 0x524fd0u: goto label_524fd0;
        case 0x524fd4u: goto label_524fd4;
        case 0x524fd8u: goto label_524fd8;
        case 0x524fdcu: goto label_524fdc;
        case 0x524fe0u: goto label_524fe0;
        case 0x524fe4u: goto label_524fe4;
        case 0x524fe8u: goto label_524fe8;
        case 0x524fecu: goto label_524fec;
        case 0x524ff0u: goto label_524ff0;
        case 0x524ff4u: goto label_524ff4;
        case 0x524ff8u: goto label_524ff8;
        case 0x524ffcu: goto label_524ffc;
        case 0x525000u: goto label_525000;
        case 0x525004u: goto label_525004;
        case 0x525008u: goto label_525008;
        case 0x52500cu: goto label_52500c;
        case 0x525010u: goto label_525010;
        case 0x525014u: goto label_525014;
        case 0x525018u: goto label_525018;
        case 0x52501cu: goto label_52501c;
        case 0x525020u: goto label_525020;
        case 0x525024u: goto label_525024;
        case 0x525028u: goto label_525028;
        case 0x52502cu: goto label_52502c;
        case 0x525030u: goto label_525030;
        case 0x525034u: goto label_525034;
        case 0x525038u: goto label_525038;
        case 0x52503cu: goto label_52503c;
        case 0x525040u: goto label_525040;
        case 0x525044u: goto label_525044;
        case 0x525048u: goto label_525048;
        case 0x52504cu: goto label_52504c;
        default: break;
    }

    ctx->pc = 0x524db0u;

label_524db0:
    // 0x524db0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x524db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_524db4:
    // 0x524db4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x524db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_524db8:
    // 0x524db8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x524db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_524dbc:
    // 0x524dbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x524dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_524dc0:
    // 0x524dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x524dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_524dc4:
    // 0x524dc4: 0xc14930c  jal         func_524C30
label_524dc8:
    if (ctx->pc == 0x524DC8u) {
        ctx->pc = 0x524DC8u;
            // 0x524dc8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x524DCCu;
        goto label_524dcc;
    }
    ctx->pc = 0x524DC4u;
    SET_GPR_U32(ctx, 31, 0x524DCCu);
    ctx->pc = 0x524DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524DC4u;
            // 0x524dc8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x524C30u;
    if (runtime->hasFunction(0x524C30u)) {
        auto targetFn = runtime->lookupFunction(0x524C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524DCCu; }
        if (ctx->pc != 0x524DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00524C30_0x524c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524DCCu; }
        if (ctx->pc != 0x524DCCu) { return; }
    }
    ctx->pc = 0x524DCCu;
label_524dcc:
    // 0x524dcc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x524dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_524dd0:
    // 0x524dd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_524dd4:
    // 0x524dd4: 0xae2300d8  sw          $v1, 0xD8($s1)
    ctx->pc = 0x524dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 3));
label_524dd8:
    // 0x524dd8: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x524dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_524ddc:
    // 0x524ddc: 0xc149538  jal         func_5254E0
label_524de0:
    if (ctx->pc == 0x524DE0u) {
        ctx->pc = 0x524DE0u;
            // 0x524de0: 0x8c440cc0  lw          $a0, 0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
        ctx->pc = 0x524DE4u;
        goto label_524de4;
    }
    ctx->pc = 0x524DDCu;
    SET_GPR_U32(ctx, 31, 0x524DE4u);
    ctx->pc = 0x524DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524DDCu;
            // 0x524de0: 0x8c440cc0  lw          $a0, 0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5254E0u;
    if (runtime->hasFunction(0x5254E0u)) {
        auto targetFn = runtime->lookupFunction(0x5254E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524DE4u; }
        if (ctx->pc != 0x524DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005254E0_0x5254e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524DE4u; }
        if (ctx->pc != 0x524DE4u) { return; }
    }
    ctx->pc = 0x524DE4u;
label_524de4:
    // 0x524de4: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x524de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_524de8:
    // 0x524de8: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
label_524dec:
    if (ctx->pc == 0x524DECu) {
        ctx->pc = 0x524DECu;
            // 0x524dec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x524DF0u;
        goto label_524df0;
    }
    ctx->pc = 0x524DE8u;
    {
        const bool branch_taken_0x524de8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x524de8) {
            ctx->pc = 0x524DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524DE8u;
            // 0x524dec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x524E0Cu;
            goto label_524e0c;
        }
    }
    ctx->pc = 0x524DF0u;
label_524df0:
    // 0x524df0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_524df4:
    // 0x524df4: 0xc149628  jal         func_5258A0
label_524df8:
    if (ctx->pc == 0x524DF8u) {
        ctx->pc = 0x524DF8u;
            // 0x524df8: 0x8c440cc0  lw          $a0, 0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
        ctx->pc = 0x524DFCu;
        goto label_524dfc;
    }
    ctx->pc = 0x524DF4u;
    SET_GPR_U32(ctx, 31, 0x524DFCu);
    ctx->pc = 0x524DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524DF4u;
            // 0x524df8: 0x8c440cc0  lw          $a0, 0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5258A0u;
    if (runtime->hasFunction(0x5258A0u)) {
        auto targetFn = runtime->lookupFunction(0x5258A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524DFCu; }
        if (ctx->pc != 0x524DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005258A0_0x5258a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524DFCu; }
        if (ctx->pc != 0x524DFCu) { return; }
    }
    ctx->pc = 0x524DFCu;
label_524dfc:
    // 0x524dfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x524dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_524e00:
    // 0x524e00: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
label_524e04:
    if (ctx->pc == 0x524E04u) {
        ctx->pc = 0x524E04u;
            // 0x524e04: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x524E08u;
        goto label_524e08;
    }
    ctx->pc = 0x524E00u;
    {
        const bool branch_taken_0x524e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x524e00) {
            ctx->pc = 0x524E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x524E00u;
            // 0x524e04: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x524FC4u;
            goto label_524fc4;
        }
    }
    ctx->pc = 0x524E08u;
label_524e08:
    // 0x524e08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x524e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_524e0c:
    // 0x524e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x524e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_524e10:
    // 0x524e10: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x524e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_524e14:
    // 0x524e14: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x524e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_524e18:
    // 0x524e18: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x524e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_524e1c:
    // 0x524e1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_524e20:
    // 0x524e20: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x524e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_524e24:
    // 0x524e24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x524e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_524e28:
    // 0x524e28: 0x8c420cc0  lw          $v0, 0xCC0($v0)
    ctx->pc = 0x524e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
label_524e2c:
    // 0x524e2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x524e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_524e30:
    // 0x524e30: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x524e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_524e34:
    // 0x524e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x524e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_524e38:
    // 0x524e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x524e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_524e3c:
    // 0x524e3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x524e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_524e40:
    // 0x524e40: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x524e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
label_524e44:
    // 0x524e44: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x524e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_524e48:
    // 0x524e48: 0xc08914c  jal         func_224530
label_524e4c:
    if (ctx->pc == 0x524E4Cu) {
        ctx->pc = 0x524E4Cu;
            // 0x524e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524E50u;
        goto label_524e50;
    }
    ctx->pc = 0x524E48u;
    SET_GPR_U32(ctx, 31, 0x524E50u);
    ctx->pc = 0x524E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524E48u;
            // 0x524e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524E50u; }
        if (ctx->pc != 0x524E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524E50u; }
        if (ctx->pc != 0x524E50u) { return; }
    }
    ctx->pc = 0x524E50u;
label_524e50:
    // 0x524e50: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x524e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_524e54:
    // 0x524e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x524e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_524e58:
    // 0x524e58: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x524e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524e5c:
    // 0x524e5c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x524e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_524e60:
    // 0x524e60: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x524e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524e64:
    // 0x524e64: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x524e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_524e68:
    // 0x524e68: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x524e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_524e6c:
    // 0x524e6c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x524e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_524e70:
    // 0x524e70: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x524e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_524e74:
    // 0x524e74: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x524e74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_524e78:
    // 0x524e78: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x524e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_524e7c:
    // 0x524e7c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x524e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_524e80:
    // 0x524e80: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x524e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524e84:
    // 0x524e84: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x524e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524e88:
    // 0x524e88: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x524e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_524e8c:
    // 0x524e8c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x524e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_524e90:
    // 0x524e90: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x524e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_524e94:
    // 0x524e94: 0xc0892b0  jal         func_224AC0
label_524e98:
    if (ctx->pc == 0x524E98u) {
        ctx->pc = 0x524E98u;
            // 0x524e98: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x524E9Cu;
        goto label_524e9c;
    }
    ctx->pc = 0x524E94u;
    SET_GPR_U32(ctx, 31, 0x524E9Cu);
    ctx->pc = 0x524E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524E94u;
            // 0x524e98: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524E9Cu; }
        if (ctx->pc != 0x524E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524E9Cu; }
        if (ctx->pc != 0x524E9Cu) { return; }
    }
    ctx->pc = 0x524E9Cu;
label_524e9c:
    // 0x524e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x524e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_524ea0:
    // 0x524ea0: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x524ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_524ea4:
    // 0x524ea4: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x524ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_524ea8:
    // 0x524ea8: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x524ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_524eac:
    // 0x524eac: 0xc088b74  jal         func_222DD0
label_524eb0:
    if (ctx->pc == 0x524EB0u) {
        ctx->pc = 0x524EB0u;
            // 0x524eb0: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->pc = 0x524EB4u;
        goto label_524eb4;
    }
    ctx->pc = 0x524EACu;
    SET_GPR_U32(ctx, 31, 0x524EB4u);
    ctx->pc = 0x524EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524EACu;
            // 0x524eb0: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524EB4u; }
        if (ctx->pc != 0x524EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524EB4u; }
        if (ctx->pc != 0x524EB4u) { return; }
    }
    ctx->pc = 0x524EB4u;
label_524eb4:
    // 0x524eb4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x524eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_524eb8:
    // 0x524eb8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x524eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_524ebc:
    // 0x524ebc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x524ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_524ec0:
    // 0x524ec0: 0x320f809  jalr        $t9
label_524ec4:
    if (ctx->pc == 0x524EC4u) {
        ctx->pc = 0x524EC4u;
            // 0x524ec4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x524EC8u;
        goto label_524ec8;
    }
    ctx->pc = 0x524EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524EC8u);
        ctx->pc = 0x524EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524EC0u;
            // 0x524ec4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x524EC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524EC8u; }
            if (ctx->pc != 0x524EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x524EC8u;
label_524ec8:
    // 0x524ec8: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x524ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_524ecc:
    // 0x524ecc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x524eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_524ed0:
    // 0x524ed0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x524ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_524ed4:
    // 0x524ed4: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x524ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_524ed8:
    // 0x524ed8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x524ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_524edc:
    // 0x524edc: 0xc04cbd8  jal         func_132F60
label_524ee0:
    if (ctx->pc == 0x524EE0u) {
        ctx->pc = 0x524EE0u;
            // 0x524ee0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x524EE4u;
        goto label_524ee4;
    }
    ctx->pc = 0x524EDCu;
    SET_GPR_U32(ctx, 31, 0x524EE4u);
    ctx->pc = 0x524EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524EDCu;
            // 0x524ee0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524EE4u; }
        if (ctx->pc != 0x524EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524EE4u; }
        if (ctx->pc != 0x524EE4u) { return; }
    }
    ctx->pc = 0x524EE4u;
label_524ee4:
    // 0x524ee4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x524ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_524ee8:
    // 0x524ee8: 0xc04f278  jal         func_13C9E0
label_524eec:
    if (ctx->pc == 0x524EECu) {
        ctx->pc = 0x524EECu;
            // 0x524eec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x524EF0u;
        goto label_524ef0;
    }
    ctx->pc = 0x524EE8u;
    SET_GPR_U32(ctx, 31, 0x524EF0u);
    ctx->pc = 0x524EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524EE8u;
            // 0x524eec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524EF0u; }
        if (ctx->pc != 0x524EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524EF0u; }
        if (ctx->pc != 0x524EF0u) { return; }
    }
    ctx->pc = 0x524EF0u;
label_524ef0:
    // 0x524ef0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x524ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_524ef4:
    // 0x524ef4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x524ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_524ef8:
    // 0x524ef8: 0xc04cca0  jal         func_133280
label_524efc:
    if (ctx->pc == 0x524EFCu) {
        ctx->pc = 0x524EFCu;
            // 0x524efc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x524F00u;
        goto label_524f00;
    }
    ctx->pc = 0x524EF8u;
    SET_GPR_U32(ctx, 31, 0x524F00u);
    ctx->pc = 0x524EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524EF8u;
            // 0x524efc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524F00u; }
        if (ctx->pc != 0x524F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524F00u; }
        if (ctx->pc != 0x524F00u) { return; }
    }
    ctx->pc = 0x524F00u;
label_524f00:
    // 0x524f00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x524f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524f04:
    // 0x524f04: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x524f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_524f08:
    // 0x524f08: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x524f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_524f0c:
    // 0x524f0c: 0x8c51e3e0  lw          $s1, -0x1C20($v0)
    ctx->pc = 0x524f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_524f10:
    // 0x524f10: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x524f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524f14:
    // 0x524f14: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x524f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524f18:
    // 0x524f18: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x524f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_524f1c:
    // 0x524f1c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x524f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_524f20:
    // 0x524f20: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x524f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_524f24:
    // 0x524f24: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x524f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_524f28:
    // 0x524f28: 0xc089638  jal         func_2258E0
label_524f2c:
    if (ctx->pc == 0x524F2Cu) {
        ctx->pc = 0x524F2Cu;
            // 0x524f2c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x524F30u;
        goto label_524f30;
    }
    ctx->pc = 0x524F28u;
    SET_GPR_U32(ctx, 31, 0x524F30u);
    ctx->pc = 0x524F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524F28u;
            // 0x524f2c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524F30u; }
        if (ctx->pc != 0x524F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524F30u; }
        if (ctx->pc != 0x524F30u) { return; }
    }
    ctx->pc = 0x524F30u;
label_524f30:
    // 0x524f30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x524f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_524f34:
    // 0x524f34: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x524f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_524f38:
    // 0x524f38: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x524f38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_524f3c:
    // 0x524f3c: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x524f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_524f40:
    // 0x524f40: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x524f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_524f44:
    // 0x524f44: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x524f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_524f48:
    // 0x524f48: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x524f48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_524f4c:
    // 0x524f4c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x524f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_524f50:
    // 0x524f50: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x524f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_524f54:
    // 0x524f54: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x524f54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_524f58:
    // 0x524f58: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x524f58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_524f5c:
    // 0x524f5c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x524f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_524f60:
    // 0x524f60: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x524f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_524f64:
    // 0x524f64: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x524f64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_524f68:
    // 0x524f68: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x524f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_524f6c:
    // 0x524f6c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x524f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_524f70:
    // 0x524f70: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x524f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_524f74:
    // 0x524f74: 0xc6340018  lwc1        $f20, 0x18($s1)
    ctx->pc = 0x524f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_524f78:
    // 0x524f78: 0xc088b74  jal         func_222DD0
label_524f7c:
    if (ctx->pc == 0x524F7Cu) {
        ctx->pc = 0x524F7Cu;
            // 0x524f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524F80u;
        goto label_524f80;
    }
    ctx->pc = 0x524F78u;
    SET_GPR_U32(ctx, 31, 0x524F80u);
    ctx->pc = 0x524F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524F78u;
            // 0x524f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524F80u; }
        if (ctx->pc != 0x524F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524F80u; }
        if (ctx->pc != 0x524F80u) { return; }
    }
    ctx->pc = 0x524F80u;
label_524f80:
    // 0x524f80: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x524f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_524f84:
    // 0x524f84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x524f84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_524f88:
    // 0x524f88: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x524f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_524f8c:
    // 0x524f8c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x524f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_524f90:
    // 0x524f90: 0x320f809  jalr        $t9
label_524f94:
    if (ctx->pc == 0x524F94u) {
        ctx->pc = 0x524F94u;
            // 0x524f94: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x524F98u;
        goto label_524f98;
    }
    ctx->pc = 0x524F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x524F98u);
        ctx->pc = 0x524F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524F90u;
            // 0x524f94: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x524F98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x524F98u; }
            if (ctx->pc != 0x524F98u) { return; }
        }
        }
    }
    ctx->pc = 0x524F98u;
label_524f98:
    // 0x524f98: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x524f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_524f9c:
    // 0x524f9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x524f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_524fa0:
    // 0x524fa0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x524fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_524fa4:
    // 0x524fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x524fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_524fa8:
    // 0x524fa8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x524fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_524fac:
    // 0x524fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x524facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_524fb0:
    // 0x524fb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x524fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_524fb4:
    // 0x524fb4: 0xc08bff0  jal         func_22FFC0
label_524fb8:
    if (ctx->pc == 0x524FB8u) {
        ctx->pc = 0x524FB8u;
            // 0x524fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x524FBCu;
        goto label_524fbc;
    }
    ctx->pc = 0x524FB4u;
    SET_GPR_U32(ctx, 31, 0x524FBCu);
    ctx->pc = 0x524FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524FB4u;
            // 0x524fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524FBCu; }
        if (ctx->pc != 0x524FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524FBCu; }
        if (ctx->pc != 0x524FBCu) { return; }
    }
    ctx->pc = 0x524FBCu;
label_524fbc:
    // 0x524fbc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_524fc0:
    if (ctx->pc == 0x524FC0u) {
        ctx->pc = 0x524FC0u;
            // 0x524fc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x524FC4u;
        goto label_524fc4;
    }
    ctx->pc = 0x524FBCu;
    {
        const bool branch_taken_0x524fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x524FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x524FBCu;
            // 0x524fc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x524fbc) {
            ctx->pc = 0x525038u;
            goto label_525038;
        }
    }
    ctx->pc = 0x524FC4u;
label_524fc4:
    // 0x524fc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x524fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_524fc8:
    // 0x524fc8: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x524fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
label_524fcc:
    // 0x524fcc: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x524fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_524fd0:
    // 0x524fd0: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x524fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_524fd4:
    // 0x524fd4: 0xc1495e4  jal         func_525790
label_524fd8:
    if (ctx->pc == 0x524FD8u) {
        ctx->pc = 0x524FD8u;
            // 0x524fd8: 0x8c440cc0  lw          $a0, 0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
        ctx->pc = 0x524FDCu;
        goto label_524fdc;
    }
    ctx->pc = 0x524FD4u;
    SET_GPR_U32(ctx, 31, 0x524FDCu);
    ctx->pc = 0x524FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x524FD4u;
            // 0x524fd8: 0x8c440cc0  lw          $a0, 0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x525790u;
    if (runtime->hasFunction(0x525790u)) {
        auto targetFn = runtime->lookupFunction(0x525790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524FDCu; }
        if (ctx->pc != 0x524FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00525790_0x525790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x524FDCu; }
        if (ctx->pc != 0x524FDCu) { return; }
    }
    ctx->pc = 0x524FDCu;
label_524fdc:
    // 0x524fdc: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x524fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_524fe0:
    // 0x524fe0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x524fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_524fe4:
    // 0x524fe4: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x524fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_524fe8:
    // 0x524fe8: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x524fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_524fec:
    // 0x524fec: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x524fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_524ff0:
    // 0x524ff0: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x524ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_524ff4:
    // 0x524ff4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x524ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_524ff8:
    // 0x524ff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x524ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_524ffc:
    // 0x524ffc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x524ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_525000:
    // 0x525000: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x525000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_525004:
    // 0x525004: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x525004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_525008:
    // 0x525008: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x525008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52500c:
    // 0x52500c: 0x246402c0  addiu       $a0, $v1, 0x2C0
    ctx->pc = 0x52500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
label_525010:
    // 0x525010: 0xc04cc1c  jal         func_133070
label_525014:
    if (ctx->pc == 0x525014u) {
        ctx->pc = 0x525014u;
            // 0x525014: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x525018u;
        goto label_525018;
    }
    ctx->pc = 0x525010u;
    SET_GPR_U32(ctx, 31, 0x525018u);
    ctx->pc = 0x525014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525010u;
            // 0x525014: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525018u; }
        if (ctx->pc != 0x525018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525018u; }
        if (ctx->pc != 0x525018u) { return; }
    }
    ctx->pc = 0x525018u;
label_525018:
    // 0x525018: 0x3c033f6d  lui         $v1, 0x3F6D
    ctx->pc = 0x525018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16237 << 16));
label_52501c:
    // 0x52501c: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x52501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_525020:
    // 0x525020: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x525020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_525024:
    // 0x525024: 0x0  nop
    ctx->pc = 0x525024u;
    // NOP
label_525028:
    // 0x525028: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x525028u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_52502c:
    // 0x52502c: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x52502cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_525030:
    // 0x525030: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x525030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_525034:
    // 0x525034: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x525034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_525038:
    // 0x525038: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x525038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52503c:
    // 0x52503c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x52503cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_525040:
    // 0x525040: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x525040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_525044:
    // 0x525044: 0x3e00008  jr          $ra
label_525048:
    if (ctx->pc == 0x525048u) {
        ctx->pc = 0x525048u;
            // 0x525048: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x52504Cu;
        goto label_52504c;
    }
    ctx->pc = 0x525044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525044u;
            // 0x525048: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52504Cu;
label_52504c:
    // 0x52504c: 0x0  nop
    ctx->pc = 0x52504cu;
    // NOP
}
