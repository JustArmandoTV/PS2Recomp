#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371B00
// Address: 0x371b00 - 0x371ec0
void sub_00371B00_0x371b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371B00_0x371b00");
#endif

    switch (ctx->pc) {
        case 0x371b00u: goto label_371b00;
        case 0x371b04u: goto label_371b04;
        case 0x371b08u: goto label_371b08;
        case 0x371b0cu: goto label_371b0c;
        case 0x371b10u: goto label_371b10;
        case 0x371b14u: goto label_371b14;
        case 0x371b18u: goto label_371b18;
        case 0x371b1cu: goto label_371b1c;
        case 0x371b20u: goto label_371b20;
        case 0x371b24u: goto label_371b24;
        case 0x371b28u: goto label_371b28;
        case 0x371b2cu: goto label_371b2c;
        case 0x371b30u: goto label_371b30;
        case 0x371b34u: goto label_371b34;
        case 0x371b38u: goto label_371b38;
        case 0x371b3cu: goto label_371b3c;
        case 0x371b40u: goto label_371b40;
        case 0x371b44u: goto label_371b44;
        case 0x371b48u: goto label_371b48;
        case 0x371b4cu: goto label_371b4c;
        case 0x371b50u: goto label_371b50;
        case 0x371b54u: goto label_371b54;
        case 0x371b58u: goto label_371b58;
        case 0x371b5cu: goto label_371b5c;
        case 0x371b60u: goto label_371b60;
        case 0x371b64u: goto label_371b64;
        case 0x371b68u: goto label_371b68;
        case 0x371b6cu: goto label_371b6c;
        case 0x371b70u: goto label_371b70;
        case 0x371b74u: goto label_371b74;
        case 0x371b78u: goto label_371b78;
        case 0x371b7cu: goto label_371b7c;
        case 0x371b80u: goto label_371b80;
        case 0x371b84u: goto label_371b84;
        case 0x371b88u: goto label_371b88;
        case 0x371b8cu: goto label_371b8c;
        case 0x371b90u: goto label_371b90;
        case 0x371b94u: goto label_371b94;
        case 0x371b98u: goto label_371b98;
        case 0x371b9cu: goto label_371b9c;
        case 0x371ba0u: goto label_371ba0;
        case 0x371ba4u: goto label_371ba4;
        case 0x371ba8u: goto label_371ba8;
        case 0x371bacu: goto label_371bac;
        case 0x371bb0u: goto label_371bb0;
        case 0x371bb4u: goto label_371bb4;
        case 0x371bb8u: goto label_371bb8;
        case 0x371bbcu: goto label_371bbc;
        case 0x371bc0u: goto label_371bc0;
        case 0x371bc4u: goto label_371bc4;
        case 0x371bc8u: goto label_371bc8;
        case 0x371bccu: goto label_371bcc;
        case 0x371bd0u: goto label_371bd0;
        case 0x371bd4u: goto label_371bd4;
        case 0x371bd8u: goto label_371bd8;
        case 0x371bdcu: goto label_371bdc;
        case 0x371be0u: goto label_371be0;
        case 0x371be4u: goto label_371be4;
        case 0x371be8u: goto label_371be8;
        case 0x371becu: goto label_371bec;
        case 0x371bf0u: goto label_371bf0;
        case 0x371bf4u: goto label_371bf4;
        case 0x371bf8u: goto label_371bf8;
        case 0x371bfcu: goto label_371bfc;
        case 0x371c00u: goto label_371c00;
        case 0x371c04u: goto label_371c04;
        case 0x371c08u: goto label_371c08;
        case 0x371c0cu: goto label_371c0c;
        case 0x371c10u: goto label_371c10;
        case 0x371c14u: goto label_371c14;
        case 0x371c18u: goto label_371c18;
        case 0x371c1cu: goto label_371c1c;
        case 0x371c20u: goto label_371c20;
        case 0x371c24u: goto label_371c24;
        case 0x371c28u: goto label_371c28;
        case 0x371c2cu: goto label_371c2c;
        case 0x371c30u: goto label_371c30;
        case 0x371c34u: goto label_371c34;
        case 0x371c38u: goto label_371c38;
        case 0x371c3cu: goto label_371c3c;
        case 0x371c40u: goto label_371c40;
        case 0x371c44u: goto label_371c44;
        case 0x371c48u: goto label_371c48;
        case 0x371c4cu: goto label_371c4c;
        case 0x371c50u: goto label_371c50;
        case 0x371c54u: goto label_371c54;
        case 0x371c58u: goto label_371c58;
        case 0x371c5cu: goto label_371c5c;
        case 0x371c60u: goto label_371c60;
        case 0x371c64u: goto label_371c64;
        case 0x371c68u: goto label_371c68;
        case 0x371c6cu: goto label_371c6c;
        case 0x371c70u: goto label_371c70;
        case 0x371c74u: goto label_371c74;
        case 0x371c78u: goto label_371c78;
        case 0x371c7cu: goto label_371c7c;
        case 0x371c80u: goto label_371c80;
        case 0x371c84u: goto label_371c84;
        case 0x371c88u: goto label_371c88;
        case 0x371c8cu: goto label_371c8c;
        case 0x371c90u: goto label_371c90;
        case 0x371c94u: goto label_371c94;
        case 0x371c98u: goto label_371c98;
        case 0x371c9cu: goto label_371c9c;
        case 0x371ca0u: goto label_371ca0;
        case 0x371ca4u: goto label_371ca4;
        case 0x371ca8u: goto label_371ca8;
        case 0x371cacu: goto label_371cac;
        case 0x371cb0u: goto label_371cb0;
        case 0x371cb4u: goto label_371cb4;
        case 0x371cb8u: goto label_371cb8;
        case 0x371cbcu: goto label_371cbc;
        case 0x371cc0u: goto label_371cc0;
        case 0x371cc4u: goto label_371cc4;
        case 0x371cc8u: goto label_371cc8;
        case 0x371cccu: goto label_371ccc;
        case 0x371cd0u: goto label_371cd0;
        case 0x371cd4u: goto label_371cd4;
        case 0x371cd8u: goto label_371cd8;
        case 0x371cdcu: goto label_371cdc;
        case 0x371ce0u: goto label_371ce0;
        case 0x371ce4u: goto label_371ce4;
        case 0x371ce8u: goto label_371ce8;
        case 0x371cecu: goto label_371cec;
        case 0x371cf0u: goto label_371cf0;
        case 0x371cf4u: goto label_371cf4;
        case 0x371cf8u: goto label_371cf8;
        case 0x371cfcu: goto label_371cfc;
        case 0x371d00u: goto label_371d00;
        case 0x371d04u: goto label_371d04;
        case 0x371d08u: goto label_371d08;
        case 0x371d0cu: goto label_371d0c;
        case 0x371d10u: goto label_371d10;
        case 0x371d14u: goto label_371d14;
        case 0x371d18u: goto label_371d18;
        case 0x371d1cu: goto label_371d1c;
        case 0x371d20u: goto label_371d20;
        case 0x371d24u: goto label_371d24;
        case 0x371d28u: goto label_371d28;
        case 0x371d2cu: goto label_371d2c;
        case 0x371d30u: goto label_371d30;
        case 0x371d34u: goto label_371d34;
        case 0x371d38u: goto label_371d38;
        case 0x371d3cu: goto label_371d3c;
        case 0x371d40u: goto label_371d40;
        case 0x371d44u: goto label_371d44;
        case 0x371d48u: goto label_371d48;
        case 0x371d4cu: goto label_371d4c;
        case 0x371d50u: goto label_371d50;
        case 0x371d54u: goto label_371d54;
        case 0x371d58u: goto label_371d58;
        case 0x371d5cu: goto label_371d5c;
        case 0x371d60u: goto label_371d60;
        case 0x371d64u: goto label_371d64;
        case 0x371d68u: goto label_371d68;
        case 0x371d6cu: goto label_371d6c;
        case 0x371d70u: goto label_371d70;
        case 0x371d74u: goto label_371d74;
        case 0x371d78u: goto label_371d78;
        case 0x371d7cu: goto label_371d7c;
        case 0x371d80u: goto label_371d80;
        case 0x371d84u: goto label_371d84;
        case 0x371d88u: goto label_371d88;
        case 0x371d8cu: goto label_371d8c;
        case 0x371d90u: goto label_371d90;
        case 0x371d94u: goto label_371d94;
        case 0x371d98u: goto label_371d98;
        case 0x371d9cu: goto label_371d9c;
        case 0x371da0u: goto label_371da0;
        case 0x371da4u: goto label_371da4;
        case 0x371da8u: goto label_371da8;
        case 0x371dacu: goto label_371dac;
        case 0x371db0u: goto label_371db0;
        case 0x371db4u: goto label_371db4;
        case 0x371db8u: goto label_371db8;
        case 0x371dbcu: goto label_371dbc;
        case 0x371dc0u: goto label_371dc0;
        case 0x371dc4u: goto label_371dc4;
        case 0x371dc8u: goto label_371dc8;
        case 0x371dccu: goto label_371dcc;
        case 0x371dd0u: goto label_371dd0;
        case 0x371dd4u: goto label_371dd4;
        case 0x371dd8u: goto label_371dd8;
        case 0x371ddcu: goto label_371ddc;
        case 0x371de0u: goto label_371de0;
        case 0x371de4u: goto label_371de4;
        case 0x371de8u: goto label_371de8;
        case 0x371decu: goto label_371dec;
        case 0x371df0u: goto label_371df0;
        case 0x371df4u: goto label_371df4;
        case 0x371df8u: goto label_371df8;
        case 0x371dfcu: goto label_371dfc;
        case 0x371e00u: goto label_371e00;
        case 0x371e04u: goto label_371e04;
        case 0x371e08u: goto label_371e08;
        case 0x371e0cu: goto label_371e0c;
        case 0x371e10u: goto label_371e10;
        case 0x371e14u: goto label_371e14;
        case 0x371e18u: goto label_371e18;
        case 0x371e1cu: goto label_371e1c;
        case 0x371e20u: goto label_371e20;
        case 0x371e24u: goto label_371e24;
        case 0x371e28u: goto label_371e28;
        case 0x371e2cu: goto label_371e2c;
        case 0x371e30u: goto label_371e30;
        case 0x371e34u: goto label_371e34;
        case 0x371e38u: goto label_371e38;
        case 0x371e3cu: goto label_371e3c;
        case 0x371e40u: goto label_371e40;
        case 0x371e44u: goto label_371e44;
        case 0x371e48u: goto label_371e48;
        case 0x371e4cu: goto label_371e4c;
        case 0x371e50u: goto label_371e50;
        case 0x371e54u: goto label_371e54;
        case 0x371e58u: goto label_371e58;
        case 0x371e5cu: goto label_371e5c;
        case 0x371e60u: goto label_371e60;
        case 0x371e64u: goto label_371e64;
        case 0x371e68u: goto label_371e68;
        case 0x371e6cu: goto label_371e6c;
        case 0x371e70u: goto label_371e70;
        case 0x371e74u: goto label_371e74;
        case 0x371e78u: goto label_371e78;
        case 0x371e7cu: goto label_371e7c;
        case 0x371e80u: goto label_371e80;
        case 0x371e84u: goto label_371e84;
        case 0x371e88u: goto label_371e88;
        case 0x371e8cu: goto label_371e8c;
        case 0x371e90u: goto label_371e90;
        case 0x371e94u: goto label_371e94;
        case 0x371e98u: goto label_371e98;
        case 0x371e9cu: goto label_371e9c;
        case 0x371ea0u: goto label_371ea0;
        case 0x371ea4u: goto label_371ea4;
        case 0x371ea8u: goto label_371ea8;
        case 0x371eacu: goto label_371eac;
        case 0x371eb0u: goto label_371eb0;
        case 0x371eb4u: goto label_371eb4;
        case 0x371eb8u: goto label_371eb8;
        case 0x371ebcu: goto label_371ebc;
        default: break;
    }

    ctx->pc = 0x371b00u;

label_371b00:
    // 0x371b00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x371b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_371b04:
    // 0x371b04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x371b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_371b08:
    // 0x371b08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x371b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_371b0c:
    // 0x371b0c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x371b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_371b10:
    // 0x371b10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x371b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_371b14:
    // 0x371b14: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x371b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_371b18:
    // 0x371b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_371b1c:
    // 0x371b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_371b20:
    // 0x371b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x371b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_371b24:
    // 0x371b24: 0xc0aeaf4  jal         func_2BABD0
label_371b28:
    if (ctx->pc == 0x371B28u) {
        ctx->pc = 0x371B28u;
            // 0x371b28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x371B2Cu;
        goto label_371b2c;
    }
    ctx->pc = 0x371B24u;
    SET_GPR_U32(ctx, 31, 0x371B2Cu);
    ctx->pc = 0x371B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371B24u;
            // 0x371b28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B2Cu; }
        if (ctx->pc != 0x371B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B2Cu; }
        if (ctx->pc != 0x371B2Cu) { return; }
    }
    ctx->pc = 0x371B2Cu;
label_371b2c:
    // 0x371b2c: 0xc0dc8bc  jal         func_3722F0
label_371b30:
    if (ctx->pc == 0x371B30u) {
        ctx->pc = 0x371B30u;
            // 0x371b30: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x371B34u;
        goto label_371b34;
    }
    ctx->pc = 0x371B2Cu;
    SET_GPR_U32(ctx, 31, 0x371B34u);
    ctx->pc = 0x371B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371B2Cu;
            // 0x371b30: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3722F0u;
    if (runtime->hasFunction(0x3722F0u)) {
        auto targetFn = runtime->lookupFunction(0x3722F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B34u; }
        if (ctx->pc != 0x371B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003722F0_0x3722f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B34u; }
        if (ctx->pc != 0x371B34u) { return; }
    }
    ctx->pc = 0x371B34u;
label_371b34:
    // 0x371b34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x371b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_371b38:
    // 0x371b38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x371b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_371b3c:
    // 0x371b3c: 0x24636e40  addiu       $v1, $v1, 0x6E40
    ctx->pc = 0x371b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28224));
label_371b40:
    // 0x371b40: 0x24426e78  addiu       $v0, $v0, 0x6E78
    ctx->pc = 0x371b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28280));
label_371b44:
    // 0x371b44: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x371b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_371b48:
    // 0x371b48: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x371b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_371b4c:
    // 0x371b4c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x371b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_371b50:
    // 0x371b50: 0xc0dc8b4  jal         func_3722D0
label_371b54:
    if (ctx->pc == 0x371B54u) {
        ctx->pc = 0x371B54u;
            // 0x371b54: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x371B58u;
        goto label_371b58;
    }
    ctx->pc = 0x371B50u;
    SET_GPR_U32(ctx, 31, 0x371B58u);
    ctx->pc = 0x371B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371B50u;
            // 0x371b54: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3722D0u;
    if (runtime->hasFunction(0x3722D0u)) {
        auto targetFn = runtime->lookupFunction(0x3722D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B58u; }
        if (ctx->pc != 0x371B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003722D0_0x3722d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B58u; }
        if (ctx->pc != 0x371B58u) { return; }
    }
    ctx->pc = 0x371B58u;
label_371b58:
    // 0x371b58: 0xc0dc8b4  jal         func_3722D0
label_371b5c:
    if (ctx->pc == 0x371B5Cu) {
        ctx->pc = 0x371B5Cu;
            // 0x371b5c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x371B60u;
        goto label_371b60;
    }
    ctx->pc = 0x371B58u;
    SET_GPR_U32(ctx, 31, 0x371B60u);
    ctx->pc = 0x371B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371B58u;
            // 0x371b5c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3722D0u;
    if (runtime->hasFunction(0x3722D0u)) {
        auto targetFn = runtime->lookupFunction(0x3722D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B60u; }
        if (ctx->pc != 0x371B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003722D0_0x3722d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B60u; }
        if (ctx->pc != 0x371B60u) { return; }
    }
    ctx->pc = 0x371B60u;
label_371b60:
    // 0x371b60: 0xc0dc8ac  jal         func_3722B0
label_371b64:
    if (ctx->pc == 0x371B64u) {
        ctx->pc = 0x371B64u;
            // 0x371b64: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x371B68u;
        goto label_371b68;
    }
    ctx->pc = 0x371B60u;
    SET_GPR_U32(ctx, 31, 0x371B68u);
    ctx->pc = 0x371B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371B60u;
            // 0x371b64: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3722B0u;
    if (runtime->hasFunction(0x3722B0u)) {
        auto targetFn = runtime->lookupFunction(0x3722B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B68u; }
        if (ctx->pc != 0x371B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003722B0_0x3722b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B68u; }
        if (ctx->pc != 0x371B68u) { return; }
    }
    ctx->pc = 0x371B68u;
label_371b68:
    // 0x371b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x371b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371b6c:
    // 0x371b6c: 0xc0aeac0  jal         func_2BAB00
label_371b70:
    if (ctx->pc == 0x371B70u) {
        ctx->pc = 0x371B70u;
            // 0x371b70: 0xae200098  sw          $zero, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x371B74u;
        goto label_371b74;
    }
    ctx->pc = 0x371B6Cu;
    SET_GPR_U32(ctx, 31, 0x371B74u);
    ctx->pc = 0x371B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371B6Cu;
            // 0x371b70: 0xae200098  sw          $zero, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B74u; }
        if (ctx->pc != 0x371B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B74u; }
        if (ctx->pc != 0x371B74u) { return; }
    }
    ctx->pc = 0x371B74u;
label_371b74:
    // 0x371b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x371b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371b78:
    // 0x371b78: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_371b7c:
    if (ctx->pc == 0x371B7Cu) {
        ctx->pc = 0x371B80u;
        goto label_371b80;
    }
    ctx->pc = 0x371B78u;
    {
        const bool branch_taken_0x371b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x371b78) {
            ctx->pc = 0x371C00u;
            goto label_371c00;
        }
    }
    ctx->pc = 0x371B80u;
label_371b80:
    // 0x371b80: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x371b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_371b84:
    // 0x371b84: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x371b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_371b88:
    // 0x371b88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x371b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_371b8c:
    // 0x371b8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x371b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_371b90:
    // 0x371b90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x371b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_371b94:
    // 0x371b94: 0xc040138  jal         func_1004E0
label_371b98:
    if (ctx->pc == 0x371B98u) {
        ctx->pc = 0x371B98u;
            // 0x371b98: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x371B9Cu;
        goto label_371b9c;
    }
    ctx->pc = 0x371B94u;
    SET_GPR_U32(ctx, 31, 0x371B9Cu);
    ctx->pc = 0x371B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371B94u;
            // 0x371b98: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B9Cu; }
        if (ctx->pc != 0x371B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371B9Cu; }
        if (ctx->pc != 0x371B9Cu) { return; }
    }
    ctx->pc = 0x371B9Cu;
label_371b9c:
    // 0x371b9c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x371b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_371ba0:
    // 0x371ba0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x371ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_371ba4:
    // 0x371ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x371ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371ba8:
    // 0x371ba8: 0x24a52100  addiu       $a1, $a1, 0x2100
    ctx->pc = 0x371ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8448));
label_371bac:
    // 0x371bac: 0x24c60350  addiu       $a2, $a2, 0x350
    ctx->pc = 0x371bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 848));
label_371bb0:
    // 0x371bb0: 0x24070bd0  addiu       $a3, $zero, 0xBD0
    ctx->pc = 0x371bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3024));
label_371bb4:
    // 0x371bb4: 0xc040840  jal         func_102100
label_371bb8:
    if (ctx->pc == 0x371BB8u) {
        ctx->pc = 0x371BB8u;
            // 0x371bb8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371BBCu;
        goto label_371bbc;
    }
    ctx->pc = 0x371BB4u;
    SET_GPR_U32(ctx, 31, 0x371BBCu);
    ctx->pc = 0x371BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371BB4u;
            // 0x371bb8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BBCu; }
        if (ctx->pc != 0x371BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BBCu; }
        if (ctx->pc != 0x371BBCu) { return; }
    }
    ctx->pc = 0x371BBCu;
label_371bbc:
    // 0x371bbc: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x371bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_371bc0:
    // 0x371bc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x371bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371bc4:
    // 0x371bc4: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x371bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_371bc8:
    // 0x371bc8: 0xc0dc83c  jal         func_3720F0
label_371bcc:
    if (ctx->pc == 0x371BCCu) {
        ctx->pc = 0x371BCCu;
            // 0x371bcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371BD0u;
        goto label_371bd0;
    }
    ctx->pc = 0x371BC8u;
    SET_GPR_U32(ctx, 31, 0x371BD0u);
    ctx->pc = 0x371BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371BC8u;
            // 0x371bcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3720F0u;
    if (runtime->hasFunction(0x3720F0u)) {
        auto targetFn = runtime->lookupFunction(0x3720F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BD0u; }
        if (ctx->pc != 0x371BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003720F0_0x3720f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BD0u; }
        if (ctx->pc != 0x371BD0u) { return; }
    }
    ctx->pc = 0x371BD0u;
label_371bd0:
    // 0x371bd0: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x371bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_371bd4:
    // 0x371bd4: 0xc0dc83c  jal         func_3720F0
label_371bd8:
    if (ctx->pc == 0x371BD8u) {
        ctx->pc = 0x371BD8u;
            // 0x371bd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371BDCu;
        goto label_371bdc;
    }
    ctx->pc = 0x371BD4u;
    SET_GPR_U32(ctx, 31, 0x371BDCu);
    ctx->pc = 0x371BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371BD4u;
            // 0x371bd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3720F0u;
    if (runtime->hasFunction(0x3720F0u)) {
        auto targetFn = runtime->lookupFunction(0x3720F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BDCu; }
        if (ctx->pc != 0x371BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003720F0_0x3720f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BDCu; }
        if (ctx->pc != 0x371BDCu) { return; }
    }
    ctx->pc = 0x371BDCu;
label_371bdc:
    // 0x371bdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x371bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371be0:
    // 0x371be0: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x371be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_371be4:
    // 0x371be4: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x371be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_371be8:
    // 0x371be8: 0xc0dc834  jal         func_3720D0
label_371bec:
    if (ctx->pc == 0x371BECu) {
        ctx->pc = 0x371BECu;
            // 0x371bec: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x371BF0u;
        goto label_371bf0;
    }
    ctx->pc = 0x371BE8u;
    SET_GPR_U32(ctx, 31, 0x371BF0u);
    ctx->pc = 0x371BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371BE8u;
            // 0x371bec: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3720D0u;
    if (runtime->hasFunction(0x3720D0u)) {
        auto targetFn = runtime->lookupFunction(0x3720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BF0u; }
        if (ctx->pc != 0x371BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003720D0_0x3720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371BF0u; }
        if (ctx->pc != 0x371BF0u) { return; }
    }
    ctx->pc = 0x371BF0u;
label_371bf0:
    // 0x371bf0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x371bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_371bf4:
    // 0x371bf4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x371bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_371bf8:
    // 0x371bf8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_371bfc:
    if (ctx->pc == 0x371BFCu) {
        ctx->pc = 0x371BFCu;
            // 0x371bfc: 0x26730bd0  addiu       $s3, $s3, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3024));
        ctx->pc = 0x371C00u;
        goto label_371c00;
    }
    ctx->pc = 0x371BF8u;
    {
        const bool branch_taken_0x371bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371BF8u;
            // 0x371bfc: 0x26730bd0  addiu       $s3, $s3, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bf8) {
            ctx->pc = 0x371BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_371be0;
        }
    }
    ctx->pc = 0x371C00u;
label_371c00:
    // 0x371c00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x371c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_371c04:
    // 0x371c04: 0x24426df0  addiu       $v0, $v0, 0x6DF0
    ctx->pc = 0x371c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28144));
label_371c08:
    // 0x371c08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x371c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_371c0c:
    // 0x371c0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x371c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_371c10:
    // 0x371c10: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x371c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_371c14:
    // 0x371c14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x371c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_371c18:
    // 0x371c18: 0x262400a4  addiu       $a0, $s1, 0xA4
    ctx->pc = 0x371c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_371c1c:
    // 0x371c1c: 0x24426e28  addiu       $v0, $v0, 0x6E28
    ctx->pc = 0x371c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28200));
label_371c20:
    // 0x371c20: 0x24a52080  addiu       $a1, $a1, 0x2080
    ctx->pc = 0x371c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8320));
label_371c24:
    // 0x371c24: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x371c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_371c28:
    // 0x371c28: 0x24c61ff0  addiu       $a2, $a2, 0x1FF0
    ctx->pc = 0x371c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8176));
label_371c2c:
    // 0x371c2c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x371c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_371c30:
    // 0x371c30: 0xc040804  jal         func_102010
label_371c34:
    if (ctx->pc == 0x371C34u) {
        ctx->pc = 0x371C34u;
            // 0x371c34: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x371C38u;
        goto label_371c38;
    }
    ctx->pc = 0x371C30u;
    SET_GPR_U32(ctx, 31, 0x371C38u);
    ctx->pc = 0x371C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371C30u;
            // 0x371c34: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C38u; }
        if (ctx->pc != 0x371C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C38u; }
        if (ctx->pc != 0x371C38u) { return; }
    }
    ctx->pc = 0x371C38u;
label_371c38:
    // 0x371c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x371c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371c3c:
    // 0x371c3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x371c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_371c40:
    // 0x371c40: 0xae230108  sw          $v1, 0x108($s1)
    ctx->pc = 0x371c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 3));
label_371c44:
    // 0x371c44: 0x2624009c  addiu       $a0, $s1, 0x9C
    ctx->pc = 0x371c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
label_371c48:
    // 0x371c48: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x371c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
label_371c4c:
    // 0x371c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371c50:
    // 0x371c50: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x371c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
label_371c54:
    // 0x371c54: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x371c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_371c58:
    // 0x371c58: 0xae200114  sw          $zero, 0x114($s1)
    ctx->pc = 0x371c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
label_371c5c:
    // 0x371c5c: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x371c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_371c60:
    // 0x371c60: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x371c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
label_371c64:
    // 0x371c64: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x371c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
label_371c68:
    // 0x371c68: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x371c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
label_371c6c:
    // 0x371c6c: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x371c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
label_371c70:
    // 0x371c70: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x371c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_371c74:
    // 0x371c74: 0xc04a576  jal         func_1295D8
label_371c78:
    if (ctx->pc == 0x371C78u) {
        ctx->pc = 0x371C78u;
            // 0x371c78: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->pc = 0x371C7Cu;
        goto label_371c7c;
    }
    ctx->pc = 0x371C74u;
    SET_GPR_U32(ctx, 31, 0x371C7Cu);
    ctx->pc = 0x371C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371C74u;
            // 0x371c78: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C7Cu; }
        if (ctx->pc != 0x371C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371C7Cu; }
        if (ctx->pc != 0x371C7Cu) { return; }
    }
    ctx->pc = 0x371C7Cu;
label_371c7c:
    // 0x371c7c: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x371c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_371c80:
    // 0x371c80: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x371c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_371c84:
    // 0x371c84: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x371c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_371c88:
    // 0x371c88: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x371c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_371c8c:
    // 0x371c8c: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x371c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_371c90:
    // 0x371c90: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x371c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_371c94:
    // 0x371c94: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x371c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_371c98:
    // 0x371c98: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x371c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_371c9c:
    // 0x371c9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371ca0:
    // 0x371ca0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x371ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_371ca4:
    // 0x371ca4: 0xc0a7a88  jal         func_29EA20
label_371ca8:
    if (ctx->pc == 0x371CA8u) {
        ctx->pc = 0x371CA8u;
            // 0x371ca8: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x371CACu;
        goto label_371cac;
    }
    ctx->pc = 0x371CA4u;
    SET_GPR_U32(ctx, 31, 0x371CACu);
    ctx->pc = 0x371CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371CA4u;
            // 0x371ca8: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371CACu; }
        if (ctx->pc != 0x371CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371CACu; }
        if (ctx->pc != 0x371CACu) { return; }
    }
    ctx->pc = 0x371CACu;
label_371cac:
    // 0x371cac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x371cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_371cb0:
    // 0x371cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x371cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371cb4:
    // 0x371cb4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_371cb8:
    if (ctx->pc == 0x371CB8u) {
        ctx->pc = 0x371CB8u;
            // 0x371cb8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x371CBCu;
        goto label_371cbc;
    }
    ctx->pc = 0x371CB4u;
    {
        const bool branch_taken_0x371cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x371CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371CB4u;
            // 0x371cb8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371cb4) {
            ctx->pc = 0x371CD0u;
            goto label_371cd0;
        }
    }
    ctx->pc = 0x371CBCu;
label_371cbc:
    // 0x371cbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x371cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_371cc0:
    // 0x371cc0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x371cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_371cc4:
    // 0x371cc4: 0xc0804bc  jal         func_2012F0
label_371cc8:
    if (ctx->pc == 0x371CC8u) {
        ctx->pc = 0x371CC8u;
            // 0x371cc8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x371CCCu;
        goto label_371ccc;
    }
    ctx->pc = 0x371CC4u;
    SET_GPR_U32(ctx, 31, 0x371CCCu);
    ctx->pc = 0x371CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371CC4u;
            // 0x371cc8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371CCCu; }
        if (ctx->pc != 0x371CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371CCCu; }
        if (ctx->pc != 0x371CCCu) { return; }
    }
    ctx->pc = 0x371CCCu;
label_371ccc:
    // 0x371ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x371cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371cd0:
    // 0x371cd0: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x371cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
label_371cd4:
    // 0x371cd4: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x371cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_371cd8:
    // 0x371cd8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x371cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_371cdc:
    // 0x371cdc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x371cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_371ce0:
    // 0x371ce0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x371ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_371ce4:
    // 0x371ce4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x371ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_371ce8:
    // 0x371ce8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x371ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_371cec:
    // 0x371cec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x371cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_371cf0:
    // 0x371cf0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x371cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_371cf4:
    // 0x371cf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371cf8:
    // 0x371cf8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x371cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_371cfc:
    // 0x371cfc: 0xc0a7a88  jal         func_29EA20
label_371d00:
    if (ctx->pc == 0x371D00u) {
        ctx->pc = 0x371D00u;
            // 0x371d00: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x371D04u;
        goto label_371d04;
    }
    ctx->pc = 0x371CFCu;
    SET_GPR_U32(ctx, 31, 0x371D04u);
    ctx->pc = 0x371D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371CFCu;
            // 0x371d00: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D04u; }
        if (ctx->pc != 0x371D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D04u; }
        if (ctx->pc != 0x371D04u) { return; }
    }
    ctx->pc = 0x371D04u;
label_371d04:
    // 0x371d04: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x371d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_371d08:
    // 0x371d08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x371d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371d0c:
    // 0x371d0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_371d10:
    if (ctx->pc == 0x371D10u) {
        ctx->pc = 0x371D10u;
            // 0x371d10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x371D14u;
        goto label_371d14;
    }
    ctx->pc = 0x371D0Cu;
    {
        const bool branch_taken_0x371d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x371D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371D0Cu;
            // 0x371d10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d0c) {
            ctx->pc = 0x371D28u;
            goto label_371d28;
        }
    }
    ctx->pc = 0x371D14u;
label_371d14:
    // 0x371d14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x371d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_371d18:
    // 0x371d18: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x371d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_371d1c:
    // 0x371d1c: 0xc0804bc  jal         func_2012F0
label_371d20:
    if (ctx->pc == 0x371D20u) {
        ctx->pc = 0x371D20u;
            // 0x371d20: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x371D24u;
        goto label_371d24;
    }
    ctx->pc = 0x371D1Cu;
    SET_GPR_U32(ctx, 31, 0x371D24u);
    ctx->pc = 0x371D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371D1Cu;
            // 0x371d20: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D24u; }
        if (ctx->pc != 0x371D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D24u; }
        if (ctx->pc != 0x371D24u) { return; }
    }
    ctx->pc = 0x371D24u;
label_371d24:
    // 0x371d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x371d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371d28:
    // 0x371d28: 0xae2400a0  sw          $a0, 0xA0($s1)
    ctx->pc = 0x371d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 4));
label_371d2c:
    // 0x371d2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x371d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371d30:
    // 0x371d30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x371d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_371d34:
    // 0x371d34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_371d38:
    // 0x371d38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_371d3c:
    // 0x371d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_371d40:
    // 0x371d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_371d44:
    // 0x371d44: 0x3e00008  jr          $ra
label_371d48:
    if (ctx->pc == 0x371D48u) {
        ctx->pc = 0x371D48u;
            // 0x371d48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x371D4Cu;
        goto label_371d4c;
    }
    ctx->pc = 0x371D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371D44u;
            // 0x371d48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371D4Cu;
label_371d4c:
    // 0x371d4c: 0x0  nop
    ctx->pc = 0x371d4cu;
    // NOP
label_371d50:
    // 0x371d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x371d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_371d54:
    // 0x371d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x371d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_371d58:
    // 0x371d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_371d5c:
    // 0x371d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_371d60:
    // 0x371d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x371d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_371d64:
    // 0x371d64: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_371d68:
    if (ctx->pc == 0x371D68u) {
        ctx->pc = 0x371D68u;
            // 0x371d68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371D6Cu;
        goto label_371d6c;
    }
    ctx->pc = 0x371D64u;
    {
        const bool branch_taken_0x371d64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x371D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371D64u;
            // 0x371d68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d64) {
            ctx->pc = 0x371EA0u;
            goto label_371ea0;
        }
    }
    ctx->pc = 0x371D6Cu;
label_371d6c:
    // 0x371d6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x371d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_371d70:
    // 0x371d70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x371d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_371d74:
    // 0x371d74: 0x24636e40  addiu       $v1, $v1, 0x6E40
    ctx->pc = 0x371d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28224));
label_371d78:
    // 0x371d78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x371d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_371d7c:
    // 0x371d7c: 0x24426e78  addiu       $v0, $v0, 0x6E78
    ctx->pc = 0x371d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28280));
label_371d80:
    // 0x371d80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x371d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_371d84:
    // 0x371d84: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x371d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_371d88:
    // 0x371d88: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x371d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_371d8c:
    // 0x371d8c: 0xc0407c0  jal         func_101F00
label_371d90:
    if (ctx->pc == 0x371D90u) {
        ctx->pc = 0x371D90u;
            // 0x371d90: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->pc = 0x371D94u;
        goto label_371d94;
    }
    ctx->pc = 0x371D8Cu;
    SET_GPR_U32(ctx, 31, 0x371D94u);
    ctx->pc = 0x371D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371D8Cu;
            // 0x371d90: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D94u; }
        if (ctx->pc != 0x371D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371D94u; }
        if (ctx->pc != 0x371D94u) { return; }
    }
    ctx->pc = 0x371D94u;
label_371d94:
    // 0x371d94: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x371d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_371d98:
    // 0x371d98: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_371d9c:
    if (ctx->pc == 0x371D9Cu) {
        ctx->pc = 0x371D9Cu;
            // 0x371d9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x371DA0u;
        goto label_371da0;
    }
    ctx->pc = 0x371D98u;
    {
        const bool branch_taken_0x371d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371d98) {
            ctx->pc = 0x371D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371D98u;
            // 0x371d9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371DB4u;
            goto label_371db4;
        }
    }
    ctx->pc = 0x371DA0u;
label_371da0:
    // 0x371da0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_371da4:
    if (ctx->pc == 0x371DA4u) {
        ctx->pc = 0x371DA8u;
        goto label_371da8;
    }
    ctx->pc = 0x371DA0u;
    {
        const bool branch_taken_0x371da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371da0) {
            ctx->pc = 0x371DB0u;
            goto label_371db0;
        }
    }
    ctx->pc = 0x371DA8u;
label_371da8:
    // 0x371da8: 0xc07507c  jal         func_1D41F0
label_371dac:
    if (ctx->pc == 0x371DACu) {
        ctx->pc = 0x371DACu;
            // 0x371dac: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x371DB0u;
        goto label_371db0;
    }
    ctx->pc = 0x371DA8u;
    SET_GPR_U32(ctx, 31, 0x371DB0u);
    ctx->pc = 0x371DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371DA8u;
            // 0x371dac: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DB0u; }
        if (ctx->pc != 0x371DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DB0u; }
        if (ctx->pc != 0x371DB0u) { return; }
    }
    ctx->pc = 0x371DB0u;
label_371db0:
    // 0x371db0: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x371db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_371db4:
    // 0x371db4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_371db8:
    if (ctx->pc == 0x371DB8u) {
        ctx->pc = 0x371DB8u;
            // 0x371db8: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x371DBCu;
        goto label_371dbc;
    }
    ctx->pc = 0x371DB4u;
    {
        const bool branch_taken_0x371db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371db4) {
            ctx->pc = 0x371DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371DB4u;
            // 0x371db8: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371DE4u;
            goto label_371de4;
        }
    }
    ctx->pc = 0x371DBCu;
label_371dbc:
    // 0x371dbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_371dc0:
    if (ctx->pc == 0x371DC0u) {
        ctx->pc = 0x371DC4u;
        goto label_371dc4;
    }
    ctx->pc = 0x371DBCu;
    {
        const bool branch_taken_0x371dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371dbc) {
            ctx->pc = 0x371DE0u;
            goto label_371de0;
        }
    }
    ctx->pc = 0x371DC4u;
label_371dc4:
    // 0x371dc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_371dc8:
    if (ctx->pc == 0x371DC8u) {
        ctx->pc = 0x371DCCu;
        goto label_371dcc;
    }
    ctx->pc = 0x371DC4u;
    {
        const bool branch_taken_0x371dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371dc4) {
            ctx->pc = 0x371DE0u;
            goto label_371de0;
        }
    }
    ctx->pc = 0x371DCCu;
label_371dcc:
    // 0x371dcc: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x371dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_371dd0:
    // 0x371dd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_371dd4:
    if (ctx->pc == 0x371DD4u) {
        ctx->pc = 0x371DD8u;
        goto label_371dd8;
    }
    ctx->pc = 0x371DD0u;
    {
        const bool branch_taken_0x371dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x371dd0) {
            ctx->pc = 0x371DE0u;
            goto label_371de0;
        }
    }
    ctx->pc = 0x371DD8u;
label_371dd8:
    // 0x371dd8: 0xc0400a8  jal         func_1002A0
label_371ddc:
    if (ctx->pc == 0x371DDCu) {
        ctx->pc = 0x371DE0u;
        goto label_371de0;
    }
    ctx->pc = 0x371DD8u;
    SET_GPR_U32(ctx, 31, 0x371DE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DE0u; }
        if (ctx->pc != 0x371DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371DE0u; }
        if (ctx->pc != 0x371DE0u) { return; }
    }
    ctx->pc = 0x371DE0u;
label_371de0:
    // 0x371de0: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x371de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_371de4:
    // 0x371de4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_371de8:
    if (ctx->pc == 0x371DE8u) {
        ctx->pc = 0x371DE8u;
            // 0x371de8: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x371DECu;
        goto label_371dec;
    }
    ctx->pc = 0x371DE4u;
    {
        const bool branch_taken_0x371de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371de4) {
            ctx->pc = 0x371DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371DE4u;
            // 0x371de8: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371E14u;
            goto label_371e14;
        }
    }
    ctx->pc = 0x371DECu;
label_371dec:
    // 0x371dec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_371df0:
    if (ctx->pc == 0x371DF0u) {
        ctx->pc = 0x371DF4u;
        goto label_371df4;
    }
    ctx->pc = 0x371DECu;
    {
        const bool branch_taken_0x371dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371dec) {
            ctx->pc = 0x371E10u;
            goto label_371e10;
        }
    }
    ctx->pc = 0x371DF4u;
label_371df4:
    // 0x371df4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_371df8:
    if (ctx->pc == 0x371DF8u) {
        ctx->pc = 0x371DFCu;
        goto label_371dfc;
    }
    ctx->pc = 0x371DF4u;
    {
        const bool branch_taken_0x371df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371df4) {
            ctx->pc = 0x371E10u;
            goto label_371e10;
        }
    }
    ctx->pc = 0x371DFCu;
label_371dfc:
    // 0x371dfc: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x371dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_371e00:
    // 0x371e00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_371e04:
    if (ctx->pc == 0x371E04u) {
        ctx->pc = 0x371E08u;
        goto label_371e08;
    }
    ctx->pc = 0x371E00u;
    {
        const bool branch_taken_0x371e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x371e00) {
            ctx->pc = 0x371E10u;
            goto label_371e10;
        }
    }
    ctx->pc = 0x371E08u;
label_371e08:
    // 0x371e08: 0xc0400a8  jal         func_1002A0
label_371e0c:
    if (ctx->pc == 0x371E0Cu) {
        ctx->pc = 0x371E10u;
        goto label_371e10;
    }
    ctx->pc = 0x371E08u;
    SET_GPR_U32(ctx, 31, 0x371E10u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E10u; }
        if (ctx->pc != 0x371E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E10u; }
        if (ctx->pc != 0x371E10u) { return; }
    }
    ctx->pc = 0x371E10u;
label_371e10:
    // 0x371e10: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x371e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_371e14:
    // 0x371e14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_371e18:
    if (ctx->pc == 0x371E18u) {
        ctx->pc = 0x371E1Cu;
        goto label_371e1c;
    }
    ctx->pc = 0x371E14u;
    {
        const bool branch_taken_0x371e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371e14) {
            ctx->pc = 0x371E30u;
            goto label_371e30;
        }
    }
    ctx->pc = 0x371E1Cu;
label_371e1c:
    // 0x371e1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x371e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_371e20:
    // 0x371e20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x371e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_371e24:
    // 0x371e24: 0x24636de0  addiu       $v1, $v1, 0x6DE0
    ctx->pc = 0x371e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28128));
label_371e28:
    // 0x371e28: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x371e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_371e2c:
    // 0x371e2c: 0xac406050  sw          $zero, 0x6050($v0)
    ctx->pc = 0x371e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24656), GPR_U32(ctx, 0));
label_371e30:
    // 0x371e30: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_371e34:
    if (ctx->pc == 0x371E34u) {
        ctx->pc = 0x371E34u;
            // 0x371e34: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x371E38u;
        goto label_371e38;
    }
    ctx->pc = 0x371E30u;
    {
        const bool branch_taken_0x371e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x371e30) {
            ctx->pc = 0x371E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371E30u;
            // 0x371e34: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371E8Cu;
            goto label_371e8c;
        }
    }
    ctx->pc = 0x371E38u;
label_371e38:
    // 0x371e38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x371e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_371e3c:
    // 0x371e3c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x371e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_371e40:
    // 0x371e40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x371e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_371e44:
    // 0x371e44: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x371e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_371e48:
    // 0x371e48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_371e4c:
    if (ctx->pc == 0x371E4Cu) {
        ctx->pc = 0x371E4Cu;
            // 0x371e4c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x371E50u;
        goto label_371e50;
    }
    ctx->pc = 0x371E48u;
    {
        const bool branch_taken_0x371e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x371e48) {
            ctx->pc = 0x371E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371E48u;
            // 0x371e4c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371E64u;
            goto label_371e64;
        }
    }
    ctx->pc = 0x371E50u;
label_371e50:
    // 0x371e50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x371e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_371e54:
    // 0x371e54: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x371e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_371e58:
    // 0x371e58: 0x320f809  jalr        $t9
label_371e5c:
    if (ctx->pc == 0x371E5Cu) {
        ctx->pc = 0x371E5Cu;
            // 0x371e5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x371E60u;
        goto label_371e60;
    }
    ctx->pc = 0x371E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x371E60u);
        ctx->pc = 0x371E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371E58u;
            // 0x371e5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x371E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x371E60u; }
            if (ctx->pc != 0x371E60u) { return; }
        }
        }
    }
    ctx->pc = 0x371E60u;
label_371e60:
    // 0x371e60: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x371e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_371e64:
    // 0x371e64: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_371e68:
    if (ctx->pc == 0x371E68u) {
        ctx->pc = 0x371E68u;
            // 0x371e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371E6Cu;
        goto label_371e6c;
    }
    ctx->pc = 0x371E64u;
    {
        const bool branch_taken_0x371e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x371e64) {
            ctx->pc = 0x371E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371E64u;
            // 0x371e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371E80u;
            goto label_371e80;
        }
    }
    ctx->pc = 0x371E6Cu;
label_371e6c:
    // 0x371e6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x371e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_371e70:
    // 0x371e70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x371e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_371e74:
    // 0x371e74: 0x320f809  jalr        $t9
label_371e78:
    if (ctx->pc == 0x371E78u) {
        ctx->pc = 0x371E78u;
            // 0x371e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x371E7Cu;
        goto label_371e7c;
    }
    ctx->pc = 0x371E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x371E7Cu);
        ctx->pc = 0x371E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371E74u;
            // 0x371e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x371E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x371E7Cu; }
            if (ctx->pc != 0x371E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x371E7Cu;
label_371e7c:
    // 0x371e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x371e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371e80:
    // 0x371e80: 0xc075bf8  jal         func_1D6FE0
label_371e84:
    if (ctx->pc == 0x371E84u) {
        ctx->pc = 0x371E84u;
            // 0x371e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371E88u;
        goto label_371e88;
    }
    ctx->pc = 0x371E80u;
    SET_GPR_U32(ctx, 31, 0x371E88u);
    ctx->pc = 0x371E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371E80u;
            // 0x371e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E88u; }
        if (ctx->pc != 0x371E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371E88u; }
        if (ctx->pc != 0x371E88u) { return; }
    }
    ctx->pc = 0x371E88u;
label_371e88:
    // 0x371e88: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x371e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_371e8c:
    // 0x371e8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x371e8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_371e90:
    // 0x371e90: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_371e94:
    if (ctx->pc == 0x371E94u) {
        ctx->pc = 0x371E94u;
            // 0x371e94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371E98u;
        goto label_371e98;
    }
    ctx->pc = 0x371E90u;
    {
        const bool branch_taken_0x371e90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x371e90) {
            ctx->pc = 0x371E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371E90u;
            // 0x371e94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371EA4u;
            goto label_371ea4;
        }
    }
    ctx->pc = 0x371E98u;
label_371e98:
    // 0x371e98: 0xc0400a8  jal         func_1002A0
label_371e9c:
    if (ctx->pc == 0x371E9Cu) {
        ctx->pc = 0x371E9Cu;
            // 0x371e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371EA0u;
        goto label_371ea0;
    }
    ctx->pc = 0x371E98u;
    SET_GPR_U32(ctx, 31, 0x371EA0u);
    ctx->pc = 0x371E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371E98u;
            // 0x371e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371EA0u; }
        if (ctx->pc != 0x371EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371EA0u; }
        if (ctx->pc != 0x371EA0u) { return; }
    }
    ctx->pc = 0x371EA0u;
label_371ea0:
    // 0x371ea0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x371ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371ea4:
    // 0x371ea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x371ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_371ea8:
    // 0x371ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_371eac:
    // 0x371eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_371eb0:
    // 0x371eb0: 0x3e00008  jr          $ra
label_371eb4:
    if (ctx->pc == 0x371EB4u) {
        ctx->pc = 0x371EB4u;
            // 0x371eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x371EB8u;
        goto label_371eb8;
    }
    ctx->pc = 0x371EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371EB0u;
            // 0x371eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371EB8u;
label_371eb8:
    // 0x371eb8: 0x0  nop
    ctx->pc = 0x371eb8u;
    // NOP
label_371ebc:
    // 0x371ebc: 0x0  nop
    ctx->pc = 0x371ebcu;
    // NOP
}
