#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00518940
// Address: 0x518940 - 0x518e40
void sub_00518940_0x518940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00518940_0x518940");
#endif

    switch (ctx->pc) {
        case 0x518940u: goto label_518940;
        case 0x518944u: goto label_518944;
        case 0x518948u: goto label_518948;
        case 0x51894cu: goto label_51894c;
        case 0x518950u: goto label_518950;
        case 0x518954u: goto label_518954;
        case 0x518958u: goto label_518958;
        case 0x51895cu: goto label_51895c;
        case 0x518960u: goto label_518960;
        case 0x518964u: goto label_518964;
        case 0x518968u: goto label_518968;
        case 0x51896cu: goto label_51896c;
        case 0x518970u: goto label_518970;
        case 0x518974u: goto label_518974;
        case 0x518978u: goto label_518978;
        case 0x51897cu: goto label_51897c;
        case 0x518980u: goto label_518980;
        case 0x518984u: goto label_518984;
        case 0x518988u: goto label_518988;
        case 0x51898cu: goto label_51898c;
        case 0x518990u: goto label_518990;
        case 0x518994u: goto label_518994;
        case 0x518998u: goto label_518998;
        case 0x51899cu: goto label_51899c;
        case 0x5189a0u: goto label_5189a0;
        case 0x5189a4u: goto label_5189a4;
        case 0x5189a8u: goto label_5189a8;
        case 0x5189acu: goto label_5189ac;
        case 0x5189b0u: goto label_5189b0;
        case 0x5189b4u: goto label_5189b4;
        case 0x5189b8u: goto label_5189b8;
        case 0x5189bcu: goto label_5189bc;
        case 0x5189c0u: goto label_5189c0;
        case 0x5189c4u: goto label_5189c4;
        case 0x5189c8u: goto label_5189c8;
        case 0x5189ccu: goto label_5189cc;
        case 0x5189d0u: goto label_5189d0;
        case 0x5189d4u: goto label_5189d4;
        case 0x5189d8u: goto label_5189d8;
        case 0x5189dcu: goto label_5189dc;
        case 0x5189e0u: goto label_5189e0;
        case 0x5189e4u: goto label_5189e4;
        case 0x5189e8u: goto label_5189e8;
        case 0x5189ecu: goto label_5189ec;
        case 0x5189f0u: goto label_5189f0;
        case 0x5189f4u: goto label_5189f4;
        case 0x5189f8u: goto label_5189f8;
        case 0x5189fcu: goto label_5189fc;
        case 0x518a00u: goto label_518a00;
        case 0x518a04u: goto label_518a04;
        case 0x518a08u: goto label_518a08;
        case 0x518a0cu: goto label_518a0c;
        case 0x518a10u: goto label_518a10;
        case 0x518a14u: goto label_518a14;
        case 0x518a18u: goto label_518a18;
        case 0x518a1cu: goto label_518a1c;
        case 0x518a20u: goto label_518a20;
        case 0x518a24u: goto label_518a24;
        case 0x518a28u: goto label_518a28;
        case 0x518a2cu: goto label_518a2c;
        case 0x518a30u: goto label_518a30;
        case 0x518a34u: goto label_518a34;
        case 0x518a38u: goto label_518a38;
        case 0x518a3cu: goto label_518a3c;
        case 0x518a40u: goto label_518a40;
        case 0x518a44u: goto label_518a44;
        case 0x518a48u: goto label_518a48;
        case 0x518a4cu: goto label_518a4c;
        case 0x518a50u: goto label_518a50;
        case 0x518a54u: goto label_518a54;
        case 0x518a58u: goto label_518a58;
        case 0x518a5cu: goto label_518a5c;
        case 0x518a60u: goto label_518a60;
        case 0x518a64u: goto label_518a64;
        case 0x518a68u: goto label_518a68;
        case 0x518a6cu: goto label_518a6c;
        case 0x518a70u: goto label_518a70;
        case 0x518a74u: goto label_518a74;
        case 0x518a78u: goto label_518a78;
        case 0x518a7cu: goto label_518a7c;
        case 0x518a80u: goto label_518a80;
        case 0x518a84u: goto label_518a84;
        case 0x518a88u: goto label_518a88;
        case 0x518a8cu: goto label_518a8c;
        case 0x518a90u: goto label_518a90;
        case 0x518a94u: goto label_518a94;
        case 0x518a98u: goto label_518a98;
        case 0x518a9cu: goto label_518a9c;
        case 0x518aa0u: goto label_518aa0;
        case 0x518aa4u: goto label_518aa4;
        case 0x518aa8u: goto label_518aa8;
        case 0x518aacu: goto label_518aac;
        case 0x518ab0u: goto label_518ab0;
        case 0x518ab4u: goto label_518ab4;
        case 0x518ab8u: goto label_518ab8;
        case 0x518abcu: goto label_518abc;
        case 0x518ac0u: goto label_518ac0;
        case 0x518ac4u: goto label_518ac4;
        case 0x518ac8u: goto label_518ac8;
        case 0x518accu: goto label_518acc;
        case 0x518ad0u: goto label_518ad0;
        case 0x518ad4u: goto label_518ad4;
        case 0x518ad8u: goto label_518ad8;
        case 0x518adcu: goto label_518adc;
        case 0x518ae0u: goto label_518ae0;
        case 0x518ae4u: goto label_518ae4;
        case 0x518ae8u: goto label_518ae8;
        case 0x518aecu: goto label_518aec;
        case 0x518af0u: goto label_518af0;
        case 0x518af4u: goto label_518af4;
        case 0x518af8u: goto label_518af8;
        case 0x518afcu: goto label_518afc;
        case 0x518b00u: goto label_518b00;
        case 0x518b04u: goto label_518b04;
        case 0x518b08u: goto label_518b08;
        case 0x518b0cu: goto label_518b0c;
        case 0x518b10u: goto label_518b10;
        case 0x518b14u: goto label_518b14;
        case 0x518b18u: goto label_518b18;
        case 0x518b1cu: goto label_518b1c;
        case 0x518b20u: goto label_518b20;
        case 0x518b24u: goto label_518b24;
        case 0x518b28u: goto label_518b28;
        case 0x518b2cu: goto label_518b2c;
        case 0x518b30u: goto label_518b30;
        case 0x518b34u: goto label_518b34;
        case 0x518b38u: goto label_518b38;
        case 0x518b3cu: goto label_518b3c;
        case 0x518b40u: goto label_518b40;
        case 0x518b44u: goto label_518b44;
        case 0x518b48u: goto label_518b48;
        case 0x518b4cu: goto label_518b4c;
        case 0x518b50u: goto label_518b50;
        case 0x518b54u: goto label_518b54;
        case 0x518b58u: goto label_518b58;
        case 0x518b5cu: goto label_518b5c;
        case 0x518b60u: goto label_518b60;
        case 0x518b64u: goto label_518b64;
        case 0x518b68u: goto label_518b68;
        case 0x518b6cu: goto label_518b6c;
        case 0x518b70u: goto label_518b70;
        case 0x518b74u: goto label_518b74;
        case 0x518b78u: goto label_518b78;
        case 0x518b7cu: goto label_518b7c;
        case 0x518b80u: goto label_518b80;
        case 0x518b84u: goto label_518b84;
        case 0x518b88u: goto label_518b88;
        case 0x518b8cu: goto label_518b8c;
        case 0x518b90u: goto label_518b90;
        case 0x518b94u: goto label_518b94;
        case 0x518b98u: goto label_518b98;
        case 0x518b9cu: goto label_518b9c;
        case 0x518ba0u: goto label_518ba0;
        case 0x518ba4u: goto label_518ba4;
        case 0x518ba8u: goto label_518ba8;
        case 0x518bacu: goto label_518bac;
        case 0x518bb0u: goto label_518bb0;
        case 0x518bb4u: goto label_518bb4;
        case 0x518bb8u: goto label_518bb8;
        case 0x518bbcu: goto label_518bbc;
        case 0x518bc0u: goto label_518bc0;
        case 0x518bc4u: goto label_518bc4;
        case 0x518bc8u: goto label_518bc8;
        case 0x518bccu: goto label_518bcc;
        case 0x518bd0u: goto label_518bd0;
        case 0x518bd4u: goto label_518bd4;
        case 0x518bd8u: goto label_518bd8;
        case 0x518bdcu: goto label_518bdc;
        case 0x518be0u: goto label_518be0;
        case 0x518be4u: goto label_518be4;
        case 0x518be8u: goto label_518be8;
        case 0x518becu: goto label_518bec;
        case 0x518bf0u: goto label_518bf0;
        case 0x518bf4u: goto label_518bf4;
        case 0x518bf8u: goto label_518bf8;
        case 0x518bfcu: goto label_518bfc;
        case 0x518c00u: goto label_518c00;
        case 0x518c04u: goto label_518c04;
        case 0x518c08u: goto label_518c08;
        case 0x518c0cu: goto label_518c0c;
        case 0x518c10u: goto label_518c10;
        case 0x518c14u: goto label_518c14;
        case 0x518c18u: goto label_518c18;
        case 0x518c1cu: goto label_518c1c;
        case 0x518c20u: goto label_518c20;
        case 0x518c24u: goto label_518c24;
        case 0x518c28u: goto label_518c28;
        case 0x518c2cu: goto label_518c2c;
        case 0x518c30u: goto label_518c30;
        case 0x518c34u: goto label_518c34;
        case 0x518c38u: goto label_518c38;
        case 0x518c3cu: goto label_518c3c;
        case 0x518c40u: goto label_518c40;
        case 0x518c44u: goto label_518c44;
        case 0x518c48u: goto label_518c48;
        case 0x518c4cu: goto label_518c4c;
        case 0x518c50u: goto label_518c50;
        case 0x518c54u: goto label_518c54;
        case 0x518c58u: goto label_518c58;
        case 0x518c5cu: goto label_518c5c;
        case 0x518c60u: goto label_518c60;
        case 0x518c64u: goto label_518c64;
        case 0x518c68u: goto label_518c68;
        case 0x518c6cu: goto label_518c6c;
        case 0x518c70u: goto label_518c70;
        case 0x518c74u: goto label_518c74;
        case 0x518c78u: goto label_518c78;
        case 0x518c7cu: goto label_518c7c;
        case 0x518c80u: goto label_518c80;
        case 0x518c84u: goto label_518c84;
        case 0x518c88u: goto label_518c88;
        case 0x518c8cu: goto label_518c8c;
        case 0x518c90u: goto label_518c90;
        case 0x518c94u: goto label_518c94;
        case 0x518c98u: goto label_518c98;
        case 0x518c9cu: goto label_518c9c;
        case 0x518ca0u: goto label_518ca0;
        case 0x518ca4u: goto label_518ca4;
        case 0x518ca8u: goto label_518ca8;
        case 0x518cacu: goto label_518cac;
        case 0x518cb0u: goto label_518cb0;
        case 0x518cb4u: goto label_518cb4;
        case 0x518cb8u: goto label_518cb8;
        case 0x518cbcu: goto label_518cbc;
        case 0x518cc0u: goto label_518cc0;
        case 0x518cc4u: goto label_518cc4;
        case 0x518cc8u: goto label_518cc8;
        case 0x518cccu: goto label_518ccc;
        case 0x518cd0u: goto label_518cd0;
        case 0x518cd4u: goto label_518cd4;
        case 0x518cd8u: goto label_518cd8;
        case 0x518cdcu: goto label_518cdc;
        case 0x518ce0u: goto label_518ce0;
        case 0x518ce4u: goto label_518ce4;
        case 0x518ce8u: goto label_518ce8;
        case 0x518cecu: goto label_518cec;
        case 0x518cf0u: goto label_518cf0;
        case 0x518cf4u: goto label_518cf4;
        case 0x518cf8u: goto label_518cf8;
        case 0x518cfcu: goto label_518cfc;
        case 0x518d00u: goto label_518d00;
        case 0x518d04u: goto label_518d04;
        case 0x518d08u: goto label_518d08;
        case 0x518d0cu: goto label_518d0c;
        case 0x518d10u: goto label_518d10;
        case 0x518d14u: goto label_518d14;
        case 0x518d18u: goto label_518d18;
        case 0x518d1cu: goto label_518d1c;
        case 0x518d20u: goto label_518d20;
        case 0x518d24u: goto label_518d24;
        case 0x518d28u: goto label_518d28;
        case 0x518d2cu: goto label_518d2c;
        case 0x518d30u: goto label_518d30;
        case 0x518d34u: goto label_518d34;
        case 0x518d38u: goto label_518d38;
        case 0x518d3cu: goto label_518d3c;
        case 0x518d40u: goto label_518d40;
        case 0x518d44u: goto label_518d44;
        case 0x518d48u: goto label_518d48;
        case 0x518d4cu: goto label_518d4c;
        case 0x518d50u: goto label_518d50;
        case 0x518d54u: goto label_518d54;
        case 0x518d58u: goto label_518d58;
        case 0x518d5cu: goto label_518d5c;
        case 0x518d60u: goto label_518d60;
        case 0x518d64u: goto label_518d64;
        case 0x518d68u: goto label_518d68;
        case 0x518d6cu: goto label_518d6c;
        case 0x518d70u: goto label_518d70;
        case 0x518d74u: goto label_518d74;
        case 0x518d78u: goto label_518d78;
        case 0x518d7cu: goto label_518d7c;
        case 0x518d80u: goto label_518d80;
        case 0x518d84u: goto label_518d84;
        case 0x518d88u: goto label_518d88;
        case 0x518d8cu: goto label_518d8c;
        case 0x518d90u: goto label_518d90;
        case 0x518d94u: goto label_518d94;
        case 0x518d98u: goto label_518d98;
        case 0x518d9cu: goto label_518d9c;
        case 0x518da0u: goto label_518da0;
        case 0x518da4u: goto label_518da4;
        case 0x518da8u: goto label_518da8;
        case 0x518dacu: goto label_518dac;
        case 0x518db0u: goto label_518db0;
        case 0x518db4u: goto label_518db4;
        case 0x518db8u: goto label_518db8;
        case 0x518dbcu: goto label_518dbc;
        case 0x518dc0u: goto label_518dc0;
        case 0x518dc4u: goto label_518dc4;
        case 0x518dc8u: goto label_518dc8;
        case 0x518dccu: goto label_518dcc;
        case 0x518dd0u: goto label_518dd0;
        case 0x518dd4u: goto label_518dd4;
        case 0x518dd8u: goto label_518dd8;
        case 0x518ddcu: goto label_518ddc;
        case 0x518de0u: goto label_518de0;
        case 0x518de4u: goto label_518de4;
        case 0x518de8u: goto label_518de8;
        case 0x518decu: goto label_518dec;
        case 0x518df0u: goto label_518df0;
        case 0x518df4u: goto label_518df4;
        case 0x518df8u: goto label_518df8;
        case 0x518dfcu: goto label_518dfc;
        case 0x518e00u: goto label_518e00;
        case 0x518e04u: goto label_518e04;
        case 0x518e08u: goto label_518e08;
        case 0x518e0cu: goto label_518e0c;
        case 0x518e10u: goto label_518e10;
        case 0x518e14u: goto label_518e14;
        case 0x518e18u: goto label_518e18;
        case 0x518e1cu: goto label_518e1c;
        case 0x518e20u: goto label_518e20;
        case 0x518e24u: goto label_518e24;
        case 0x518e28u: goto label_518e28;
        case 0x518e2cu: goto label_518e2c;
        case 0x518e30u: goto label_518e30;
        case 0x518e34u: goto label_518e34;
        case 0x518e38u: goto label_518e38;
        case 0x518e3cu: goto label_518e3c;
        default: break;
    }

    ctx->pc = 0x518940u;

label_518940:
    // 0x518940: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x518940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_518944:
    // 0x518944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x518944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_518948:
    // 0x518948: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x518948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_51894c:
    // 0x51894c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_518950:
    // 0x518950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x518950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_518954:
    // 0x518954: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x518954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_518958:
    // 0x518958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x518958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51895c:
    // 0x51895c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_518960:
    // 0x518960: 0x8cb20024  lw          $s2, 0x24($a1)
    ctx->pc = 0x518960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_518964:
    // 0x518964: 0x8e510d7c  lw          $s1, 0xD7C($s2)
    ctx->pc = 0x518964u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3452)));
label_518968:
    // 0x518968: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x518968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_51896c:
    // 0x51896c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x51896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_518970:
    // 0x518970: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x518970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_518974:
    // 0x518974: 0xc04f278  jal         func_13C9E0
label_518978:
    if (ctx->pc == 0x518978u) {
        ctx->pc = 0x518978u;
            // 0x518978: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x51897Cu;
        goto label_51897c;
    }
    ctx->pc = 0x518974u;
    SET_GPR_U32(ctx, 31, 0x51897Cu);
    ctx->pc = 0x518978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518974u;
            // 0x518978: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51897Cu; }
        if (ctx->pc != 0x51897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51897Cu; }
        if (ctx->pc != 0x51897Cu) { return; }
    }
    ctx->pc = 0x51897Cu;
label_51897c:
    // 0x51897c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x51897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_518980:
    // 0x518980: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x518980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_518984:
    // 0x518984: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x518984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_518988:
    // 0x518988: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x518988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_51898c:
    // 0x51898c: 0xc04ce50  jal         func_133940
label_518990:
    if (ctx->pc == 0x518990u) {
        ctx->pc = 0x518990u;
            // 0x518990: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x518994u;
        goto label_518994;
    }
    ctx->pc = 0x51898Cu;
    SET_GPR_U32(ctx, 31, 0x518994u);
    ctx->pc = 0x518990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51898Cu;
            // 0x518990: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518994u; }
        if (ctx->pc != 0x518994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518994u; }
        if (ctx->pc != 0x518994u) { return; }
    }
    ctx->pc = 0x518994u;
label_518994:
    // 0x518994: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x518994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_518998:
    // 0x518998: 0xc04ce80  jal         func_133A00
label_51899c:
    if (ctx->pc == 0x51899Cu) {
        ctx->pc = 0x51899Cu;
            // 0x51899c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x5189A0u;
        goto label_5189a0;
    }
    ctx->pc = 0x518998u;
    SET_GPR_U32(ctx, 31, 0x5189A0u);
    ctx->pc = 0x51899Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518998u;
            // 0x51899c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189A0u; }
        if (ctx->pc != 0x5189A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189A0u; }
        if (ctx->pc != 0x5189A0u) { return; }
    }
    ctx->pc = 0x5189A0u;
label_5189a0:
    // 0x5189a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x5189a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5189a4:
    // 0x5189a4: 0xc04ccf4  jal         func_1333D0
label_5189a8:
    if (ctx->pc == 0x5189A8u) {
        ctx->pc = 0x5189A8u;
            // 0x5189a8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x5189ACu;
        goto label_5189ac;
    }
    ctx->pc = 0x5189A4u;
    SET_GPR_U32(ctx, 31, 0x5189ACu);
    ctx->pc = 0x5189A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5189A4u;
            // 0x5189a8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189ACu; }
        if (ctx->pc != 0x5189ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189ACu; }
        if (ctx->pc != 0x5189ACu) { return; }
    }
    ctx->pc = 0x5189ACu;
label_5189ac:
    // 0x5189ac: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5189acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_5189b0:
    // 0x5189b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x5189b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5189b4:
    // 0x5189b4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x5189b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5189b8:
    // 0x5189b8: 0xc04cca0  jal         func_133280
label_5189bc:
    if (ctx->pc == 0x5189BCu) {
        ctx->pc = 0x5189BCu;
            // 0x5189bc: 0x24c6c080  addiu       $a2, $a2, -0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951040));
        ctx->pc = 0x5189C0u;
        goto label_5189c0;
    }
    ctx->pc = 0x5189B8u;
    SET_GPR_U32(ctx, 31, 0x5189C0u);
    ctx->pc = 0x5189BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5189B8u;
            // 0x5189bc: 0x24c6c080  addiu       $a2, $a2, -0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189C0u; }
        if (ctx->pc != 0x5189C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189C0u; }
        if (ctx->pc != 0x5189C0u) { return; }
    }
    ctx->pc = 0x5189C0u;
label_5189c0:
    // 0x5189c0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x5189c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_5189c4:
    // 0x5189c4: 0xc04cc04  jal         func_133010
label_5189c8:
    if (ctx->pc == 0x5189C8u) {
        ctx->pc = 0x5189C8u;
            // 0x5189c8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5189CCu;
        goto label_5189cc;
    }
    ctx->pc = 0x5189C4u;
    SET_GPR_U32(ctx, 31, 0x5189CCu);
    ctx->pc = 0x5189C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5189C4u;
            // 0x5189c8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189CCu; }
        if (ctx->pc != 0x5189CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189CCu; }
        if (ctx->pc != 0x5189CCu) { return; }
    }
    ctx->pc = 0x5189CCu;
label_5189cc:
    // 0x5189cc: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x5189ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_5189d0:
    // 0x5189d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5189d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5189d4:
    // 0x5189d4: 0xc04cca0  jal         func_133280
label_5189d8:
    if (ctx->pc == 0x5189D8u) {
        ctx->pc = 0x5189D8u;
            // 0x5189d8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5189DCu;
        goto label_5189dc;
    }
    ctx->pc = 0x5189D4u;
    SET_GPR_U32(ctx, 31, 0x5189DCu);
    ctx->pc = 0x5189D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5189D4u;
            // 0x5189d8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189DCu; }
        if (ctx->pc != 0x5189DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5189DCu; }
        if (ctx->pc != 0x5189DCu) { return; }
    }
    ctx->pc = 0x5189DCu;
label_5189dc:
    // 0x5189dc: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x5189dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5189e0:
    // 0x5189e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5189e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5189e4:
    // 0x5189e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x5189e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5189e8:
    // 0x5189e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x5189e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_5189ec:
    // 0x5189ec: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x5189ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_5189f0:
    // 0x5189f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5189f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5189f4:
    // 0x5189f4: 0x0  nop
    ctx->pc = 0x5189f4u;
    // NOP
label_5189f8:
    // 0x5189f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x5189f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_5189fc:
    // 0x5189fc: 0x0  nop
    ctx->pc = 0x5189fcu;
    // NOP
label_518a00:
    // 0x518a00: 0x0  nop
    ctx->pc = 0x518a00u;
    // NOP
label_518a04:
    // 0x518a04: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x518a04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518a08:
    // 0x518a08: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_518a0c:
    if (ctx->pc == 0x518A0Cu) {
        ctx->pc = 0x518A0Cu;
            // 0x518a0c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x518A10u;
        goto label_518a10;
    }
    ctx->pc = 0x518A08u;
    {
        const bool branch_taken_0x518a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x518a08) {
            ctx->pc = 0x518A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518A08u;
            // 0x518a0c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518A2Cu;
            goto label_518a2c;
        }
    }
    ctx->pc = 0x518A10u;
label_518a10:
    // 0x518a10: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x518a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_518a14:
    // 0x518a14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x518a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_518a18:
    // 0x518a18: 0x0  nop
    ctx->pc = 0x518a18u;
    // NOP
label_518a1c:
    // 0x518a1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x518a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518a20:
    // 0x518a20: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_518a24:
    if (ctx->pc == 0x518A24u) {
        ctx->pc = 0x518A24u;
            // 0x518a24: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x518A28u;
        goto label_518a28;
    }
    ctx->pc = 0x518A20u;
    {
        const bool branch_taken_0x518a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x518a20) {
            ctx->pc = 0x518A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518A20u;
            // 0x518a24: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518A34u;
            goto label_518a34;
        }
    }
    ctx->pc = 0x518A28u;
label_518a28:
    // 0x518a28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x518a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_518a2c:
    // 0x518a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x518a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_518a30:
    // 0x518a30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x518a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_518a34:
    // 0x518a34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x518a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_518a38:
    // 0x518a38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x518a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_518a3c:
    // 0x518a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x518a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_518a40:
    // 0x518a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_518a44:
    // 0x518a44: 0x3e00008  jr          $ra
label_518a48:
    if (ctx->pc == 0x518A48u) {
        ctx->pc = 0x518A48u;
            // 0x518a48: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x518A4Cu;
        goto label_518a4c;
    }
    ctx->pc = 0x518A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518A44u;
            // 0x518a48: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518A4Cu;
label_518a4c:
    // 0x518a4c: 0x0  nop
    ctx->pc = 0x518a4cu;
    // NOP
label_518a50:
    // 0x518a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x518a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_518a54:
    // 0x518a54: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x518a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_518a58:
    // 0x518a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x518a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_518a5c:
    // 0x518a5c: 0x24421ae0  addiu       $v0, $v0, 0x1AE0
    ctx->pc = 0x518a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_518a60:
    // 0x518a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x518a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_518a64:
    // 0x518a64: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x518a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_518a68:
    // 0x518a68: 0x8c660d74  lw          $a2, 0xD74($v1)
    ctx->pc = 0x518a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
label_518a6c:
    // 0x518a6c: 0x90c302c5  lbu         $v1, 0x2C5($a2)
    ctx->pc = 0x518a6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 709)));
label_518a70:
    // 0x518a70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x518a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_518a74:
    // 0x518a74: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x518a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_518a78:
    // 0x518a78: 0x90660284  lbu         $a2, 0x284($v1)
    ctx->pc = 0x518a78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 644)));
label_518a7c:
    // 0x518a7c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x518a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_518a80:
    // 0x518a80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x518a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_518a84:
    // 0x518a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x518a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_518a88:
    // 0x518a88: 0xc146250  jal         func_518940
label_518a8c:
    if (ctx->pc == 0x518A8Cu) {
        ctx->pc = 0x518A8Cu;
            // 0x518a8c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x518A90u;
        goto label_518a90;
    }
    ctx->pc = 0x518A88u;
    SET_GPR_U32(ctx, 31, 0x518A90u);
    ctx->pc = 0x518A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518A88u;
            // 0x518a8c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518940u;
    goto label_518940;
    ctx->pc = 0x518A90u;
label_518a90:
    // 0x518a90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x518a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_518a94:
    // 0x518a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x518a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_518a98:
    // 0x518a98: 0x0  nop
    ctx->pc = 0x518a98u;
    // NOP
label_518a9c:
    // 0x518a9c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x518a9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518aa0:
    // 0x518aa0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_518aa4:
    if (ctx->pc == 0x518AA4u) {
        ctx->pc = 0x518AA4u;
            // 0x518aa4: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x518AA8u;
        goto label_518aa8;
    }
    ctx->pc = 0x518AA0u;
    {
        const bool branch_taken_0x518aa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x518aa0) {
            ctx->pc = 0x518AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518AA0u;
            // 0x518aa4: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x518AB0u;
            goto label_518ab0;
        }
    }
    ctx->pc = 0x518AA8u;
label_518aa8:
    // 0x518aa8: 0x10000010  b           . + 4 + (0x10 << 2)
label_518aac:
    if (ctx->pc == 0x518AACu) {
        ctx->pc = 0x518AACu;
            // 0x518aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x518AB0u;
        goto label_518ab0;
    }
    ctx->pc = 0x518AA8u;
    {
        const bool branch_taken_0x518aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518AA8u;
            // 0x518aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518aa8) {
            ctx->pc = 0x518AECu;
            goto label_518aec;
        }
    }
    ctx->pc = 0x518AB0u;
label_518ab0:
    // 0x518ab0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x518ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518ab4:
    // 0x518ab4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_518ab8:
    if (ctx->pc == 0x518AB8u) {
        ctx->pc = 0x518AB8u;
            // 0x518ab8: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x518ABCu;
        goto label_518abc;
    }
    ctx->pc = 0x518AB4u;
    {
        const bool branch_taken_0x518ab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x518ab4) {
            ctx->pc = 0x518AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518AB4u;
            // 0x518ab8: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x518AC4u;
            goto label_518ac4;
        }
    }
    ctx->pc = 0x518ABCu;
label_518abc:
    // 0x518abc: 0x1000000b  b           . + 4 + (0xB << 2)
label_518ac0:
    if (ctx->pc == 0x518AC0u) {
        ctx->pc = 0x518AC0u;
            // 0x518ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518AC4u;
        goto label_518ac4;
    }
    ctx->pc = 0x518ABCu;
    {
        const bool branch_taken_0x518abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518ABCu;
            // 0x518ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518abc) {
            ctx->pc = 0x518AECu;
            goto label_518aec;
        }
    }
    ctx->pc = 0x518AC4u;
label_518ac4:
    // 0x518ac4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x518ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518ac8:
    // 0x518ac8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_518acc:
    if (ctx->pc == 0x518ACCu) {
        ctx->pc = 0x518ACCu;
            // 0x518acc: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x518AD0u;
        goto label_518ad0;
    }
    ctx->pc = 0x518AC8u;
    {
        const bool branch_taken_0x518ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x518ac8) {
            ctx->pc = 0x518ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518AC8u;
            // 0x518acc: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x518AD8u;
            goto label_518ad8;
        }
    }
    ctx->pc = 0x518AD0u;
label_518ad0:
    // 0x518ad0: 0x10000006  b           . + 4 + (0x6 << 2)
label_518ad4:
    if (ctx->pc == 0x518AD4u) {
        ctx->pc = 0x518AD4u;
            // 0x518ad4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x518AD8u;
        goto label_518ad8;
    }
    ctx->pc = 0x518AD0u;
    {
        const bool branch_taken_0x518ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518AD0u;
            // 0x518ad4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518ad0) {
            ctx->pc = 0x518AECu;
            goto label_518aec;
        }
    }
    ctx->pc = 0x518AD8u;
label_518ad8:
    // 0x518ad8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x518ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518adc:
    // 0x518adc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_518ae0:
    if (ctx->pc == 0x518AE0u) {
        ctx->pc = 0x518AE0u;
            // 0x518ae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x518AE4u;
        goto label_518ae4;
    }
    ctx->pc = 0x518ADCu;
    {
        const bool branch_taken_0x518adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x518adc) {
            ctx->pc = 0x518AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518ADCu;
            // 0x518ae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518AECu;
            goto label_518aec;
        }
    }
    ctx->pc = 0x518AE4u;
label_518ae4:
    // 0x518ae4: 0x10000001  b           . + 4 + (0x1 << 2)
label_518ae8:
    if (ctx->pc == 0x518AE8u) {
        ctx->pc = 0x518AE8u;
            // 0x518ae8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x518AECu;
        goto label_518aec;
    }
    ctx->pc = 0x518AE4u;
    {
        const bool branch_taken_0x518ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518AE4u;
            // 0x518ae8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518ae4) {
            ctx->pc = 0x518AECu;
            goto label_518aec;
        }
    }
    ctx->pc = 0x518AECu;
label_518aec:
    // 0x518aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x518aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_518af0:
    // 0x518af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_518af4:
    // 0x518af4: 0x3e00008  jr          $ra
label_518af8:
    if (ctx->pc == 0x518AF8u) {
        ctx->pc = 0x518AF8u;
            // 0x518af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x518AFCu;
        goto label_518afc;
    }
    ctx->pc = 0x518AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518AF4u;
            // 0x518af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518AFCu;
label_518afc:
    // 0x518afc: 0x0  nop
    ctx->pc = 0x518afcu;
    // NOP
label_518b00:
    // 0x518b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x518b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_518b04:
    // 0x518b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x518b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_518b08:
    // 0x518b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x518b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_518b0c:
    // 0x518b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x518b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_518b10:
    // 0x518b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x518b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_518b14:
    // 0x518b14: 0xc146250  jal         func_518940
label_518b18:
    if (ctx->pc == 0x518B18u) {
        ctx->pc = 0x518B18u;
            // 0x518b18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518B1Cu;
        goto label_518b1c;
    }
    ctx->pc = 0x518B14u;
    SET_GPR_U32(ctx, 31, 0x518B1Cu);
    ctx->pc = 0x518B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518B14u;
            // 0x518b18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518940u;
    goto label_518940;
    ctx->pc = 0x518B1Cu;
label_518b1c:
    // 0x518b1c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x518b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_518b20:
    // 0x518b20: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_518b24:
    if (ctx->pc == 0x518B24u) {
        ctx->pc = 0x518B24u;
            // 0x518b24: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x518B28u;
        goto label_518b28;
    }
    ctx->pc = 0x518B20u;
    {
        const bool branch_taken_0x518b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x518b20) {
            ctx->pc = 0x518B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518B20u;
            // 0x518b24: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518B40u;
            goto label_518b40;
        }
    }
    ctx->pc = 0x518B28u;
label_518b28:
    // 0x518b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x518b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_518b2c:
    // 0x518b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x518b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518b30:
    // 0x518b30: 0xc1427f0  jal         func_509FC0
label_518b34:
    if (ctx->pc == 0x518B34u) {
        ctx->pc = 0x518B34u;
            // 0x518b34: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x518B38u;
        goto label_518b38;
    }
    ctx->pc = 0x518B30u;
    SET_GPR_U32(ctx, 31, 0x518B38u);
    ctx->pc = 0x518B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518B30u;
            // 0x518b34: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509FC0u;
    if (runtime->hasFunction(0x509FC0u)) {
        auto targetFn = runtime->lookupFunction(0x509FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518B38u; }
        if (ctx->pc != 0x518B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509FC0_0x509fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518B38u; }
        if (ctx->pc != 0x518B38u) { return; }
    }
    ctx->pc = 0x518B38u;
label_518b38:
    // 0x518b38: 0x10000006  b           . + 4 + (0x6 << 2)
label_518b3c:
    if (ctx->pc == 0x518B3Cu) {
        ctx->pc = 0x518B3Cu;
            // 0x518b3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x518B40u;
        goto label_518b40;
    }
    ctx->pc = 0x518B38u;
    {
        const bool branch_taken_0x518b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518B38u;
            // 0x518b3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518b38) {
            ctx->pc = 0x518B54u;
            goto label_518b54;
        }
    }
    ctx->pc = 0x518B40u;
label_518b40:
    // 0x518b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x518b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_518b44:
    // 0x518b44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x518b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_518b48:
    // 0x518b48: 0xc1427f0  jal         func_509FC0
label_518b4c:
    if (ctx->pc == 0x518B4Cu) {
        ctx->pc = 0x518B4Cu;
            // 0x518b4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518B50u;
        goto label_518b50;
    }
    ctx->pc = 0x518B48u;
    SET_GPR_U32(ctx, 31, 0x518B50u);
    ctx->pc = 0x518B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518B48u;
            // 0x518b4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509FC0u;
    if (runtime->hasFunction(0x509FC0u)) {
        auto targetFn = runtime->lookupFunction(0x509FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518B50u; }
        if (ctx->pc != 0x518B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509FC0_0x509fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518B50u; }
        if (ctx->pc != 0x518B50u) { return; }
    }
    ctx->pc = 0x518B50u;
label_518b50:
    // 0x518b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x518b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_518b54:
    // 0x518b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x518b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_518b58:
    // 0x518b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_518b5c:
    // 0x518b5c: 0x3e00008  jr          $ra
label_518b60:
    if (ctx->pc == 0x518B60u) {
        ctx->pc = 0x518B60u;
            // 0x518b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x518B64u;
        goto label_518b64;
    }
    ctx->pc = 0x518B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518B5Cu;
            // 0x518b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518B64u;
label_518b64:
    // 0x518b64: 0x0  nop
    ctx->pc = 0x518b64u;
    // NOP
label_518b68:
    // 0x518b68: 0x0  nop
    ctx->pc = 0x518b68u;
    // NOP
label_518b6c:
    // 0x518b6c: 0x0  nop
    ctx->pc = 0x518b6cu;
    // NOP
label_518b70:
    // 0x518b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x518b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_518b74:
    // 0x518b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x518b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_518b78:
    // 0x518b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x518b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_518b7c:
    // 0x518b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x518b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_518b80:
    // 0x518b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x518b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_518b84:
    // 0x518b84: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_518b88:
    if (ctx->pc == 0x518B88u) {
        ctx->pc = 0x518B88u;
            // 0x518b88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518B8Cu;
        goto label_518b8c;
    }
    ctx->pc = 0x518B84u;
    {
        const bool branch_taken_0x518b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x518B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518B84u;
            // 0x518b88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518b84) {
            ctx->pc = 0x518BE0u;
            goto label_518be0;
        }
    }
    ctx->pc = 0x518B8Cu;
label_518b8c:
    // 0x518b8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x518b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_518b90:
    // 0x518b90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x518b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_518b94:
    // 0x518b94: 0x246356f0  addiu       $v1, $v1, 0x56F0
    ctx->pc = 0x518b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22256));
label_518b98:
    // 0x518b98: 0x24425728  addiu       $v0, $v0, 0x5728
    ctx->pc = 0x518b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22312));
label_518b9c:
    // 0x518b9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x518b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_518ba0:
    // 0x518ba0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_518ba4:
    if (ctx->pc == 0x518BA4u) {
        ctx->pc = 0x518BA4u;
            // 0x518ba4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x518BA8u;
        goto label_518ba8;
    }
    ctx->pc = 0x518BA0u;
    {
        const bool branch_taken_0x518ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x518BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518BA0u;
            // 0x518ba4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518ba0) {
            ctx->pc = 0x518BC8u;
            goto label_518bc8;
        }
    }
    ctx->pc = 0x518BA8u;
label_518ba8:
    // 0x518ba8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x518ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_518bac:
    // 0x518bac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x518bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_518bb0:
    // 0x518bb0: 0x246310c0  addiu       $v1, $v1, 0x10C0
    ctx->pc = 0x518bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4288));
label_518bb4:
    // 0x518bb4: 0x244210f8  addiu       $v0, $v0, 0x10F8
    ctx->pc = 0x518bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4344));
label_518bb8:
    // 0x518bb8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x518bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_518bbc:
    // 0x518bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x518bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_518bc0:
    // 0x518bc0: 0xc0b10b4  jal         func_2C42D0
label_518bc4:
    if (ctx->pc == 0x518BC4u) {
        ctx->pc = 0x518BC4u;
            // 0x518bc4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x518BC8u;
        goto label_518bc8;
    }
    ctx->pc = 0x518BC0u;
    SET_GPR_U32(ctx, 31, 0x518BC8u);
    ctx->pc = 0x518BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518BC0u;
            // 0x518bc4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C42D0u;
    if (runtime->hasFunction(0x2C42D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C42D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518BC8u; }
        if (ctx->pc != 0x518BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C42D0_0x2c42d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518BC8u; }
        if (ctx->pc != 0x518BC8u) { return; }
    }
    ctx->pc = 0x518BC8u;
label_518bc8:
    // 0x518bc8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x518bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_518bcc:
    // 0x518bcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x518bccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_518bd0:
    // 0x518bd0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_518bd4:
    if (ctx->pc == 0x518BD4u) {
        ctx->pc = 0x518BD4u;
            // 0x518bd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518BD8u;
        goto label_518bd8;
    }
    ctx->pc = 0x518BD0u;
    {
        const bool branch_taken_0x518bd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x518bd0) {
            ctx->pc = 0x518BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518BD0u;
            // 0x518bd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518BE4u;
            goto label_518be4;
        }
    }
    ctx->pc = 0x518BD8u;
label_518bd8:
    // 0x518bd8: 0xc0400a8  jal         func_1002A0
label_518bdc:
    if (ctx->pc == 0x518BDCu) {
        ctx->pc = 0x518BDCu;
            // 0x518bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518BE0u;
        goto label_518be0;
    }
    ctx->pc = 0x518BD8u;
    SET_GPR_U32(ctx, 31, 0x518BE0u);
    ctx->pc = 0x518BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518BD8u;
            // 0x518bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518BE0u; }
        if (ctx->pc != 0x518BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518BE0u; }
        if (ctx->pc != 0x518BE0u) { return; }
    }
    ctx->pc = 0x518BE0u;
label_518be0:
    // 0x518be0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x518be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518be4:
    // 0x518be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x518be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_518be8:
    // 0x518be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x518be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_518bec:
    // 0x518bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_518bf0:
    // 0x518bf0: 0x3e00008  jr          $ra
label_518bf4:
    if (ctx->pc == 0x518BF4u) {
        ctx->pc = 0x518BF4u;
            // 0x518bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x518BF8u;
        goto label_518bf8;
    }
    ctx->pc = 0x518BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518BF0u;
            // 0x518bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518BF8u;
label_518bf8:
    // 0x518bf8: 0x0  nop
    ctx->pc = 0x518bf8u;
    // NOP
label_518bfc:
    // 0x518bfc: 0x0  nop
    ctx->pc = 0x518bfcu;
    // NOP
label_518c00:
    // 0x518c00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x518c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_518c04:
    // 0x518c04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x518c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_518c08:
    // 0x518c08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x518c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_518c0c:
    // 0x518c0c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x518c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_518c10:
    // 0x518c10: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x518c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_518c14:
    // 0x518c14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x518c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_518c18:
    // 0x518c18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x518c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_518c1c:
    // 0x518c1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x518c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_518c20:
    // 0x518c20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x518c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_518c24:
    // 0x518c24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x518c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_518c28:
    // 0x518c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x518c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_518c2c:
    // 0x518c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x518c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_518c30:
    // 0x518c30: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x518c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_518c34:
    // 0x518c34: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x518c34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_518c38:
    // 0x518c38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x518c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_518c3c:
    // 0x518c3c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_518c40:
    if (ctx->pc == 0x518C40u) {
        ctx->pc = 0x518C40u;
            // 0x518c40: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518C44u;
        goto label_518c44;
    }
    ctx->pc = 0x518C3Cu;
    {
        const bool branch_taken_0x518c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x518C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518C3Cu;
            // 0x518c40: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518c3c) {
            ctx->pc = 0x518C80u;
            goto label_518c80;
        }
    }
    ctx->pc = 0x518C44u;
label_518c44:
    // 0x518c44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x518c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_518c48:
    // 0x518c48: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
label_518c4c:
    if (ctx->pc == 0x518C4Cu) {
        ctx->pc = 0x518C50u;
        goto label_518c50;
    }
    ctx->pc = 0x518C48u;
    {
        const bool branch_taken_0x518c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x518c48) {
            ctx->pc = 0x518D30u;
            goto label_518d30;
        }
    }
    ctx->pc = 0x518C50u;
label_518c50:
    // 0x518c50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x518c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_518c54:
    // 0x518c54: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_518c58:
    if (ctx->pc == 0x518C58u) {
        ctx->pc = 0x518C58u;
            // 0x518c58: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x518C5Cu;
        goto label_518c5c;
    }
    ctx->pc = 0x518C54u;
    {
        const bool branch_taken_0x518c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x518c54) {
            ctx->pc = 0x518C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518C54u;
            // 0x518c58: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518C64u;
            goto label_518c64;
        }
    }
    ctx->pc = 0x518C5Cu;
label_518c5c:
    // 0x518c5c: 0x10000034  b           . + 4 + (0x34 << 2)
label_518c60:
    if (ctx->pc == 0x518C60u) {
        ctx->pc = 0x518C64u;
        goto label_518c64;
    }
    ctx->pc = 0x518C5Cu;
    {
        const bool branch_taken_0x518c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x518c5c) {
            ctx->pc = 0x518D30u;
            goto label_518d30;
        }
    }
    ctx->pc = 0x518C64u;
label_518c64:
    // 0x518c64: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x518c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_518c68:
    // 0x518c68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x518c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_518c6c:
    // 0x518c6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x518c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_518c70:
    // 0x518c70: 0x320f809  jalr        $t9
label_518c74:
    if (ctx->pc == 0x518C74u) {
        ctx->pc = 0x518C74u;
            // 0x518c74: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x518C78u;
        goto label_518c78;
    }
    ctx->pc = 0x518C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x518C78u);
        ctx->pc = 0x518C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518C70u;
            // 0x518c74: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x518C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x518C78u; }
            if (ctx->pc != 0x518C78u) { return; }
        }
        }
    }
    ctx->pc = 0x518C78u;
label_518c78:
    // 0x518c78: 0x1000002d  b           . + 4 + (0x2D << 2)
label_518c7c:
    if (ctx->pc == 0x518C7Cu) {
        ctx->pc = 0x518C80u;
        goto label_518c80;
    }
    ctx->pc = 0x518C78u;
    {
        const bool branch_taken_0x518c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x518c78) {
            ctx->pc = 0x518D30u;
            goto label_518d30;
        }
    }
    ctx->pc = 0x518C80u;
label_518c80:
    // 0x518c80: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x518c80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_518c84:
    // 0x518c84: 0x1280002a  beqz        $s4, . + 4 + (0x2A << 2)
label_518c88:
    if (ctx->pc == 0x518C88u) {
        ctx->pc = 0x518C8Cu;
        goto label_518c8c;
    }
    ctx->pc = 0x518C84u;
    {
        const bool branch_taken_0x518c84 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x518c84) {
            ctx->pc = 0x518D30u;
            goto label_518d30;
        }
    }
    ctx->pc = 0x518C8Cu;
label_518c8c:
    // 0x518c8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x518c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_518c90:
    // 0x518c90: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x518c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_518c94:
    // 0x518c94: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x518c94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_518c98:
    // 0x518c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x518c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_518c9c:
    // 0x518c9c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x518c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_518ca0:
    // 0x518ca0: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x518ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_518ca4:
    // 0x518ca4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x518ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_518ca8:
    // 0x518ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x518ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_518cac:
    // 0x518cac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x518cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_518cb0:
    // 0x518cb0: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x518cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_518cb4:
    // 0x518cb4: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x518cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_518cb8:
    // 0x518cb8: 0x8cb10130  lw          $s1, 0x130($a1)
    ctx->pc = 0x518cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_518cbc:
    // 0x518cbc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x518cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_518cc0:
    // 0x518cc0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x518cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_518cc4:
    // 0x518cc4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x518cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_518cc8:
    // 0x518cc8: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x518cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_518ccc:
    // 0x518ccc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x518cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_518cd0:
    // 0x518cd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x518cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_518cd4:
    // 0x518cd4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x518cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_518cd8:
    // 0x518cd8: 0x24770010  addiu       $s7, $v1, 0x10
    ctx->pc = 0x518cd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_518cdc:
    // 0x518cdc: 0xc04e4a4  jal         func_139290
label_518ce0:
    if (ctx->pc == 0x518CE0u) {
        ctx->pc = 0x518CE0u;
            // 0x518ce0: 0x247e0090  addiu       $fp, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->pc = 0x518CE4u;
        goto label_518ce4;
    }
    ctx->pc = 0x518CDCu;
    SET_GPR_U32(ctx, 31, 0x518CE4u);
    ctx->pc = 0x518CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518CDCu;
            // 0x518ce0: 0x247e0090  addiu       $fp, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518CE4u; }
        if (ctx->pc != 0x518CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518CE4u; }
        if (ctx->pc != 0x518CE4u) { return; }
    }
    ctx->pc = 0x518CE4u;
label_518ce4:
    // 0x518ce4: 0xc04e738  jal         func_139CE0
label_518ce8:
    if (ctx->pc == 0x518CE8u) {
        ctx->pc = 0x518CE8u;
            // 0x518ce8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x518CECu;
        goto label_518cec;
    }
    ctx->pc = 0x518CE4u;
    SET_GPR_U32(ctx, 31, 0x518CECu);
    ctx->pc = 0x518CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518CE4u;
            // 0x518ce8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518CECu; }
        if (ctx->pc != 0x518CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518CECu; }
        if (ctx->pc != 0x518CECu) { return; }
    }
    ctx->pc = 0x518CECu;
label_518cec:
    // 0x518cec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x518cecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_518cf0:
    // 0x518cf0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x518cf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_518cf4:
    // 0x518cf4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x518cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_518cf8:
    // 0x518cf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x518cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_518cfc:
    // 0x518cfc: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x518cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_518d00:
    // 0x518d00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x518d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_518d04:
    // 0x518d04: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x518d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_518d08:
    // 0x518d08: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x518d08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_518d0c:
    // 0x518d0c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x518d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_518d10:
    // 0x518d10: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x518d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_518d14:
    // 0x518d14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x518d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_518d18:
    // 0x518d18: 0xc146390  jal         func_518E40
label_518d1c:
    if (ctx->pc == 0x518D1Cu) {
        ctx->pc = 0x518D1Cu;
            // 0x518d1c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518D20u;
        goto label_518d20;
    }
    ctx->pc = 0x518D18u;
    SET_GPR_U32(ctx, 31, 0x518D20u);
    ctx->pc = 0x518D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x518D18u;
            // 0x518d1c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518E40u;
    if (runtime->hasFunction(0x518E40u)) {
        auto targetFn = runtime->lookupFunction(0x518E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518D20u; }
        if (ctx->pc != 0x518D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518E40_0x518e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x518D20u; }
        if (ctx->pc != 0x518D20u) { return; }
    }
    ctx->pc = 0x518D20u;
label_518d20:
    // 0x518d20: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x518d20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_518d24:
    // 0x518d24: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x518d24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_518d28:
    // 0x518d28: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_518d2c:
    if (ctx->pc == 0x518D2Cu) {
        ctx->pc = 0x518D2Cu;
            // 0x518d2c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x518D30u;
        goto label_518d30;
    }
    ctx->pc = 0x518D28u;
    {
        const bool branch_taken_0x518d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x518D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518D28u;
            // 0x518d2c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518d28) {
            ctx->pc = 0x518CF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_518cf4;
        }
    }
    ctx->pc = 0x518D30u;
label_518d30:
    // 0x518d30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x518d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_518d34:
    // 0x518d34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x518d34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_518d38:
    // 0x518d38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x518d38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_518d3c:
    // 0x518d3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x518d3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_518d40:
    // 0x518d40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x518d40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_518d44:
    // 0x518d44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x518d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_518d48:
    // 0x518d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x518d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_518d4c:
    // 0x518d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x518d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_518d50:
    // 0x518d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x518d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_518d54:
    // 0x518d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_518d58:
    // 0x518d58: 0x3e00008  jr          $ra
label_518d5c:
    if (ctx->pc == 0x518D5Cu) {
        ctx->pc = 0x518D5Cu;
            // 0x518d5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x518D60u;
        goto label_518d60;
    }
    ctx->pc = 0x518D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518D58u;
            // 0x518d5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518D60u;
label_518d60:
    // 0x518d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x518d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_518d64:
    // 0x518d64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x518d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_518d68:
    // 0x518d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x518d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_518d6c:
    // 0x518d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x518d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_518d70:
    // 0x518d70: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x518d70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_518d74:
    // 0x518d74: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_518d78:
    if (ctx->pc == 0x518D78u) {
        ctx->pc = 0x518D78u;
            // 0x518d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x518D7Cu;
        goto label_518d7c;
    }
    ctx->pc = 0x518D74u;
    {
        const bool branch_taken_0x518d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x518D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518D74u;
            // 0x518d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518d74) {
            ctx->pc = 0x518DA8u;
            goto label_518da8;
        }
    }
    ctx->pc = 0x518D7Cu;
label_518d7c:
    // 0x518d7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x518d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_518d80:
    // 0x518d80: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_518d84:
    if (ctx->pc == 0x518D84u) {
        ctx->pc = 0x518D84u;
            // 0x518d84: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x518D88u;
        goto label_518d88;
    }
    ctx->pc = 0x518D80u;
    {
        const bool branch_taken_0x518d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x518d80) {
            ctx->pc = 0x518D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518D80u;
            // 0x518d84: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518D9Cu;
            goto label_518d9c;
        }
    }
    ctx->pc = 0x518D88u;
label_518d88:
    // 0x518d88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x518d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_518d8c:
    // 0x518d8c: 0x50a30024  beql        $a1, $v1, . + 4 + (0x24 << 2)
label_518d90:
    if (ctx->pc == 0x518D90u) {
        ctx->pc = 0x518D90u;
            // 0x518d90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x518D94u;
        goto label_518d94;
    }
    ctx->pc = 0x518D8Cu;
    {
        const bool branch_taken_0x518d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x518d8c) {
            ctx->pc = 0x518D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518D8Cu;
            // 0x518d90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518E20u;
            goto label_518e20;
        }
    }
    ctx->pc = 0x518D94u;
label_518d94:
    // 0x518d94: 0x10000021  b           . + 4 + (0x21 << 2)
label_518d98:
    if (ctx->pc == 0x518D98u) {
        ctx->pc = 0x518D9Cu;
        goto label_518d9c;
    }
    ctx->pc = 0x518D94u;
    {
        const bool branch_taken_0x518d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x518d94) {
            ctx->pc = 0x518E1Cu;
            goto label_518e1c;
        }
    }
    ctx->pc = 0x518D9Cu;
label_518d9c:
    // 0x518d9c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x518d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_518da0:
    // 0x518da0: 0x320f809  jalr        $t9
label_518da4:
    if (ctx->pc == 0x518DA4u) {
        ctx->pc = 0x518DA8u;
        goto label_518da8;
    }
    ctx->pc = 0x518DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x518DA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x518DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x518DA8u; }
            if (ctx->pc != 0x518DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x518DA8u;
label_518da8:
    // 0x518da8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x518da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_518dac:
    // 0x518dac: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x518dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_518db0:
    // 0x518db0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x518db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_518db4:
    // 0x518db4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x518db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_518db8:
    // 0x518db8: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x518db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_518dbc:
    // 0x518dbc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x518dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_518dc0:
    // 0x518dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x518dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_518dc4:
    // 0x518dc4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x518dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_518dc8:
    // 0x518dc8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x518dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_518dcc:
    // 0x518dcc: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x518dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_518dd0:
    // 0x518dd0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x518dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_518dd4:
    // 0x518dd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x518dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_518dd8:
    // 0x518dd8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_518ddc:
    if (ctx->pc == 0x518DDCu) {
        ctx->pc = 0x518DDCu;
            // 0x518ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x518DE0u;
        goto label_518de0;
    }
    ctx->pc = 0x518DD8u;
    {
        const bool branch_taken_0x518dd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x518DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518DD8u;
            // 0x518ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x518dd8) {
            ctx->pc = 0x518DE4u;
            goto label_518de4;
        }
    }
    ctx->pc = 0x518DE0u;
label_518de0:
    // 0x518de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x518de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_518de4:
    // 0x518de4: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_518de8:
    if (ctx->pc == 0x518DE8u) {
        ctx->pc = 0x518DE8u;
            // 0x518de8: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x518DECu;
        goto label_518dec;
    }
    ctx->pc = 0x518DE4u;
    {
        const bool branch_taken_0x518de4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x518de4) {
            ctx->pc = 0x518DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x518DE4u;
            // 0x518de8: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x518DF8u;
            goto label_518df8;
        }
    }
    ctx->pc = 0x518DECu;
label_518dec:
    // 0x518dec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x518decu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_518df0:
    // 0x518df0: 0x10000007  b           . + 4 + (0x7 << 2)
label_518df4:
    if (ctx->pc == 0x518DF4u) {
        ctx->pc = 0x518DF4u;
            // 0x518df4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x518DF8u;
        goto label_518df8;
    }
    ctx->pc = 0x518DF0u;
    {
        const bool branch_taken_0x518df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x518DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518DF0u;
            // 0x518df4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x518df0) {
            ctx->pc = 0x518E10u;
            goto label_518e10;
        }
    }
    ctx->pc = 0x518DF8u;
label_518df8:
    // 0x518df8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x518df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_518dfc:
    // 0x518dfc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x518dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_518e00:
    // 0x518e00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x518e00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_518e04:
    // 0x518e04: 0x0  nop
    ctx->pc = 0x518e04u;
    // NOP
label_518e08:
    // 0x518e08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x518e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_518e0c:
    // 0x518e0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x518e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_518e10:
    // 0x518e10: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x518e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_518e14:
    // 0x518e14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x518e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_518e18:
    // 0x518e18: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x518e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_518e1c:
    // 0x518e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x518e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_518e20:
    // 0x518e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_518e24:
    // 0x518e24: 0x3e00008  jr          $ra
label_518e28:
    if (ctx->pc == 0x518E28u) {
        ctx->pc = 0x518E28u;
            // 0x518e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x518E2Cu;
        goto label_518e2c;
    }
    ctx->pc = 0x518E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x518E24u;
            // 0x518e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518E2Cu;
label_518e2c:
    // 0x518e2c: 0x0  nop
    ctx->pc = 0x518e2cu;
    // NOP
label_518e30:
    // 0x518e30: 0x3e00008  jr          $ra
label_518e34:
    if (ctx->pc == 0x518E34u) {
        ctx->pc = 0x518E38u;
        goto label_518e38;
    }
    ctx->pc = 0x518E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518E38u;
label_518e38:
    // 0x518e38: 0x0  nop
    ctx->pc = 0x518e38u;
    // NOP
label_518e3c:
    // 0x518e3c: 0x0  nop
    ctx->pc = 0x518e3cu;
    // NOP
}
