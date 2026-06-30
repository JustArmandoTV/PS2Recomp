#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5E50
// Address: 0x1d5e50 - 0x1d6050
void sub_001D5E50_0x1d5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5E50_0x1d5e50");
#endif

    switch (ctx->pc) {
        case 0x1d5e50u: goto label_1d5e50;
        case 0x1d5e54u: goto label_1d5e54;
        case 0x1d5e58u: goto label_1d5e58;
        case 0x1d5e5cu: goto label_1d5e5c;
        case 0x1d5e60u: goto label_1d5e60;
        case 0x1d5e64u: goto label_1d5e64;
        case 0x1d5e68u: goto label_1d5e68;
        case 0x1d5e6cu: goto label_1d5e6c;
        case 0x1d5e70u: goto label_1d5e70;
        case 0x1d5e74u: goto label_1d5e74;
        case 0x1d5e78u: goto label_1d5e78;
        case 0x1d5e7cu: goto label_1d5e7c;
        case 0x1d5e80u: goto label_1d5e80;
        case 0x1d5e84u: goto label_1d5e84;
        case 0x1d5e88u: goto label_1d5e88;
        case 0x1d5e8cu: goto label_1d5e8c;
        case 0x1d5e90u: goto label_1d5e90;
        case 0x1d5e94u: goto label_1d5e94;
        case 0x1d5e98u: goto label_1d5e98;
        case 0x1d5e9cu: goto label_1d5e9c;
        case 0x1d5ea0u: goto label_1d5ea0;
        case 0x1d5ea4u: goto label_1d5ea4;
        case 0x1d5ea8u: goto label_1d5ea8;
        case 0x1d5eacu: goto label_1d5eac;
        case 0x1d5eb0u: goto label_1d5eb0;
        case 0x1d5eb4u: goto label_1d5eb4;
        case 0x1d5eb8u: goto label_1d5eb8;
        case 0x1d5ebcu: goto label_1d5ebc;
        case 0x1d5ec0u: goto label_1d5ec0;
        case 0x1d5ec4u: goto label_1d5ec4;
        case 0x1d5ec8u: goto label_1d5ec8;
        case 0x1d5eccu: goto label_1d5ecc;
        case 0x1d5ed0u: goto label_1d5ed0;
        case 0x1d5ed4u: goto label_1d5ed4;
        case 0x1d5ed8u: goto label_1d5ed8;
        case 0x1d5edcu: goto label_1d5edc;
        case 0x1d5ee0u: goto label_1d5ee0;
        case 0x1d5ee4u: goto label_1d5ee4;
        case 0x1d5ee8u: goto label_1d5ee8;
        case 0x1d5eecu: goto label_1d5eec;
        case 0x1d5ef0u: goto label_1d5ef0;
        case 0x1d5ef4u: goto label_1d5ef4;
        case 0x1d5ef8u: goto label_1d5ef8;
        case 0x1d5efcu: goto label_1d5efc;
        case 0x1d5f00u: goto label_1d5f00;
        case 0x1d5f04u: goto label_1d5f04;
        case 0x1d5f08u: goto label_1d5f08;
        case 0x1d5f0cu: goto label_1d5f0c;
        case 0x1d5f10u: goto label_1d5f10;
        case 0x1d5f14u: goto label_1d5f14;
        case 0x1d5f18u: goto label_1d5f18;
        case 0x1d5f1cu: goto label_1d5f1c;
        case 0x1d5f20u: goto label_1d5f20;
        case 0x1d5f24u: goto label_1d5f24;
        case 0x1d5f28u: goto label_1d5f28;
        case 0x1d5f2cu: goto label_1d5f2c;
        case 0x1d5f30u: goto label_1d5f30;
        case 0x1d5f34u: goto label_1d5f34;
        case 0x1d5f38u: goto label_1d5f38;
        case 0x1d5f3cu: goto label_1d5f3c;
        case 0x1d5f40u: goto label_1d5f40;
        case 0x1d5f44u: goto label_1d5f44;
        case 0x1d5f48u: goto label_1d5f48;
        case 0x1d5f4cu: goto label_1d5f4c;
        case 0x1d5f50u: goto label_1d5f50;
        case 0x1d5f54u: goto label_1d5f54;
        case 0x1d5f58u: goto label_1d5f58;
        case 0x1d5f5cu: goto label_1d5f5c;
        case 0x1d5f60u: goto label_1d5f60;
        case 0x1d5f64u: goto label_1d5f64;
        case 0x1d5f68u: goto label_1d5f68;
        case 0x1d5f6cu: goto label_1d5f6c;
        case 0x1d5f70u: goto label_1d5f70;
        case 0x1d5f74u: goto label_1d5f74;
        case 0x1d5f78u: goto label_1d5f78;
        case 0x1d5f7cu: goto label_1d5f7c;
        case 0x1d5f80u: goto label_1d5f80;
        case 0x1d5f84u: goto label_1d5f84;
        case 0x1d5f88u: goto label_1d5f88;
        case 0x1d5f8cu: goto label_1d5f8c;
        case 0x1d5f90u: goto label_1d5f90;
        case 0x1d5f94u: goto label_1d5f94;
        case 0x1d5f98u: goto label_1d5f98;
        case 0x1d5f9cu: goto label_1d5f9c;
        case 0x1d5fa0u: goto label_1d5fa0;
        case 0x1d5fa4u: goto label_1d5fa4;
        case 0x1d5fa8u: goto label_1d5fa8;
        case 0x1d5facu: goto label_1d5fac;
        case 0x1d5fb0u: goto label_1d5fb0;
        case 0x1d5fb4u: goto label_1d5fb4;
        case 0x1d5fb8u: goto label_1d5fb8;
        case 0x1d5fbcu: goto label_1d5fbc;
        case 0x1d5fc0u: goto label_1d5fc0;
        case 0x1d5fc4u: goto label_1d5fc4;
        case 0x1d5fc8u: goto label_1d5fc8;
        case 0x1d5fccu: goto label_1d5fcc;
        case 0x1d5fd0u: goto label_1d5fd0;
        case 0x1d5fd4u: goto label_1d5fd4;
        case 0x1d5fd8u: goto label_1d5fd8;
        case 0x1d5fdcu: goto label_1d5fdc;
        case 0x1d5fe0u: goto label_1d5fe0;
        case 0x1d5fe4u: goto label_1d5fe4;
        case 0x1d5fe8u: goto label_1d5fe8;
        case 0x1d5fecu: goto label_1d5fec;
        case 0x1d5ff0u: goto label_1d5ff0;
        case 0x1d5ff4u: goto label_1d5ff4;
        case 0x1d5ff8u: goto label_1d5ff8;
        case 0x1d5ffcu: goto label_1d5ffc;
        case 0x1d6000u: goto label_1d6000;
        case 0x1d6004u: goto label_1d6004;
        case 0x1d6008u: goto label_1d6008;
        case 0x1d600cu: goto label_1d600c;
        case 0x1d6010u: goto label_1d6010;
        case 0x1d6014u: goto label_1d6014;
        case 0x1d6018u: goto label_1d6018;
        case 0x1d601cu: goto label_1d601c;
        case 0x1d6020u: goto label_1d6020;
        case 0x1d6024u: goto label_1d6024;
        case 0x1d6028u: goto label_1d6028;
        case 0x1d602cu: goto label_1d602c;
        case 0x1d6030u: goto label_1d6030;
        case 0x1d6034u: goto label_1d6034;
        case 0x1d6038u: goto label_1d6038;
        case 0x1d603cu: goto label_1d603c;
        case 0x1d6040u: goto label_1d6040;
        case 0x1d6044u: goto label_1d6044;
        case 0x1d6048u: goto label_1d6048;
        case 0x1d604cu: goto label_1d604c;
        default: break;
    }

    ctx->pc = 0x1d5e50u;

label_1d5e50:
    // 0x1d5e50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1d5e54:
    // 0x1d5e54: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1d5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1d5e58:
    // 0x1d5e58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d5e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1d5e5c:
    // 0x1d5e5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d5e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d5e60:
    // 0x1d5e60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d5e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d5e64:
    // 0x1d5e64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d5e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d5e68:
    // 0x1d5e68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d5e68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e6c:
    // 0x1d5e6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d5e70:
    // 0x1d5e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d5e74:
    // 0x1d5e74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d5e78:
    // 0x1d5e78: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d5e7c:
    // 0x1d5e7c: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_1d5e80:
    // 0x1d5e80: 0x54830060  bnel        $a0, $v1, . + 4 + (0x60 << 2)
label_1d5e84:
    if (ctx->pc == 0x1D5E84u) {
        ctx->pc = 0x1D5E84u;
            // 0x1d5e84: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x1D5E88u;
        goto label_1d5e88;
    }
    ctx->pc = 0x1D5E80u;
    {
        const bool branch_taken_0x1d5e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5e80) {
            ctx->pc = 0x1D5E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E80u;
            // 0x1d5e84: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6004u;
            goto label_1d6004;
        }
    }
    ctx->pc = 0x1D5E88u;
label_1d5e88:
    // 0x1d5e88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d5e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d5e8c:
    // 0x1d5e8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d5e90:
    // 0x1d5e90: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_1d5e94:
    // 0x1d5e94: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x1d5e94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_1d5e98:
    // 0x1d5e98: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_1d5e9c:
    // 0x1d5e9c: 0x2610fac8  addiu       $s0, $s0, -0x538
    ctx->pc = 0x1d5e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965960));
label_1d5ea0:
    // 0x1d5ea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ea4:
    // 0x1d5ea4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d5ea8:
    // 0x1d5ea8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x1d5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_1d5eac:
    // 0x1d5eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5eb0:
    // 0x1d5eb0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d5eb4:
    // 0x1d5eb4: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x1d5eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_1d5eb8:
    // 0x1d5eb8: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_1d5ebc:
    // 0x1d5ebc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5ec0:
    // 0x1d5ec0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1d5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1d5ec4:
    // 0x1d5ec4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1d5ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1d5ec8:
    // 0x1d5ec8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1d5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1d5ecc:
    // 0x1d5ecc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d5ed0:
    // 0x1d5ed0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5ed4:
    // 0x1d5ed4: 0xc04e4a4  jal         func_139290
label_1d5ed8:
    if (ctx->pc == 0x1D5ED8u) {
        ctx->pc = 0x1D5ED8u;
            // 0x1d5ed8: 0x24550010  addiu       $s5, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x1D5EDCu;
        goto label_1d5edc;
    }
    ctx->pc = 0x1D5ED4u;
    SET_GPR_U32(ctx, 31, 0x1D5EDCu);
    ctx->pc = 0x1D5ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5ED4u;
            // 0x1d5ed8: 0x24550010  addiu       $s5, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EDCu; }
        if (ctx->pc != 0x1D5EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EDCu; }
        if (ctx->pc != 0x1D5EDCu) { return; }
    }
    ctx->pc = 0x1D5EDCu;
label_1d5edc:
    // 0x1d5edc: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x1d5edcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_1d5ee0:
    // 0x1d5ee0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d5ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ee4:
    // 0x1d5ee4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d5ee8:
    // 0x1d5ee8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1d5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1d5eec:
    // 0x1d5eec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d5ef0:
    // 0x1d5ef0: 0xc04cd60  jal         func_133580
label_1d5ef4:
    if (ctx->pc == 0x1D5EF4u) {
        ctx->pc = 0x1D5EF4u;
            // 0x1d5ef4: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x1D5EF8u;
        goto label_1d5ef8;
    }
    ctx->pc = 0x1D5EF0u;
    SET_GPR_U32(ctx, 31, 0x1D5EF8u);
    ctx->pc = 0x1D5EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EF0u;
            // 0x1d5ef4: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EF8u; }
        if (ctx->pc != 0x1D5EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EF8u; }
        if (ctx->pc != 0x1D5EF8u) { return; }
    }
    ctx->pc = 0x1D5EF8u;
label_1d5ef8:
    // 0x1d5ef8: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x1d5ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d5efc:
    // 0x1d5efc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5f00:
    // 0x1d5f00: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d5f04:
    // 0x1d5f04: 0xc054bbc  jal         func_152EF0
label_1d5f08:
    if (ctx->pc == 0x1D5F08u) {
        ctx->pc = 0x1D5F08u;
            // 0x1d5f08: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1D5F0Cu;
        goto label_1d5f0c;
    }
    ctx->pc = 0x1D5F04u;
    SET_GPR_U32(ctx, 31, 0x1D5F0Cu);
    ctx->pc = 0x1D5F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F04u;
            // 0x1d5f08: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F0Cu; }
        if (ctx->pc != 0x1D5F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F0Cu; }
        if (ctx->pc != 0x1D5F0Cu) { return; }
    }
    ctx->pc = 0x1D5F0Cu;
label_1d5f0c:
    // 0x1d5f0c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1d5f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5f10:
    // 0x1d5f10: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x1d5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d5f14:
    // 0x1d5f14: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x1d5f14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_1d5f18:
    // 0x1d5f18: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1d5f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5f1c:
    // 0x1d5f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f20:
    // 0x1d5f20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f24:
    // 0x1d5f24: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1d5f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d5f28:
    // 0x1d5f28: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x1d5f28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_1d5f2c:
    // 0x1d5f2c: 0xc04cff4  jal         func_133FD0
label_1d5f30:
    if (ctx->pc == 0x1D5F30u) {
        ctx->pc = 0x1D5F30u;
            // 0x1d5f30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F34u;
        goto label_1d5f34;
    }
    ctx->pc = 0x1D5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F34u);
    ctx->pc = 0x1D5F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F2Cu;
            // 0x1d5f30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F34u; }
        if (ctx->pc != 0x1D5F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F34u; }
        if (ctx->pc != 0x1D5F34u) { return; }
    }
    ctx->pc = 0x1D5F34u;
label_1d5f34:
    // 0x1d5f34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d5f38:
    // 0x1d5f38: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1d5f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1d5f3c:
    // 0x1d5f3c: 0x8c51e3e8  lw          $s1, -0x1C18($v0)
    ctx->pc = 0x1d5f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_1d5f40:
    // 0x1d5f40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d5f44:
    // 0x1d5f44: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x1d5f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1d5f48:
    // 0x1d5f48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d5f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d5f4c:
    // 0x1d5f4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d5f50:
    // 0x1d5f50: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1d5f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1d5f54:
    // 0x1d5f54: 0xc05182c  jal         func_1460B0
label_1d5f58:
    if (ctx->pc == 0x1D5F58u) {
        ctx->pc = 0x1D5F58u;
            // 0x1d5f58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D5F5Cu;
        goto label_1d5f5c;
    }
    ctx->pc = 0x1D5F54u;
    SET_GPR_U32(ctx, 31, 0x1D5F5Cu);
    ctx->pc = 0x1D5F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F54u;
            // 0x1d5f58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1460B0u;
    if (runtime->hasFunction(0x1460B0u)) {
        auto targetFn = runtime->lookupFunction(0x1460B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F5Cu; }
        if (ctx->pc != 0x1D5F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001460B0_0x1460b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F5Cu; }
        if (ctx->pc != 0x1D5F5Cu) { return; }
    }
    ctx->pc = 0x1D5F5Cu;
label_1d5f5c:
    // 0x1d5f5c: 0x92850010  lbu         $a1, 0x10($s4)
    ctx->pc = 0x1d5f5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
label_1d5f60:
    // 0x1d5f60: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d5f64:
    // 0x1d5f64: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d5f68:
    // 0x1d5f68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1d5f6c:
    // 0x1d5f6c: 0x2484de00  addiu       $a0, $a0, -0x2200
    ctx->pc = 0x1d5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958592));
label_1d5f70:
    // 0x1d5f70: 0x2463de04  addiu       $v1, $v1, -0x21FC
    ctx->pc = 0x1d5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958596));
label_1d5f74:
    // 0x1d5f74: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1d5f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d5f78:
    // 0x1d5f78: 0x2442de08  addiu       $v0, $v0, -0x21F8
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958600));
label_1d5f7c:
    // 0x1d5f7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d5f80:
    // 0x1d5f80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d5f84:
    // 0x1d5f84: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d5f88:
    // 0x1d5f88: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x1d5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d5f8c:
    // 0x1d5f8c: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x1d5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1d5f90:
    // 0x1d5f90: 0xc0517cc  jal         func_145F30
label_1d5f94:
    if (ctx->pc == 0x1D5F94u) {
        ctx->pc = 0x1D5F94u;
            // 0x1d5f94: 0xc48c0000  lwc1        $f12, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D5F98u;
        goto label_1d5f98;
    }
    ctx->pc = 0x1D5F90u;
    SET_GPR_U32(ctx, 31, 0x1D5F98u);
    ctx->pc = 0x1D5F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F90u;
            // 0x1d5f94: 0xc48c0000  lwc1        $f12, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F30u;
    if (runtime->hasFunction(0x145F30u)) {
        auto targetFn = runtime->lookupFunction(0x145F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F98u; }
        if (ctx->pc != 0x1D5F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F30_0x145f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F98u; }
        if (ctx->pc != 0x1D5F98u) { return; }
    }
    ctx->pc = 0x1D5F98u;
label_1d5f98:
    // 0x1d5f98: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d5f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5f9c:
    // 0x1d5f9c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d5f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d5fa0:
    // 0x1d5fa0: 0x320f809  jalr        $t9
label_1d5fa4:
    if (ctx->pc == 0x1D5FA4u) {
        ctx->pc = 0x1D5FA4u;
            // 0x1d5fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FA8u;
        goto label_1d5fa8;
    }
    ctx->pc = 0x1D5FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D5FA8u);
        ctx->pc = 0x1D5FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FA0u;
            // 0x1d5fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5FA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FA8u; }
            if (ctx->pc != 0x1D5FA8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5FA8u;
label_1d5fa8:
    // 0x1d5fa8: 0xc04e738  jal         func_139CE0
label_1d5fac:
    if (ctx->pc == 0x1D5FACu) {
        ctx->pc = 0x1D5FACu;
            // 0x1d5fac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1D5FB0u;
        goto label_1d5fb0;
    }
    ctx->pc = 0x1D5FA8u;
    SET_GPR_U32(ctx, 31, 0x1D5FB0u);
    ctx->pc = 0x1D5FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FA8u;
            // 0x1d5fac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FB0u; }
        if (ctx->pc != 0x1D5FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FB0u; }
        if (ctx->pc != 0x1D5FB0u) { return; }
    }
    ctx->pc = 0x1D5FB0u;
label_1d5fb0:
    // 0x1d5fb0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d5fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d5fb4:
    // 0x1d5fb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d5fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5fb8:
    // 0x1d5fb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d5fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5fbc:
    // 0x1d5fbc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_1d5fc0:
    // 0x1d5fc0: 0xc054c2c  jal         func_1530B0
label_1d5fc4:
    if (ctx->pc == 0x1D5FC4u) {
        ctx->pc = 0x1D5FC4u;
            // 0x1d5fc4: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x1D5FC8u;
        goto label_1d5fc8;
    }
    ctx->pc = 0x1D5FC0u;
    SET_GPR_U32(ctx, 31, 0x1D5FC8u);
    ctx->pc = 0x1D5FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FC0u;
            // 0x1d5fc4: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FC8u; }
        if (ctx->pc != 0x1D5FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FC8u; }
        if (ctx->pc != 0x1D5FC8u) { return; }
    }
    ctx->pc = 0x1D5FC8u;
label_1d5fc8:
    // 0x1d5fc8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d5fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5fcc:
    // 0x1d5fcc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1d5fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1d5fd0:
    // 0x1d5fd0: 0x320f809  jalr        $t9
label_1d5fd4:
    if (ctx->pc == 0x1D5FD4u) {
        ctx->pc = 0x1D5FD4u;
            // 0x1d5fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FD8u;
        goto label_1d5fd8;
    }
    ctx->pc = 0x1D5FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D5FD8u);
        ctx->pc = 0x1D5FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FD0u;
            // 0x1d5fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5FD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FD8u; }
            if (ctx->pc != 0x1D5FD8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5FD8u;
label_1d5fd8:
    // 0x1d5fd8: 0xc62d0018  lwc1        $f13, 0x18($s1)
    ctx->pc = 0x1d5fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d5fdc:
    // 0x1d5fdc: 0xc62e001c  lwc1        $f14, 0x1C($s1)
    ctx->pc = 0x1d5fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1d5fe0:
    // 0x1d5fe0: 0xc0517cc  jal         func_145F30
label_1d5fe4:
    if (ctx->pc == 0x1D5FE4u) {
        ctx->pc = 0x1D5FE4u;
            // 0x1d5fe4: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D5FE8u;
        goto label_1d5fe8;
    }
    ctx->pc = 0x1D5FE0u;
    SET_GPR_U32(ctx, 31, 0x1D5FE8u);
    ctx->pc = 0x1D5FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FE0u;
            // 0x1d5fe4: 0xc62c0014  lwc1        $f12, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F30u;
    if (runtime->hasFunction(0x145F30u)) {
        auto targetFn = runtime->lookupFunction(0x145F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FE8u; }
        if (ctx->pc != 0x1D5FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F30_0x145f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5FE8u; }
        if (ctx->pc != 0x1D5FE8u) { return; }
    }
    ctx->pc = 0x1D5FE8u;
label_1d5fe8:
    // 0x1d5fe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d5fec:
    // 0x1d5fec: 0xc62d000c  lwc1        $f13, 0xC($s1)
    ctx->pc = 0x1d5fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d5ff0:
    // 0x1d5ff0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1d5ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1d5ff4:
    // 0x1d5ff4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1d5ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1d5ff8:
    // 0x1d5ff8: 0xc05182c  jal         func_1460B0
label_1d5ffc:
    if (ctx->pc == 0x1D5FFCu) {
        ctx->pc = 0x1D5FFCu;
            // 0x1d5ffc: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D6000u;
        goto label_1d6000;
    }
    ctx->pc = 0x1D5FF8u;
    SET_GPR_U32(ctx, 31, 0x1D6000u);
    ctx->pc = 0x1D5FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5FF8u;
            // 0x1d5ffc: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1460B0u;
    if (runtime->hasFunction(0x1460B0u)) {
        auto targetFn = runtime->lookupFunction(0x1460B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6000u; }
        if (ctx->pc != 0x1D6000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001460B0_0x1460b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6000u; }
        if (ctx->pc != 0x1D6000u) { return; }
    }
    ctx->pc = 0x1D6000u;
label_1d6000:
    // 0x1d6000: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d6000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1d6004:
    // 0x1d6004: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d6004u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d6008:
    // 0x1d6008: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d6008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d600c:
    // 0x1d600c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d600cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d6010:
    // 0x1d6010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d6010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6014:
    // 0x1d6014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6018:
    // 0x1d6018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d601c:
    // 0x1d601c: 0x3e00008  jr          $ra
label_1d6020:
    if (ctx->pc == 0x1D6020u) {
        ctx->pc = 0x1D6020u;
            // 0x1d6020: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1D6024u;
        goto label_1d6024;
    }
    ctx->pc = 0x1D601Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D601Cu;
            // 0x1d6020: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6024u;
label_1d6024:
    // 0x1d6024: 0x0  nop
    ctx->pc = 0x1d6024u;
    // NOP
label_1d6028:
    // 0x1d6028: 0x0  nop
    ctx->pc = 0x1d6028u;
    // NOP
label_1d602c:
    // 0x1d602c: 0x0  nop
    ctx->pc = 0x1d602cu;
    // NOP
label_1d6030:
    // 0x1d6030: 0x80517c0  j           func_145F00
label_1d6034:
    if (ctx->pc == 0x1D6034u) {
        ctx->pc = 0x1D6034u;
            // 0x1d6034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6038u;
        goto label_1d6038;
    }
    ctx->pc = 0x1D6030u;
    ctx->pc = 0x1D6034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6030u;
            // 0x1d6034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F00u;
    if (runtime->hasFunction(0x145F00u)) {
        auto targetFn = runtime->lookupFunction(0x145F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145F00_0x145f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D6038u;
label_1d6038:
    // 0x1d6038: 0x0  nop
    ctx->pc = 0x1d6038u;
    // NOP
label_1d603c:
    // 0x1d603c: 0x0  nop
    ctx->pc = 0x1d603cu;
    // NOP
label_1d6040:
    // 0x1d6040: 0x80517c0  j           func_145F00
label_1d6044:
    if (ctx->pc == 0x1D6044u) {
        ctx->pc = 0x1D6044u;
            // 0x1d6044: 0x90840013  lbu         $a0, 0x13($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
        ctx->pc = 0x1D6048u;
        goto label_1d6048;
    }
    ctx->pc = 0x1D6040u;
    ctx->pc = 0x1D6044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6040u;
            // 0x1d6044: 0x90840013  lbu         $a0, 0x13($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F00u;
    if (runtime->hasFunction(0x145F00u)) {
        auto targetFn = runtime->lookupFunction(0x145F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145F00_0x145f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D6048u;
label_1d6048:
    // 0x1d6048: 0x0  nop
    ctx->pc = 0x1d6048u;
    // NOP
label_1d604c:
    // 0x1d604c: 0x0  nop
    ctx->pc = 0x1d604cu;
    // NOP
}
