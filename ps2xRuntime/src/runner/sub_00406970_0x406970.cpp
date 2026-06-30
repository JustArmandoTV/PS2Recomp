#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00406970
// Address: 0x406970 - 0x406f50
void sub_00406970_0x406970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406970_0x406970");
#endif

    switch (ctx->pc) {
        case 0x406970u: goto label_406970;
        case 0x406974u: goto label_406974;
        case 0x406978u: goto label_406978;
        case 0x40697cu: goto label_40697c;
        case 0x406980u: goto label_406980;
        case 0x406984u: goto label_406984;
        case 0x406988u: goto label_406988;
        case 0x40698cu: goto label_40698c;
        case 0x406990u: goto label_406990;
        case 0x406994u: goto label_406994;
        case 0x406998u: goto label_406998;
        case 0x40699cu: goto label_40699c;
        case 0x4069a0u: goto label_4069a0;
        case 0x4069a4u: goto label_4069a4;
        case 0x4069a8u: goto label_4069a8;
        case 0x4069acu: goto label_4069ac;
        case 0x4069b0u: goto label_4069b0;
        case 0x4069b4u: goto label_4069b4;
        case 0x4069b8u: goto label_4069b8;
        case 0x4069bcu: goto label_4069bc;
        case 0x4069c0u: goto label_4069c0;
        case 0x4069c4u: goto label_4069c4;
        case 0x4069c8u: goto label_4069c8;
        case 0x4069ccu: goto label_4069cc;
        case 0x4069d0u: goto label_4069d0;
        case 0x4069d4u: goto label_4069d4;
        case 0x4069d8u: goto label_4069d8;
        case 0x4069dcu: goto label_4069dc;
        case 0x4069e0u: goto label_4069e0;
        case 0x4069e4u: goto label_4069e4;
        case 0x4069e8u: goto label_4069e8;
        case 0x4069ecu: goto label_4069ec;
        case 0x4069f0u: goto label_4069f0;
        case 0x4069f4u: goto label_4069f4;
        case 0x4069f8u: goto label_4069f8;
        case 0x4069fcu: goto label_4069fc;
        case 0x406a00u: goto label_406a00;
        case 0x406a04u: goto label_406a04;
        case 0x406a08u: goto label_406a08;
        case 0x406a0cu: goto label_406a0c;
        case 0x406a10u: goto label_406a10;
        case 0x406a14u: goto label_406a14;
        case 0x406a18u: goto label_406a18;
        case 0x406a1cu: goto label_406a1c;
        case 0x406a20u: goto label_406a20;
        case 0x406a24u: goto label_406a24;
        case 0x406a28u: goto label_406a28;
        case 0x406a2cu: goto label_406a2c;
        case 0x406a30u: goto label_406a30;
        case 0x406a34u: goto label_406a34;
        case 0x406a38u: goto label_406a38;
        case 0x406a3cu: goto label_406a3c;
        case 0x406a40u: goto label_406a40;
        case 0x406a44u: goto label_406a44;
        case 0x406a48u: goto label_406a48;
        case 0x406a4cu: goto label_406a4c;
        case 0x406a50u: goto label_406a50;
        case 0x406a54u: goto label_406a54;
        case 0x406a58u: goto label_406a58;
        case 0x406a5cu: goto label_406a5c;
        case 0x406a60u: goto label_406a60;
        case 0x406a64u: goto label_406a64;
        case 0x406a68u: goto label_406a68;
        case 0x406a6cu: goto label_406a6c;
        case 0x406a70u: goto label_406a70;
        case 0x406a74u: goto label_406a74;
        case 0x406a78u: goto label_406a78;
        case 0x406a7cu: goto label_406a7c;
        case 0x406a80u: goto label_406a80;
        case 0x406a84u: goto label_406a84;
        case 0x406a88u: goto label_406a88;
        case 0x406a8cu: goto label_406a8c;
        case 0x406a90u: goto label_406a90;
        case 0x406a94u: goto label_406a94;
        case 0x406a98u: goto label_406a98;
        case 0x406a9cu: goto label_406a9c;
        case 0x406aa0u: goto label_406aa0;
        case 0x406aa4u: goto label_406aa4;
        case 0x406aa8u: goto label_406aa8;
        case 0x406aacu: goto label_406aac;
        case 0x406ab0u: goto label_406ab0;
        case 0x406ab4u: goto label_406ab4;
        case 0x406ab8u: goto label_406ab8;
        case 0x406abcu: goto label_406abc;
        case 0x406ac0u: goto label_406ac0;
        case 0x406ac4u: goto label_406ac4;
        case 0x406ac8u: goto label_406ac8;
        case 0x406accu: goto label_406acc;
        case 0x406ad0u: goto label_406ad0;
        case 0x406ad4u: goto label_406ad4;
        case 0x406ad8u: goto label_406ad8;
        case 0x406adcu: goto label_406adc;
        case 0x406ae0u: goto label_406ae0;
        case 0x406ae4u: goto label_406ae4;
        case 0x406ae8u: goto label_406ae8;
        case 0x406aecu: goto label_406aec;
        case 0x406af0u: goto label_406af0;
        case 0x406af4u: goto label_406af4;
        case 0x406af8u: goto label_406af8;
        case 0x406afcu: goto label_406afc;
        case 0x406b00u: goto label_406b00;
        case 0x406b04u: goto label_406b04;
        case 0x406b08u: goto label_406b08;
        case 0x406b0cu: goto label_406b0c;
        case 0x406b10u: goto label_406b10;
        case 0x406b14u: goto label_406b14;
        case 0x406b18u: goto label_406b18;
        case 0x406b1cu: goto label_406b1c;
        case 0x406b20u: goto label_406b20;
        case 0x406b24u: goto label_406b24;
        case 0x406b28u: goto label_406b28;
        case 0x406b2cu: goto label_406b2c;
        case 0x406b30u: goto label_406b30;
        case 0x406b34u: goto label_406b34;
        case 0x406b38u: goto label_406b38;
        case 0x406b3cu: goto label_406b3c;
        case 0x406b40u: goto label_406b40;
        case 0x406b44u: goto label_406b44;
        case 0x406b48u: goto label_406b48;
        case 0x406b4cu: goto label_406b4c;
        case 0x406b50u: goto label_406b50;
        case 0x406b54u: goto label_406b54;
        case 0x406b58u: goto label_406b58;
        case 0x406b5cu: goto label_406b5c;
        case 0x406b60u: goto label_406b60;
        case 0x406b64u: goto label_406b64;
        case 0x406b68u: goto label_406b68;
        case 0x406b6cu: goto label_406b6c;
        case 0x406b70u: goto label_406b70;
        case 0x406b74u: goto label_406b74;
        case 0x406b78u: goto label_406b78;
        case 0x406b7cu: goto label_406b7c;
        case 0x406b80u: goto label_406b80;
        case 0x406b84u: goto label_406b84;
        case 0x406b88u: goto label_406b88;
        case 0x406b8cu: goto label_406b8c;
        case 0x406b90u: goto label_406b90;
        case 0x406b94u: goto label_406b94;
        case 0x406b98u: goto label_406b98;
        case 0x406b9cu: goto label_406b9c;
        case 0x406ba0u: goto label_406ba0;
        case 0x406ba4u: goto label_406ba4;
        case 0x406ba8u: goto label_406ba8;
        case 0x406bacu: goto label_406bac;
        case 0x406bb0u: goto label_406bb0;
        case 0x406bb4u: goto label_406bb4;
        case 0x406bb8u: goto label_406bb8;
        case 0x406bbcu: goto label_406bbc;
        case 0x406bc0u: goto label_406bc0;
        case 0x406bc4u: goto label_406bc4;
        case 0x406bc8u: goto label_406bc8;
        case 0x406bccu: goto label_406bcc;
        case 0x406bd0u: goto label_406bd0;
        case 0x406bd4u: goto label_406bd4;
        case 0x406bd8u: goto label_406bd8;
        case 0x406bdcu: goto label_406bdc;
        case 0x406be0u: goto label_406be0;
        case 0x406be4u: goto label_406be4;
        case 0x406be8u: goto label_406be8;
        case 0x406becu: goto label_406bec;
        case 0x406bf0u: goto label_406bf0;
        case 0x406bf4u: goto label_406bf4;
        case 0x406bf8u: goto label_406bf8;
        case 0x406bfcu: goto label_406bfc;
        case 0x406c00u: goto label_406c00;
        case 0x406c04u: goto label_406c04;
        case 0x406c08u: goto label_406c08;
        case 0x406c0cu: goto label_406c0c;
        case 0x406c10u: goto label_406c10;
        case 0x406c14u: goto label_406c14;
        case 0x406c18u: goto label_406c18;
        case 0x406c1cu: goto label_406c1c;
        case 0x406c20u: goto label_406c20;
        case 0x406c24u: goto label_406c24;
        case 0x406c28u: goto label_406c28;
        case 0x406c2cu: goto label_406c2c;
        case 0x406c30u: goto label_406c30;
        case 0x406c34u: goto label_406c34;
        case 0x406c38u: goto label_406c38;
        case 0x406c3cu: goto label_406c3c;
        case 0x406c40u: goto label_406c40;
        case 0x406c44u: goto label_406c44;
        case 0x406c48u: goto label_406c48;
        case 0x406c4cu: goto label_406c4c;
        case 0x406c50u: goto label_406c50;
        case 0x406c54u: goto label_406c54;
        case 0x406c58u: goto label_406c58;
        case 0x406c5cu: goto label_406c5c;
        case 0x406c60u: goto label_406c60;
        case 0x406c64u: goto label_406c64;
        case 0x406c68u: goto label_406c68;
        case 0x406c6cu: goto label_406c6c;
        case 0x406c70u: goto label_406c70;
        case 0x406c74u: goto label_406c74;
        case 0x406c78u: goto label_406c78;
        case 0x406c7cu: goto label_406c7c;
        case 0x406c80u: goto label_406c80;
        case 0x406c84u: goto label_406c84;
        case 0x406c88u: goto label_406c88;
        case 0x406c8cu: goto label_406c8c;
        case 0x406c90u: goto label_406c90;
        case 0x406c94u: goto label_406c94;
        case 0x406c98u: goto label_406c98;
        case 0x406c9cu: goto label_406c9c;
        case 0x406ca0u: goto label_406ca0;
        case 0x406ca4u: goto label_406ca4;
        case 0x406ca8u: goto label_406ca8;
        case 0x406cacu: goto label_406cac;
        case 0x406cb0u: goto label_406cb0;
        case 0x406cb4u: goto label_406cb4;
        case 0x406cb8u: goto label_406cb8;
        case 0x406cbcu: goto label_406cbc;
        case 0x406cc0u: goto label_406cc0;
        case 0x406cc4u: goto label_406cc4;
        case 0x406cc8u: goto label_406cc8;
        case 0x406cccu: goto label_406ccc;
        case 0x406cd0u: goto label_406cd0;
        case 0x406cd4u: goto label_406cd4;
        case 0x406cd8u: goto label_406cd8;
        case 0x406cdcu: goto label_406cdc;
        case 0x406ce0u: goto label_406ce0;
        case 0x406ce4u: goto label_406ce4;
        case 0x406ce8u: goto label_406ce8;
        case 0x406cecu: goto label_406cec;
        case 0x406cf0u: goto label_406cf0;
        case 0x406cf4u: goto label_406cf4;
        case 0x406cf8u: goto label_406cf8;
        case 0x406cfcu: goto label_406cfc;
        case 0x406d00u: goto label_406d00;
        case 0x406d04u: goto label_406d04;
        case 0x406d08u: goto label_406d08;
        case 0x406d0cu: goto label_406d0c;
        case 0x406d10u: goto label_406d10;
        case 0x406d14u: goto label_406d14;
        case 0x406d18u: goto label_406d18;
        case 0x406d1cu: goto label_406d1c;
        case 0x406d20u: goto label_406d20;
        case 0x406d24u: goto label_406d24;
        case 0x406d28u: goto label_406d28;
        case 0x406d2cu: goto label_406d2c;
        case 0x406d30u: goto label_406d30;
        case 0x406d34u: goto label_406d34;
        case 0x406d38u: goto label_406d38;
        case 0x406d3cu: goto label_406d3c;
        case 0x406d40u: goto label_406d40;
        case 0x406d44u: goto label_406d44;
        case 0x406d48u: goto label_406d48;
        case 0x406d4cu: goto label_406d4c;
        case 0x406d50u: goto label_406d50;
        case 0x406d54u: goto label_406d54;
        case 0x406d58u: goto label_406d58;
        case 0x406d5cu: goto label_406d5c;
        case 0x406d60u: goto label_406d60;
        case 0x406d64u: goto label_406d64;
        case 0x406d68u: goto label_406d68;
        case 0x406d6cu: goto label_406d6c;
        case 0x406d70u: goto label_406d70;
        case 0x406d74u: goto label_406d74;
        case 0x406d78u: goto label_406d78;
        case 0x406d7cu: goto label_406d7c;
        case 0x406d80u: goto label_406d80;
        case 0x406d84u: goto label_406d84;
        case 0x406d88u: goto label_406d88;
        case 0x406d8cu: goto label_406d8c;
        case 0x406d90u: goto label_406d90;
        case 0x406d94u: goto label_406d94;
        case 0x406d98u: goto label_406d98;
        case 0x406d9cu: goto label_406d9c;
        case 0x406da0u: goto label_406da0;
        case 0x406da4u: goto label_406da4;
        case 0x406da8u: goto label_406da8;
        case 0x406dacu: goto label_406dac;
        case 0x406db0u: goto label_406db0;
        case 0x406db4u: goto label_406db4;
        case 0x406db8u: goto label_406db8;
        case 0x406dbcu: goto label_406dbc;
        case 0x406dc0u: goto label_406dc0;
        case 0x406dc4u: goto label_406dc4;
        case 0x406dc8u: goto label_406dc8;
        case 0x406dccu: goto label_406dcc;
        case 0x406dd0u: goto label_406dd0;
        case 0x406dd4u: goto label_406dd4;
        case 0x406dd8u: goto label_406dd8;
        case 0x406ddcu: goto label_406ddc;
        case 0x406de0u: goto label_406de0;
        case 0x406de4u: goto label_406de4;
        case 0x406de8u: goto label_406de8;
        case 0x406decu: goto label_406dec;
        case 0x406df0u: goto label_406df0;
        case 0x406df4u: goto label_406df4;
        case 0x406df8u: goto label_406df8;
        case 0x406dfcu: goto label_406dfc;
        case 0x406e00u: goto label_406e00;
        case 0x406e04u: goto label_406e04;
        case 0x406e08u: goto label_406e08;
        case 0x406e0cu: goto label_406e0c;
        case 0x406e10u: goto label_406e10;
        case 0x406e14u: goto label_406e14;
        case 0x406e18u: goto label_406e18;
        case 0x406e1cu: goto label_406e1c;
        case 0x406e20u: goto label_406e20;
        case 0x406e24u: goto label_406e24;
        case 0x406e28u: goto label_406e28;
        case 0x406e2cu: goto label_406e2c;
        case 0x406e30u: goto label_406e30;
        case 0x406e34u: goto label_406e34;
        case 0x406e38u: goto label_406e38;
        case 0x406e3cu: goto label_406e3c;
        case 0x406e40u: goto label_406e40;
        case 0x406e44u: goto label_406e44;
        case 0x406e48u: goto label_406e48;
        case 0x406e4cu: goto label_406e4c;
        case 0x406e50u: goto label_406e50;
        case 0x406e54u: goto label_406e54;
        case 0x406e58u: goto label_406e58;
        case 0x406e5cu: goto label_406e5c;
        case 0x406e60u: goto label_406e60;
        case 0x406e64u: goto label_406e64;
        case 0x406e68u: goto label_406e68;
        case 0x406e6cu: goto label_406e6c;
        case 0x406e70u: goto label_406e70;
        case 0x406e74u: goto label_406e74;
        case 0x406e78u: goto label_406e78;
        case 0x406e7cu: goto label_406e7c;
        case 0x406e80u: goto label_406e80;
        case 0x406e84u: goto label_406e84;
        case 0x406e88u: goto label_406e88;
        case 0x406e8cu: goto label_406e8c;
        case 0x406e90u: goto label_406e90;
        case 0x406e94u: goto label_406e94;
        case 0x406e98u: goto label_406e98;
        case 0x406e9cu: goto label_406e9c;
        case 0x406ea0u: goto label_406ea0;
        case 0x406ea4u: goto label_406ea4;
        case 0x406ea8u: goto label_406ea8;
        case 0x406eacu: goto label_406eac;
        case 0x406eb0u: goto label_406eb0;
        case 0x406eb4u: goto label_406eb4;
        case 0x406eb8u: goto label_406eb8;
        case 0x406ebcu: goto label_406ebc;
        case 0x406ec0u: goto label_406ec0;
        case 0x406ec4u: goto label_406ec4;
        case 0x406ec8u: goto label_406ec8;
        case 0x406eccu: goto label_406ecc;
        case 0x406ed0u: goto label_406ed0;
        case 0x406ed4u: goto label_406ed4;
        case 0x406ed8u: goto label_406ed8;
        case 0x406edcu: goto label_406edc;
        case 0x406ee0u: goto label_406ee0;
        case 0x406ee4u: goto label_406ee4;
        case 0x406ee8u: goto label_406ee8;
        case 0x406eecu: goto label_406eec;
        case 0x406ef0u: goto label_406ef0;
        case 0x406ef4u: goto label_406ef4;
        case 0x406ef8u: goto label_406ef8;
        case 0x406efcu: goto label_406efc;
        case 0x406f00u: goto label_406f00;
        case 0x406f04u: goto label_406f04;
        case 0x406f08u: goto label_406f08;
        case 0x406f0cu: goto label_406f0c;
        case 0x406f10u: goto label_406f10;
        case 0x406f14u: goto label_406f14;
        case 0x406f18u: goto label_406f18;
        case 0x406f1cu: goto label_406f1c;
        case 0x406f20u: goto label_406f20;
        case 0x406f24u: goto label_406f24;
        case 0x406f28u: goto label_406f28;
        case 0x406f2cu: goto label_406f2c;
        case 0x406f30u: goto label_406f30;
        case 0x406f34u: goto label_406f34;
        case 0x406f38u: goto label_406f38;
        case 0x406f3cu: goto label_406f3c;
        case 0x406f40u: goto label_406f40;
        case 0x406f44u: goto label_406f44;
        case 0x406f48u: goto label_406f48;
        case 0x406f4cu: goto label_406f4c;
        default: break;
    }

    ctx->pc = 0x406970u;

label_406970:
    // 0x406970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x406970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_406974:
    // 0x406974: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x406974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_406978:
    // 0x406978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x406978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40697c:
    // 0x40697c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x40697cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_406980:
    // 0x406980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x406980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_406984:
    // 0x406984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x406984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_406988:
    // 0x406988: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x406988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40698c:
    // 0x40698c: 0xc10f6ec  jal         func_43DBB0
label_406990:
    if (ctx->pc == 0x406990u) {
        ctx->pc = 0x406990u;
            // 0x406990: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406994u;
        goto label_406994;
    }
    ctx->pc = 0x40698Cu;
    SET_GPR_U32(ctx, 31, 0x406994u);
    ctx->pc = 0x406990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40698Cu;
            // 0x406990: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406994u; }
        if (ctx->pc != 0x406994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406994u; }
        if (ctx->pc != 0x406994u) { return; }
    }
    ctx->pc = 0x406994u;
label_406994:
    // 0x406994: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x406994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_406998:
    // 0x406998: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x406998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_40699c:
    // 0x40699c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40699cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4069a0:
    // 0x4069a0: 0x2442a830  addiu       $v0, $v0, -0x57D0
    ctx->pc = 0x4069a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944816));
label_4069a4:
    // 0x4069a4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4069a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4069a8:
    // 0x4069a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4069a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4069ac:
    // 0x4069ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4069acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4069b0:
    // 0x4069b0: 0xc04cbd8  jal         func_132F60
label_4069b4:
    if (ctx->pc == 0x4069B4u) {
        ctx->pc = 0x4069B4u;
            // 0x4069b4: 0xae200138  sw          $zero, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
        ctx->pc = 0x4069B8u;
        goto label_4069b8;
    }
    ctx->pc = 0x4069B0u;
    SET_GPR_U32(ctx, 31, 0x4069B8u);
    ctx->pc = 0x4069B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4069B0u;
            // 0x4069b4: 0xae200138  sw          $zero, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4069B8u; }
        if (ctx->pc != 0x4069B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4069B8u; }
        if (ctx->pc != 0x4069B8u) { return; }
    }
    ctx->pc = 0x4069B8u;
label_4069b8:
    // 0x4069b8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x4069b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_4069bc:
    // 0x4069bc: 0xc04cc04  jal         func_133010
label_4069c0:
    if (ctx->pc == 0x4069C0u) {
        ctx->pc = 0x4069C0u;
            // 0x4069c0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4069C4u;
        goto label_4069c4;
    }
    ctx->pc = 0x4069BCu;
    SET_GPR_U32(ctx, 31, 0x4069C4u);
    ctx->pc = 0x4069C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4069BCu;
            // 0x4069c0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4069C4u; }
        if (ctx->pc != 0x4069C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4069C4u; }
        if (ctx->pc != 0x4069C4u) { return; }
    }
    ctx->pc = 0x4069C4u;
label_4069c4:
    // 0x4069c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4069c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4069c8:
    // 0x4069c8: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x4069c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_4069cc:
    // 0x4069cc: 0xc040180  jal         func_100600
label_4069d0:
    if (ctx->pc == 0x4069D0u) {
        ctx->pc = 0x4069D0u;
            // 0x4069d0: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4069D4u;
        goto label_4069d4;
    }
    ctx->pc = 0x4069CCu;
    SET_GPR_U32(ctx, 31, 0x4069D4u);
    ctx->pc = 0x4069D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4069CCu;
            // 0x4069d0: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4069D4u; }
        if (ctx->pc != 0x4069D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4069D4u; }
        if (ctx->pc != 0x4069D4u) { return; }
    }
    ctx->pc = 0x4069D4u;
label_4069d4:
    // 0x4069d4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4069d8:
    if (ctx->pc == 0x4069D8u) {
        ctx->pc = 0x4069D8u;
            // 0x4069d8: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x4069DCu;
        goto label_4069dc;
    }
    ctx->pc = 0x4069D4u;
    {
        const bool branch_taken_0x4069d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4069d4) {
            ctx->pc = 0x4069D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4069D4u;
            // 0x4069d8: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4069F8u;
            goto label_4069f8;
        }
    }
    ctx->pc = 0x4069DCu;
label_4069dc:
    // 0x4069dc: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x4069dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4069e0:
    // 0x4069e0: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x4069e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_4069e4:
    // 0x4069e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4069e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4069e8:
    // 0x4069e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4069e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4069ec:
    // 0x4069ec: 0xc0c3f60  jal         func_30FD80
label_4069f0:
    if (ctx->pc == 0x4069F0u) {
        ctx->pc = 0x4069F0u;
            // 0x4069f0: 0x24c6fbf0  addiu       $a2, $a2, -0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966256));
        ctx->pc = 0x4069F4u;
        goto label_4069f4;
    }
    ctx->pc = 0x4069ECu;
    SET_GPR_U32(ctx, 31, 0x4069F4u);
    ctx->pc = 0x4069F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4069ECu;
            // 0x4069f0: 0x24c6fbf0  addiu       $a2, $a2, -0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4069F4u; }
        if (ctx->pc != 0x4069F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4069F4u; }
        if (ctx->pc != 0x4069F4u) { return; }
    }
    ctx->pc = 0x4069F4u;
label_4069f4:
    // 0x4069f4: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x4069f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_4069f8:
    // 0x4069f8: 0x26280040  addiu       $t0, $s1, 0x40
    ctx->pc = 0x4069f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4069fc:
    // 0x4069fc: 0x94490064  lhu         $t1, 0x64($v0)
    ctx->pc = 0x4069fcu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_406a00:
    // 0x406a00: 0x26070ec0  addiu       $a3, $s0, 0xEC0
    ctx->pc = 0x406a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_406a04:
    // 0x406a04: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x406a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_406a08:
    // 0x406a08: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x406a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_406a0c:
    // 0x406a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x406a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406a10:
    // 0x406a10: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x406a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_406a14:
    // 0x406a14: 0x35290200  ori         $t1, $t1, 0x200
    ctx->pc = 0x406a14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)512);
label_406a18:
    // 0x406a18: 0xa4490064  sh          $t1, 0x64($v0)
    ctx->pc = 0x406a18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 9));
label_406a1c:
    // 0x406a1c: 0xac4800c0  sw          $t0, 0xC0($v0)
    ctx->pc = 0x406a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 8));
label_406a20:
    // 0x406a20: 0xac4700c4  sw          $a3, 0xC4($v0)
    ctx->pc = 0x406a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 7));
label_406a24:
    // 0x406a24: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x406a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_406a28:
    // 0x406a28: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x406a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_406a2c:
    // 0x406a2c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x406a2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_406a30:
    // 0x406a30: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x406a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_406a34:
    // 0x406a34: 0xc04a576  jal         func_1295D8
label_406a38:
    if (ctx->pc == 0x406A38u) {
        ctx->pc = 0x406A38u;
            // 0x406a38: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x406A3Cu;
        goto label_406a3c;
    }
    ctx->pc = 0x406A34u;
    SET_GPR_U32(ctx, 31, 0x406A3Cu);
    ctx->pc = 0x406A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406A34u;
            // 0x406a38: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406A3Cu; }
        if (ctx->pc != 0x406A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406A3Cu; }
        if (ctx->pc != 0x406A3Cu) { return; }
    }
    ctx->pc = 0x406A3Cu;
label_406a3c:
    // 0x406a3c: 0xc040180  jal         func_100600
label_406a40:
    if (ctx->pc == 0x406A40u) {
        ctx->pc = 0x406A40u;
            // 0x406a40: 0x240402e4  addiu       $a0, $zero, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
        ctx->pc = 0x406A44u;
        goto label_406a44;
    }
    ctx->pc = 0x406A3Cu;
    SET_GPR_U32(ctx, 31, 0x406A44u);
    ctx->pc = 0x406A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406A3Cu;
            // 0x406a40: 0x240402e4  addiu       $a0, $zero, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406A44u; }
        if (ctx->pc != 0x406A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406A44u; }
        if (ctx->pc != 0x406A44u) { return; }
    }
    ctx->pc = 0x406A44u;
label_406a44:
    // 0x406a44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_406a48:
    if (ctx->pc == 0x406A48u) {
        ctx->pc = 0x406A48u;
            // 0x406a48: 0xae22013c  sw          $v0, 0x13C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
        ctx->pc = 0x406A4Cu;
        goto label_406a4c;
    }
    ctx->pc = 0x406A44u;
    {
        const bool branch_taken_0x406a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x406a44) {
            ctx->pc = 0x406A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406A44u;
            // 0x406a48: 0xae22013c  sw          $v0, 0x13C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406A64u;
            goto label_406a64;
        }
    }
    ctx->pc = 0x406A4Cu;
label_406a4c:
    // 0x406a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x406a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406a50:
    // 0x406a50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x406a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_406a54:
    // 0x406a54: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x406a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_406a58:
    // 0x406a58: 0xc0fba90  jal         func_3EEA40
label_406a5c:
    if (ctx->pc == 0x406A5Cu) {
        ctx->pc = 0x406A5Cu;
            // 0x406a5c: 0x34452825  ori         $a1, $v0, 0x2825 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10277);
        ctx->pc = 0x406A60u;
        goto label_406a60;
    }
    ctx->pc = 0x406A58u;
    SET_GPR_U32(ctx, 31, 0x406A60u);
    ctx->pc = 0x406A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406A58u;
            // 0x406a5c: 0x34452825  ori         $a1, $v0, 0x2825 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10277);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEA40u;
    if (runtime->hasFunction(0x3EEA40u)) {
        auto targetFn = runtime->lookupFunction(0x3EEA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406A60u; }
        if (ctx->pc != 0x406A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEA40_0x3eea40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406A60u; }
        if (ctx->pc != 0x406A60u) { return; }
    }
    ctx->pc = 0x406A60u;
label_406a60:
    // 0x406a60: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x406a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
label_406a64:
    // 0x406a64: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x406a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_406a68:
    // 0x406a68: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x406a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_406a6c:
    // 0x406a6c: 0x320f809  jalr        $t9
label_406a70:
    if (ctx->pc == 0x406A70u) {
        ctx->pc = 0x406A70u;
            // 0x406a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406A74u;
        goto label_406a74;
    }
    ctx->pc = 0x406A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x406A74u);
        ctx->pc = 0x406A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406A6Cu;
            // 0x406a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x406A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x406A74u; }
            if (ctx->pc != 0x406A74u) { return; }
        }
        }
    }
    ctx->pc = 0x406A74u;
label_406a74:
    // 0x406a74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x406a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_406a78:
    // 0x406a78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x406a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_406a7c:
    // 0x406a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x406a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_406a80:
    // 0x406a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x406a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_406a84:
    // 0x406a84: 0x3e00008  jr          $ra
label_406a88:
    if (ctx->pc == 0x406A88u) {
        ctx->pc = 0x406A88u;
            // 0x406a88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x406A8Cu;
        goto label_406a8c;
    }
    ctx->pc = 0x406A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406A84u;
            // 0x406a88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406A8Cu;
label_406a8c:
    // 0x406a8c: 0x0  nop
    ctx->pc = 0x406a8cu;
    // NOP
label_406a90:
    // 0x406a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x406a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_406a94:
    // 0x406a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x406a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_406a98:
    // 0x406a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x406a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_406a9c:
    // 0x406a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x406a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_406aa0:
    // 0x406aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x406aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_406aa4:
    // 0x406aa4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_406aa8:
    if (ctx->pc == 0x406AA8u) {
        ctx->pc = 0x406AA8u;
            // 0x406aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406AACu;
        goto label_406aac;
    }
    ctx->pc = 0x406AA4u;
    {
        const bool branch_taken_0x406aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x406AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406AA4u;
            // 0x406aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406aa4) {
            ctx->pc = 0x406B08u;
            goto label_406b08;
        }
    }
    ctx->pc = 0x406AACu;
label_406aac:
    // 0x406aac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x406aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_406ab0:
    // 0x406ab0: 0x2442a830  addiu       $v0, $v0, -0x57D0
    ctx->pc = 0x406ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944816));
label_406ab4:
    // 0x406ab4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x406ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_406ab8:
    // 0x406ab8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x406ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_406abc:
    // 0x406abc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x406abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_406ac0:
    // 0x406ac0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x406ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_406ac4:
    // 0x406ac4: 0x320f809  jalr        $t9
label_406ac8:
    if (ctx->pc == 0x406AC8u) {
        ctx->pc = 0x406AC8u;
            // 0x406ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406ACCu;
        goto label_406acc;
    }
    ctx->pc = 0x406AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x406ACCu);
        ctx->pc = 0x406AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406AC4u;
            // 0x406ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x406ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x406ACCu; }
            if (ctx->pc != 0x406ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x406ACCu;
label_406acc:
    // 0x406acc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_406ad0:
    if (ctx->pc == 0x406AD0u) {
        ctx->pc = 0x406AD0u;
            // 0x406ad0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x406AD4u;
        goto label_406ad4;
    }
    ctx->pc = 0x406ACCu;
    {
        const bool branch_taken_0x406acc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x406acc) {
            ctx->pc = 0x406AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406ACCu;
            // 0x406ad0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406AF4u;
            goto label_406af4;
        }
    }
    ctx->pc = 0x406AD4u;
label_406ad4:
    // 0x406ad4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x406ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_406ad8:
    // 0x406ad8: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x406ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_406adc:
    // 0x406adc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_406ae0:
    if (ctx->pc == 0x406AE0u) {
        ctx->pc = 0x406AE0u;
            // 0x406ae0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x406AE4u;
        goto label_406ae4;
    }
    ctx->pc = 0x406ADCu;
    {
        const bool branch_taken_0x406adc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x406AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406ADCu;
            // 0x406ae0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406adc) {
            ctx->pc = 0x406AF0u;
            goto label_406af0;
        }
    }
    ctx->pc = 0x406AE4u;
label_406ae4:
    // 0x406ae4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x406ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_406ae8:
    // 0x406ae8: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x406ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_406aec:
    // 0x406aec: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x406aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_406af0:
    // 0x406af0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x406af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_406af4:
    // 0x406af4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x406af4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_406af8:
    // 0x406af8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_406afc:
    if (ctx->pc == 0x406AFCu) {
        ctx->pc = 0x406AFCu;
            // 0x406afc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406B00u;
        goto label_406b00;
    }
    ctx->pc = 0x406AF8u;
    {
        const bool branch_taken_0x406af8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x406af8) {
            ctx->pc = 0x406AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406AF8u;
            // 0x406afc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406B0Cu;
            goto label_406b0c;
        }
    }
    ctx->pc = 0x406B00u;
label_406b00:
    // 0x406b00: 0xc0400a8  jal         func_1002A0
label_406b04:
    if (ctx->pc == 0x406B04u) {
        ctx->pc = 0x406B04u;
            // 0x406b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406B08u;
        goto label_406b08;
    }
    ctx->pc = 0x406B00u;
    SET_GPR_U32(ctx, 31, 0x406B08u);
    ctx->pc = 0x406B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406B00u;
            // 0x406b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406B08u; }
        if (ctx->pc != 0x406B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406B08u; }
        if (ctx->pc != 0x406B08u) { return; }
    }
    ctx->pc = 0x406B08u;
label_406b08:
    // 0x406b08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x406b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_406b0c:
    // 0x406b0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x406b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_406b10:
    // 0x406b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x406b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_406b14:
    // 0x406b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x406b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_406b18:
    // 0x406b18: 0x3e00008  jr          $ra
label_406b1c:
    if (ctx->pc == 0x406B1Cu) {
        ctx->pc = 0x406B1Cu;
            // 0x406b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x406B20u;
        goto label_406b20;
    }
    ctx->pc = 0x406B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406B18u;
            // 0x406b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406B20u;
label_406b20:
    // 0x406b20: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x406b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_406b24:
    // 0x406b24: 0x3e00008  jr          $ra
label_406b28:
    if (ctx->pc == 0x406B28u) {
        ctx->pc = 0x406B28u;
            // 0x406b28: 0xc440ba48  lwc1        $f0, -0x45B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x406B2Cu;
        goto label_406b2c;
    }
    ctx->pc = 0x406B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406B24u;
            // 0x406b28: 0xc440ba48  lwc1        $f0, -0x45B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406B2Cu;
label_406b2c:
    // 0x406b2c: 0x0  nop
    ctx->pc = 0x406b2cu;
    // NOP
label_406b30:
    // 0x406b30: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x406b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_406b34:
    // 0x406b34: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x406b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_406b38:
    // 0x406b38: 0xc440ba48  lwc1        $f0, -0x45B8($v0)
    ctx->pc = 0x406b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_406b3c:
    // 0x406b3c: 0x3e00008  jr          $ra
label_406b40:
    if (ctx->pc == 0x406B40u) {
        ctx->pc = 0x406B40u;
            // 0x406b40: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x406B44u;
        goto label_406b44;
    }
    ctx->pc = 0x406B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406B3Cu;
            // 0x406b40: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406B44u;
label_406b44:
    // 0x406b44: 0x0  nop
    ctx->pc = 0x406b44u;
    // NOP
label_406b48:
    // 0x406b48: 0x0  nop
    ctx->pc = 0x406b48u;
    // NOP
label_406b4c:
    // 0x406b4c: 0x0  nop
    ctx->pc = 0x406b4cu;
    // NOP
label_406b50:
    // 0x406b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x406b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_406b54:
    // 0x406b54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x406b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_406b58:
    // 0x406b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x406b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_406b5c:
    // 0x406b5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x406b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_406b60:
    // 0x406b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x406b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_406b64:
    // 0x406b64: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_406b68:
    if (ctx->pc == 0x406B68u) {
        ctx->pc = 0x406B68u;
            // 0x406b68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406B6Cu;
        goto label_406b6c;
    }
    ctx->pc = 0x406B64u;
    {
        const bool branch_taken_0x406b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x406B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406B64u;
            // 0x406b68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406b64) {
            ctx->pc = 0x406C04u;
            goto label_406c04;
        }
    }
    ctx->pc = 0x406B6Cu;
label_406b6c:
    // 0x406b6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x406b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_406b70:
    // 0x406b70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x406b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_406b74:
    // 0x406b74: 0x2463a870  addiu       $v1, $v1, -0x5790
    ctx->pc = 0x406b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944880));
label_406b78:
    // 0x406b78: 0x2442a8a8  addiu       $v0, $v0, -0x5758
    ctx->pc = 0x406b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944936));
label_406b7c:
    // 0x406b7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x406b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_406b80:
    // 0x406b80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_406b84:
    if (ctx->pc == 0x406B84u) {
        ctx->pc = 0x406B84u;
            // 0x406b84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x406B88u;
        goto label_406b88;
    }
    ctx->pc = 0x406B80u;
    {
        const bool branch_taken_0x406b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x406B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406B80u;
            // 0x406b84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406b80) {
            ctx->pc = 0x406BECu;
            goto label_406bec;
        }
    }
    ctx->pc = 0x406B88u;
label_406b88:
    // 0x406b88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x406b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_406b8c:
    // 0x406b8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x406b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_406b90:
    // 0x406b90: 0x24631870  addiu       $v1, $v1, 0x1870
    ctx->pc = 0x406b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6256));
label_406b94:
    // 0x406b94: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x406b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_406b98:
    // 0x406b98: 0x244218a8  addiu       $v0, $v0, 0x18A8
    ctx->pc = 0x406b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6312));
label_406b9c:
    // 0x406b9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x406b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_406ba0:
    // 0x406ba0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x406ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_406ba4:
    // 0x406ba4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x406ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_406ba8:
    // 0x406ba8: 0xc0407c0  jal         func_101F00
label_406bac:
    if (ctx->pc == 0x406BACu) {
        ctx->pc = 0x406BACu;
            // 0x406bac: 0x24a50670  addiu       $a1, $a1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1648));
        ctx->pc = 0x406BB0u;
        goto label_406bb0;
    }
    ctx->pc = 0x406BA8u;
    SET_GPR_U32(ctx, 31, 0x406BB0u);
    ctx->pc = 0x406BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406BA8u;
            // 0x406bac: 0x24a50670  addiu       $a1, $a1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BB0u; }
        if (ctx->pc != 0x406BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BB0u; }
        if (ctx->pc != 0x406BB0u) { return; }
    }
    ctx->pc = 0x406BB0u;
label_406bb0:
    // 0x406bb0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x406bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_406bb4:
    // 0x406bb4: 0xc0b0144  jal         func_2C0510
label_406bb8:
    if (ctx->pc == 0x406BB8u) {
        ctx->pc = 0x406BB8u;
            // 0x406bb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x406BBCu;
        goto label_406bbc;
    }
    ctx->pc = 0x406BB4u;
    SET_GPR_U32(ctx, 31, 0x406BBCu);
    ctx->pc = 0x406BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406BB4u;
            // 0x406bb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0510u;
    if (runtime->hasFunction(0x2C0510u)) {
        auto targetFn = runtime->lookupFunction(0x2C0510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BBCu; }
        if (ctx->pc != 0x406BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0510_0x2c0510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BBCu; }
        if (ctx->pc != 0x406BBCu) { return; }
    }
    ctx->pc = 0x406BBCu;
label_406bbc:
    // 0x406bbc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x406bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_406bc0:
    // 0x406bc0: 0xc0b015c  jal         func_2C0570
label_406bc4:
    if (ctx->pc == 0x406BC4u) {
        ctx->pc = 0x406BC4u;
            // 0x406bc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x406BC8u;
        goto label_406bc8;
    }
    ctx->pc = 0x406BC0u;
    SET_GPR_U32(ctx, 31, 0x406BC8u);
    ctx->pc = 0x406BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406BC0u;
            // 0x406bc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0570u;
    if (runtime->hasFunction(0x2C0570u)) {
        auto targetFn = runtime->lookupFunction(0x2C0570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BC8u; }
        if (ctx->pc != 0x406BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0570_0x2c0570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BC8u; }
        if (ctx->pc != 0x406BC8u) { return; }
    }
    ctx->pc = 0x406BC8u;
label_406bc8:
    // 0x406bc8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x406bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_406bcc:
    // 0x406bcc: 0xc0b015c  jal         func_2C0570
label_406bd0:
    if (ctx->pc == 0x406BD0u) {
        ctx->pc = 0x406BD0u;
            // 0x406bd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x406BD4u;
        goto label_406bd4;
    }
    ctx->pc = 0x406BCCu;
    SET_GPR_U32(ctx, 31, 0x406BD4u);
    ctx->pc = 0x406BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406BCCu;
            // 0x406bd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0570u;
    if (runtime->hasFunction(0x2C0570u)) {
        auto targetFn = runtime->lookupFunction(0x2C0570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BD4u; }
        if (ctx->pc != 0x406BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0570_0x2c0570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BD4u; }
        if (ctx->pc != 0x406BD4u) { return; }
    }
    ctx->pc = 0x406BD4u;
label_406bd4:
    // 0x406bd4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x406bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_406bd8:
    // 0x406bd8: 0xc0b0178  jal         func_2C05E0
label_406bdc:
    if (ctx->pc == 0x406BDCu) {
        ctx->pc = 0x406BDCu;
            // 0x406bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406BE0u;
        goto label_406be0;
    }
    ctx->pc = 0x406BD8u;
    SET_GPR_U32(ctx, 31, 0x406BE0u);
    ctx->pc = 0x406BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406BD8u;
            // 0x406bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C05E0u;
    if (runtime->hasFunction(0x2C05E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BE0u; }
        if (ctx->pc != 0x406BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C05E0_0x2c05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BE0u; }
        if (ctx->pc != 0x406BE0u) { return; }
    }
    ctx->pc = 0x406BE0u;
label_406be0:
    // 0x406be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406be4:
    // 0x406be4: 0xc0ae1c0  jal         func_2B8700
label_406be8:
    if (ctx->pc == 0x406BE8u) {
        ctx->pc = 0x406BE8u;
            // 0x406be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406BECu;
        goto label_406bec;
    }
    ctx->pc = 0x406BE4u;
    SET_GPR_U32(ctx, 31, 0x406BECu);
    ctx->pc = 0x406BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406BE4u;
            // 0x406be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BECu; }
        if (ctx->pc != 0x406BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406BECu; }
        if (ctx->pc != 0x406BECu) { return; }
    }
    ctx->pc = 0x406BECu;
label_406bec:
    // 0x406bec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x406becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_406bf0:
    // 0x406bf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x406bf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_406bf4:
    // 0x406bf4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_406bf8:
    if (ctx->pc == 0x406BF8u) {
        ctx->pc = 0x406BF8u;
            // 0x406bf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406BFCu;
        goto label_406bfc;
    }
    ctx->pc = 0x406BF4u;
    {
        const bool branch_taken_0x406bf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x406bf4) {
            ctx->pc = 0x406BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406BF4u;
            // 0x406bf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406C08u;
            goto label_406c08;
        }
    }
    ctx->pc = 0x406BFCu;
label_406bfc:
    // 0x406bfc: 0xc0400a8  jal         func_1002A0
label_406c00:
    if (ctx->pc == 0x406C00u) {
        ctx->pc = 0x406C00u;
            // 0x406c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406C04u;
        goto label_406c04;
    }
    ctx->pc = 0x406BFCu;
    SET_GPR_U32(ctx, 31, 0x406C04u);
    ctx->pc = 0x406C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406BFCu;
            // 0x406c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406C04u; }
        if (ctx->pc != 0x406C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406C04u; }
        if (ctx->pc != 0x406C04u) { return; }
    }
    ctx->pc = 0x406C04u;
label_406c04:
    // 0x406c04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x406c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406c08:
    // 0x406c08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x406c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_406c0c:
    // 0x406c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x406c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_406c10:
    // 0x406c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x406c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_406c14:
    // 0x406c14: 0x3e00008  jr          $ra
label_406c18:
    if (ctx->pc == 0x406C18u) {
        ctx->pc = 0x406C18u;
            // 0x406c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x406C1Cu;
        goto label_406c1c;
    }
    ctx->pc = 0x406C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406C14u;
            // 0x406c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406C1Cu;
label_406c1c:
    // 0x406c1c: 0x0  nop
    ctx->pc = 0x406c1cu;
    // NOP
label_406c20:
    // 0x406c20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x406c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_406c24:
    // 0x406c24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x406c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_406c28:
    // 0x406c28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x406c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_406c2c:
    // 0x406c2c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x406c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_406c30:
    // 0x406c30: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x406c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_406c34:
    // 0x406c34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x406c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_406c38:
    // 0x406c38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x406c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_406c3c:
    // 0x406c3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x406c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_406c40:
    // 0x406c40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x406c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_406c44:
    // 0x406c44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x406c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_406c48:
    // 0x406c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x406c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_406c4c:
    // 0x406c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x406c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_406c50:
    // 0x406c50: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x406c50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_406c54:
    // 0x406c54: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_406c58:
    if (ctx->pc == 0x406C58u) {
        ctx->pc = 0x406C58u;
            // 0x406c58: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406C5Cu;
        goto label_406c5c;
    }
    ctx->pc = 0x406C54u;
    {
        const bool branch_taken_0x406c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x406C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406C54u;
            // 0x406c58: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406c54) {
            ctx->pc = 0x406CA4u;
            goto label_406ca4;
        }
    }
    ctx->pc = 0x406C5Cu;
label_406c5c:
    // 0x406c5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x406c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_406c60:
    // 0x406c60: 0x50a300b0  beql        $a1, $v1, . + 4 + (0xB0 << 2)
label_406c64:
    if (ctx->pc == 0x406C64u) {
        ctx->pc = 0x406C64u;
            // 0x406c64: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x406C68u;
        goto label_406c68;
    }
    ctx->pc = 0x406C60u;
    {
        const bool branch_taken_0x406c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x406c60) {
            ctx->pc = 0x406C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x406C60u;
            // 0x406c64: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x406F24u;
            goto label_406f24;
        }
    }
    ctx->pc = 0x406C68u;
label_406c68:
    // 0x406c68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x406c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_406c6c:
    // 0x406c6c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_406c70:
    if (ctx->pc == 0x406C70u) {
        ctx->pc = 0x406C74u;
        goto label_406c74;
    }
    ctx->pc = 0x406C6Cu;
    {
        const bool branch_taken_0x406c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x406c6c) {
            ctx->pc = 0x406C7Cu;
            goto label_406c7c;
        }
    }
    ctx->pc = 0x406C74u;
label_406c74:
    // 0x406c74: 0x100000aa  b           . + 4 + (0xAA << 2)
label_406c78:
    if (ctx->pc == 0x406C78u) {
        ctx->pc = 0x406C7Cu;
        goto label_406c7c;
    }
    ctx->pc = 0x406C74u;
    {
        const bool branch_taken_0x406c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x406c74) {
            ctx->pc = 0x406F20u;
            goto label_406f20;
        }
    }
    ctx->pc = 0x406C7Cu;
label_406c7c:
    // 0x406c7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x406c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_406c80:
    // 0x406c80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x406c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_406c84:
    // 0x406c84: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x406c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_406c88:
    // 0x406c88: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x406c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_406c8c:
    // 0x406c8c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x406c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_406c90:
    // 0x406c90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x406c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_406c94:
    // 0x406c94: 0x320f809  jalr        $t9
label_406c98:
    if (ctx->pc == 0x406C98u) {
        ctx->pc = 0x406C98u;
            // 0x406c98: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x406C9Cu;
        goto label_406c9c;
    }
    ctx->pc = 0x406C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x406C9Cu);
        ctx->pc = 0x406C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406C94u;
            // 0x406c98: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x406C9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x406C9Cu; }
            if (ctx->pc != 0x406C9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x406C9Cu;
label_406c9c:
    // 0x406c9c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_406ca0:
    if (ctx->pc == 0x406CA0u) {
        ctx->pc = 0x406CA4u;
        goto label_406ca4;
    }
    ctx->pc = 0x406C9Cu;
    {
        const bool branch_taken_0x406c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x406c9c) {
            ctx->pc = 0x406F20u;
            goto label_406f20;
        }
    }
    ctx->pc = 0x406CA4u;
label_406ca4:
    // 0x406ca4: 0x8ee30070  lw          $v1, 0x70($s7)
    ctx->pc = 0x406ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 112)));
label_406ca8:
    // 0x406ca8: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
label_406cac:
    if (ctx->pc == 0x406CACu) {
        ctx->pc = 0x406CACu;
            // 0x406cac: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x406CB0u;
        goto label_406cb0;
    }
    ctx->pc = 0x406CA8u;
    {
        const bool branch_taken_0x406ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x406CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406CA8u;
            // 0x406cac: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ca8) {
            ctx->pc = 0x406F20u;
            goto label_406f20;
        }
    }
    ctx->pc = 0x406CB0u;
label_406cb0:
    // 0x406cb0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x406cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_406cb4:
    // 0x406cb4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x406cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_406cb8:
    // 0x406cb8: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x406cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_406cbc:
    // 0x406cbc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x406cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_406cc0:
    // 0x406cc0: 0x26f20084  addiu       $s2, $s7, 0x84
    ctx->pc = 0x406cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 132));
label_406cc4:
    // 0x406cc4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x406cc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406cc8:
    // 0x406cc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x406cc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_406ccc:
    // 0x406ccc: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x406cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_406cd0:
    // 0x406cd0: 0x8c9e0130  lw          $fp, 0x130($a0)
    ctx->pc = 0x406cd0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_406cd4:
    // 0x406cd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x406cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_406cd8:
    // 0x406cd8: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x406cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_406cdc:
    // 0x406cdc: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x406cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_406ce0:
    // 0x406ce0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x406ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_406ce4:
    // 0x406ce4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x406ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_406ce8:
    // 0x406ce8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x406ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_406cec:
    // 0x406cec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x406cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_406cf0:
    // 0x406cf0: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x406cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_406cf4:
    // 0x406cf4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x406cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_406cf8:
    // 0x406cf8: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x406cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_406cfc:
    // 0x406cfc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x406cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_406d00:
    // 0x406d00: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x406d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_406d04:
    // 0x406d04: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x406d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_406d08:
    // 0x406d08: 0xaca0e3d8  sw          $zero, -0x1C28($a1)
    ctx->pc = 0x406d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 0));
label_406d0c:
    // 0x406d0c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x406d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_406d10:
    // 0x406d10: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x406d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_406d14:
    // 0x406d14: 0xac80e3c0  sw          $zero, -0x1C40($a0)
    ctx->pc = 0x406d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960064), GPR_U32(ctx, 0));
label_406d18:
    // 0x406d18: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x406d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_406d1c:
    // 0x406d1c: 0xa0607298  sb          $zero, 0x7298($v1)
    ctx->pc = 0x406d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29336), (uint8_t)GPR_U32(ctx, 0));
label_406d20:
    // 0x406d20: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x406d20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_406d24:
    // 0x406d24: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x406d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_406d28:
    // 0x406d28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x406d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_406d2c:
    // 0x406d2c: 0x80437298  lb          $v1, 0x7298($v0)
    ctx->pc = 0x406d2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29336)));
label_406d30:
    // 0x406d30: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x406d30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_406d34:
    // 0x406d34: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x406d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_406d38:
    // 0x406d38: 0x8ee20074  lw          $v0, 0x74($s7)
    ctx->pc = 0x406d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_406d3c:
    // 0x406d3c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x406d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_406d40:
    // 0x406d40: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x406d40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_406d44:
    // 0x406d44: 0x92820070  lbu         $v0, 0x70($s4)
    ctx->pc = 0x406d44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 112)));
label_406d48:
    // 0x406d48: 0x30510001  andi        $s1, $v0, 0x1
    ctx->pc = 0x406d48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_406d4c:
    // 0x406d4c: 0x10710008  beq         $v1, $s1, . + 4 + (0x8 << 2)
label_406d50:
    if (ctx->pc == 0x406D50u) {
        ctx->pc = 0x406D54u;
        goto label_406d54;
    }
    ctx->pc = 0x406D4Cu;
    {
        const bool branch_taken_0x406d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x406d4c) {
            ctx->pc = 0x406D70u;
            goto label_406d70;
        }
    }
    ctx->pc = 0x406D54u;
label_406d54:
    // 0x406d54: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x406d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_406d58:
    // 0x406d58: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x406d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_406d5c:
    // 0x406d5c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x406d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_406d60:
    // 0x406d60: 0xc101c10  jal         func_407040
label_406d64:
    if (ctx->pc == 0x406D64u) {
        ctx->pc = 0x406D64u;
            // 0x406d64: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x406D68u;
        goto label_406d68;
    }
    ctx->pc = 0x406D60u;
    SET_GPR_U32(ctx, 31, 0x406D68u);
    ctx->pc = 0x406D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406D60u;
            // 0x406d64: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x407040u;
    if (runtime->hasFunction(0x407040u)) {
        auto targetFn = runtime->lookupFunction(0x407040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D68u; }
        if (ctx->pc != 0x406D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00407040_0x407040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D68u; }
        if (ctx->pc != 0x406D68u) { return; }
    }
    ctx->pc = 0x406D68u;
label_406d68:
    // 0x406d68: 0xc101c08  jal         func_407020
label_406d6c:
    if (ctx->pc == 0x406D6Cu) {
        ctx->pc = 0x406D70u;
        goto label_406d70;
    }
    ctx->pc = 0x406D68u;
    SET_GPR_U32(ctx, 31, 0x406D70u);
    ctx->pc = 0x407020u;
    if (runtime->hasFunction(0x407020u)) {
        auto targetFn = runtime->lookupFunction(0x407020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D70u; }
        if (ctx->pc != 0x406D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00407020_0x407020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D70u; }
        if (ctx->pc != 0x406D70u) { return; }
    }
    ctx->pc = 0x406D70u;
label_406d70:
    // 0x406d70: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x406d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_406d74:
    // 0x406d74: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x406d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_406d78:
    // 0x406d78: 0xc0d1c14  jal         func_347050
label_406d7c:
    if (ctx->pc == 0x406D7Cu) {
        ctx->pc = 0x406D7Cu;
            // 0x406d7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406D80u;
        goto label_406d80;
    }
    ctx->pc = 0x406D78u;
    SET_GPR_U32(ctx, 31, 0x406D80u);
    ctx->pc = 0x406D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406D78u;
            // 0x406d7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D80u; }
        if (ctx->pc != 0x406D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D80u; }
        if (ctx->pc != 0x406D80u) { return; }
    }
    ctx->pc = 0x406D80u;
label_406d80:
    // 0x406d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x406d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406d84:
    // 0x406d84: 0xc04f278  jal         func_13C9E0
label_406d88:
    if (ctx->pc == 0x406D88u) {
        ctx->pc = 0x406D88u;
            // 0x406d88: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x406D8Cu;
        goto label_406d8c;
    }
    ctx->pc = 0x406D84u;
    SET_GPR_U32(ctx, 31, 0x406D8Cu);
    ctx->pc = 0x406D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406D84u;
            // 0x406d88: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D8Cu; }
        if (ctx->pc != 0x406D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D8Cu; }
        if (ctx->pc != 0x406D8Cu) { return; }
    }
    ctx->pc = 0x406D8Cu;
label_406d8c:
    // 0x406d8c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x406d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_406d90:
    // 0x406d90: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x406d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_406d94:
    // 0x406d94: 0xc04cd60  jal         func_133580
label_406d98:
    if (ctx->pc == 0x406D98u) {
        ctx->pc = 0x406D98u;
            // 0x406d98: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x406D9Cu;
        goto label_406d9c;
    }
    ctx->pc = 0x406D94u;
    SET_GPR_U32(ctx, 31, 0x406D9Cu);
    ctx->pc = 0x406D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406D94u;
            // 0x406d98: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D9Cu; }
        if (ctx->pc != 0x406D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406D9Cu; }
        if (ctx->pc != 0x406D9Cu) { return; }
    }
    ctx->pc = 0x406D9Cu;
label_406d9c:
    // 0x406d9c: 0xc0d1dc8  jal         func_347720
label_406da0:
    if (ctx->pc == 0x406DA0u) {
        ctx->pc = 0x406DA0u;
            // 0x406da0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406DA4u;
        goto label_406da4;
    }
    ctx->pc = 0x406D9Cu;
    SET_GPR_U32(ctx, 31, 0x406DA4u);
    ctx->pc = 0x406DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406D9Cu;
            // 0x406da0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DA4u; }
        if (ctx->pc != 0x406DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DA4u; }
        if (ctx->pc != 0x406DA4u) { return; }
    }
    ctx->pc = 0x406DA4u;
label_406da4:
    // 0x406da4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x406da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_406da8:
    // 0x406da8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x406da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_406dac:
    // 0x406dac: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x406dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_406db0:
    // 0x406db0: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x406db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_406db4:
    // 0x406db4: 0xc04ce50  jal         func_133940
label_406db8:
    if (ctx->pc == 0x406DB8u) {
        ctx->pc = 0x406DB8u;
            // 0x406db8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x406DBCu;
        goto label_406dbc;
    }
    ctx->pc = 0x406DB4u;
    SET_GPR_U32(ctx, 31, 0x406DBCu);
    ctx->pc = 0x406DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406DB4u;
            // 0x406db8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DBCu; }
        if (ctx->pc != 0x406DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DBCu; }
        if (ctx->pc != 0x406DBCu) { return; }
    }
    ctx->pc = 0x406DBCu;
label_406dbc:
    // 0x406dbc: 0xc0d1c10  jal         func_347040
label_406dc0:
    if (ctx->pc == 0x406DC0u) {
        ctx->pc = 0x406DC0u;
            // 0x406dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406DC4u;
        goto label_406dc4;
    }
    ctx->pc = 0x406DBCu;
    SET_GPR_U32(ctx, 31, 0x406DC4u);
    ctx->pc = 0x406DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406DBCu;
            // 0x406dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DC4u; }
        if (ctx->pc != 0x406DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DC4u; }
        if (ctx->pc != 0x406DC4u) { return; }
    }
    ctx->pc = 0x406DC4u;
label_406dc4:
    // 0x406dc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x406dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406dc8:
    // 0x406dc8: 0xc04ce80  jal         func_133A00
label_406dcc:
    if (ctx->pc == 0x406DCCu) {
        ctx->pc = 0x406DCCu;
            // 0x406dcc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x406DD0u;
        goto label_406dd0;
    }
    ctx->pc = 0x406DC8u;
    SET_GPR_U32(ctx, 31, 0x406DD0u);
    ctx->pc = 0x406DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406DC8u;
            // 0x406dcc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DD0u; }
        if (ctx->pc != 0x406DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DD0u; }
        if (ctx->pc != 0x406DD0u) { return; }
    }
    ctx->pc = 0x406DD0u;
label_406dd0:
    // 0x406dd0: 0xc0d4108  jal         func_350420
label_406dd4:
    if (ctx->pc == 0x406DD4u) {
        ctx->pc = 0x406DD8u;
        goto label_406dd8;
    }
    ctx->pc = 0x406DD0u;
    SET_GPR_U32(ctx, 31, 0x406DD8u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DD8u; }
        if (ctx->pc != 0x406DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DD8u; }
        if (ctx->pc != 0x406DD8u) { return; }
    }
    ctx->pc = 0x406DD8u;
label_406dd8:
    // 0x406dd8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x406dd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406ddc:
    // 0x406ddc: 0xc0d4104  jal         func_350410
label_406de0:
    if (ctx->pc == 0x406DE0u) {
        ctx->pc = 0x406DE0u;
            // 0x406de0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406DE4u;
        goto label_406de4;
    }
    ctx->pc = 0x406DDCu;
    SET_GPR_U32(ctx, 31, 0x406DE4u);
    ctx->pc = 0x406DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406DDCu;
            // 0x406de0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DE4u; }
        if (ctx->pc != 0x406DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406DE4u; }
        if (ctx->pc != 0x406DE4u) { return; }
    }
    ctx->pc = 0x406DE4u;
label_406de4:
    // 0x406de4: 0x3c03471c  lui         $v1, 0x471C
    ctx->pc = 0x406de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18204 << 16));
label_406de8:
    // 0x406de8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x406de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_406dec:
    // 0x406dec: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x406decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_406df0:
    // 0x406df0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x406df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_406df4:
    // 0x406df4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x406df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_406df8:
    // 0x406df8: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x406df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_406dfc:
    // 0x406dfc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x406dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406e00:
    // 0x406e00: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x406e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406e04:
    // 0x406e04: 0xc0d40ac  jal         func_3502B0
label_406e08:
    if (ctx->pc == 0x406E08u) {
        ctx->pc = 0x406E08u;
            // 0x406e08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406E0Cu;
        goto label_406e0c;
    }
    ctx->pc = 0x406E04u;
    SET_GPR_U32(ctx, 31, 0x406E0Cu);
    ctx->pc = 0x406E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406E04u;
            // 0x406e08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E0Cu; }
        if (ctx->pc != 0x406E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E0Cu; }
        if (ctx->pc != 0x406E0Cu) { return; }
    }
    ctx->pc = 0x406E0Cu;
label_406e0c:
    // 0x406e0c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x406e0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_406e10:
    // 0x406e10: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_406e14:
    if (ctx->pc == 0x406E14u) {
        ctx->pc = 0x406E14u;
            // 0x406e14: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x406E18u;
        goto label_406e18;
    }
    ctx->pc = 0x406E10u;
    {
        const bool branch_taken_0x406e10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x406E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406E10u;
            // 0x406e14: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406e10) {
            ctx->pc = 0x406E38u;
            goto label_406e38;
        }
    }
    ctx->pc = 0x406E18u;
label_406e18:
    // 0x406e18: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x406e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_406e1c:
    // 0x406e1c: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
label_406e20:
    if (ctx->pc == 0x406E20u) {
        ctx->pc = 0x406E24u;
        goto label_406e24;
    }
    ctx->pc = 0x406E1Cu;
    {
        const bool branch_taken_0x406e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x406e1c) {
            ctx->pc = 0x406EC0u;
            goto label_406ec0;
        }
    }
    ctx->pc = 0x406E24u;
label_406e24:
    // 0x406e24: 0xc101bfc  jal         func_406FF0
label_406e28:
    if (ctx->pc == 0x406E28u) {
        ctx->pc = 0x406E28u;
            // 0x406e28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x406E2Cu;
        goto label_406e2c;
    }
    ctx->pc = 0x406E24u;
    SET_GPR_U32(ctx, 31, 0x406E2Cu);
    ctx->pc = 0x406E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406E24u;
            // 0x406e28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x406FF0u;
    if (runtime->hasFunction(0x406FF0u)) {
        auto targetFn = runtime->lookupFunction(0x406FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E2Cu; }
        if (ctx->pc != 0x406E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00406FF0_0x406ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E2Cu; }
        if (ctx->pc != 0x406E2Cu) { return; }
    }
    ctx->pc = 0x406E2Cu;
label_406e2c:
    // 0x406e2c: 0x10000024  b           . + 4 + (0x24 << 2)
label_406e30:
    if (ctx->pc == 0x406E30u) {
        ctx->pc = 0x406E34u;
        goto label_406e34;
    }
    ctx->pc = 0x406E2Cu;
    {
        const bool branch_taken_0x406e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x406e2c) {
            ctx->pc = 0x406EC0u;
            goto label_406ec0;
        }
    }
    ctx->pc = 0x406E34u;
label_406e34:
    // 0x406e34: 0x0  nop
    ctx->pc = 0x406e34u;
    // NOP
label_406e38:
    // 0x406e38: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x406e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_406e3c:
    // 0x406e3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_406e40:
    if (ctx->pc == 0x406E40u) {
        ctx->pc = 0x406E44u;
        goto label_406e44;
    }
    ctx->pc = 0x406E3Cu;
    {
        const bool branch_taken_0x406e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x406e3c) {
            ctx->pc = 0x406E50u;
            goto label_406e50;
        }
    }
    ctx->pc = 0x406E44u;
label_406e44:
    // 0x406e44: 0xc101bfc  jal         func_406FF0
label_406e48:
    if (ctx->pc == 0x406E48u) {
        ctx->pc = 0x406E48u;
            // 0x406e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406E4Cu;
        goto label_406e4c;
    }
    ctx->pc = 0x406E44u;
    SET_GPR_U32(ctx, 31, 0x406E4Cu);
    ctx->pc = 0x406E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406E44u;
            // 0x406e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x406FF0u;
    if (runtime->hasFunction(0x406FF0u)) {
        auto targetFn = runtime->lookupFunction(0x406FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E4Cu; }
        if (ctx->pc != 0x406E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00406FF0_0x406ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E4Cu; }
        if (ctx->pc != 0x406E4Cu) { return; }
    }
    ctx->pc = 0x406E4Cu;
label_406e4c:
    // 0x406e4c: 0x0  nop
    ctx->pc = 0x406e4cu;
    // NOP
label_406e50:
    // 0x406e50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x406e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_406e54:
    // 0x406e54: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x406e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_406e58:
    // 0x406e58: 0xc101bd4  jal         func_406F50
label_406e5c:
    if (ctx->pc == 0x406E5Cu) {
        ctx->pc = 0x406E5Cu;
            // 0x406e5c: 0x27a6018c  addiu       $a2, $sp, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
        ctx->pc = 0x406E60u;
        goto label_406e60;
    }
    ctx->pc = 0x406E58u;
    SET_GPR_U32(ctx, 31, 0x406E60u);
    ctx->pc = 0x406E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406E58u;
            // 0x406e5c: 0x27a6018c  addiu       $a2, $sp, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
        ctx->in_delay_slot = false;
    ctx->pc = 0x406F50u;
    if (runtime->hasFunction(0x406F50u)) {
        auto targetFn = runtime->lookupFunction(0x406F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E60u; }
        if (ctx->pc != 0x406E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00406F50_0x406f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E60u; }
        if (ctx->pc != 0x406E60u) { return; }
    }
    ctx->pc = 0x406E60u;
label_406e60:
    // 0x406e60: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x406e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_406e64:
    // 0x406e64: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x406e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_406e68:
    // 0x406e68: 0xc04cd60  jal         func_133580
label_406e6c:
    if (ctx->pc == 0x406E6Cu) {
        ctx->pc = 0x406E6Cu;
            // 0x406e6c: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x406E70u;
        goto label_406e70;
    }
    ctx->pc = 0x406E68u;
    SET_GPR_U32(ctx, 31, 0x406E70u);
    ctx->pc = 0x406E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406E68u;
            // 0x406e6c: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E70u; }
        if (ctx->pc != 0x406E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E70u; }
        if (ctx->pc != 0x406E70u) { return; }
    }
    ctx->pc = 0x406E70u;
label_406e70:
    // 0x406e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x406e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_406e74:
    // 0x406e74: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x406e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_406e78:
    // 0x406e78: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x406e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_406e7c:
    // 0x406e7c: 0xc04e4a4  jal         func_139290
label_406e80:
    if (ctx->pc == 0x406E80u) {
        ctx->pc = 0x406E80u;
            // 0x406e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406E84u;
        goto label_406e84;
    }
    ctx->pc = 0x406E7Cu;
    SET_GPR_U32(ctx, 31, 0x406E84u);
    ctx->pc = 0x406E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406E7Cu;
            // 0x406e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E84u; }
        if (ctx->pc != 0x406E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406E84u; }
        if (ctx->pc != 0x406E84u) { return; }
    }
    ctx->pc = 0x406E84u;
label_406e84:
    // 0x406e84: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x406e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_406e88:
    // 0x406e88: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x406e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_406e8c:
    // 0x406e8c: 0x320f809  jalr        $t9
label_406e90:
    if (ctx->pc == 0x406E90u) {
        ctx->pc = 0x406E90u;
            // 0x406e90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406E94u;
        goto label_406e94;
    }
    ctx->pc = 0x406E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x406E94u);
        ctx->pc = 0x406E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406E8Cu;
            // 0x406e90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x406E94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x406E94u; }
            if (ctx->pc != 0x406E94u) { return; }
        }
        }
    }
    ctx->pc = 0x406E94u;
label_406e94:
    // 0x406e94: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x406e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_406e98:
    // 0x406e98: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x406e98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_406e9c:
    // 0x406e9c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x406e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_406ea0:
    // 0x406ea0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x406ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_406ea4:
    // 0x406ea4: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x406ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_406ea8:
    // 0x406ea8: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x406ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_406eac:
    // 0x406eac: 0xc04cfcc  jal         func_133F30
label_406eb0:
    if (ctx->pc == 0x406EB0u) {
        ctx->pc = 0x406EB0u;
            // 0x406eb0: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x406EB4u;
        goto label_406eb4;
    }
    ctx->pc = 0x406EACu;
    SET_GPR_U32(ctx, 31, 0x406EB4u);
    ctx->pc = 0x406EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406EACu;
            // 0x406eb0: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406EB4u; }
        if (ctx->pc != 0x406EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406EB4u; }
        if (ctx->pc != 0x406EB4u) { return; }
    }
    ctx->pc = 0x406EB4u;
label_406eb4:
    // 0x406eb4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x406eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_406eb8:
    // 0x406eb8: 0xa0717298  sb          $s1, 0x7298($v1)
    ctx->pc = 0x406eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29336), (uint8_t)GPR_U32(ctx, 17));
label_406ebc:
    // 0x406ebc: 0x0  nop
    ctx->pc = 0x406ebcu;
    // NOP
label_406ec0:
    // 0x406ec0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x406ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_406ec4:
    // 0x406ec4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x406ec4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_406ec8:
    // 0x406ec8: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x406ec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_406ecc:
    // 0x406ecc: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
label_406ed0:
    if (ctx->pc == 0x406ED0u) {
        ctx->pc = 0x406ED0u;
            // 0x406ed0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x406ED4u;
        goto label_406ed4;
    }
    ctx->pc = 0x406ECCu;
    {
        const bool branch_taken_0x406ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x406ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406ECCu;
            // 0x406ed0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ecc) {
            ctx->pc = 0x406D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_406d20;
        }
    }
    ctx->pc = 0x406ED4u;
label_406ed4:
    // 0x406ed4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x406ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_406ed8:
    // 0x406ed8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_406edc:
    // 0x406edc: 0x80847298  lb          $a0, 0x7298($a0)
    ctx->pc = 0x406edcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29336)));
label_406ee0:
    // 0x406ee0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x406ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_406ee4:
    // 0x406ee4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x406ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_406ee8:
    // 0x406ee8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_406eec:
    if (ctx->pc == 0x406EECu) {
        ctx->pc = 0x406EECu;
            // 0x406eec: 0x2448021  addu        $s0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x406EF0u;
        goto label_406ef0;
    }
    ctx->pc = 0x406EE8u;
    {
        const bool branch_taken_0x406ee8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x406EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406EE8u;
            // 0x406eec: 0x2448021  addu        $s0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ee8) {
            ctx->pc = 0x406F20u;
            goto label_406f20;
        }
    }
    ctx->pc = 0x406EF0u;
label_406ef0:
    // 0x406ef0: 0xc04e738  jal         func_139CE0
label_406ef4:
    if (ctx->pc == 0x406EF4u) {
        ctx->pc = 0x406EF4u;
            // 0x406ef4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x406EF8u;
        goto label_406ef8;
    }
    ctx->pc = 0x406EF0u;
    SET_GPR_U32(ctx, 31, 0x406EF8u);
    ctx->pc = 0x406EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406EF0u;
            // 0x406ef4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406EF8u; }
        if (ctx->pc != 0x406EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406EF8u; }
        if (ctx->pc != 0x406EF8u) { return; }
    }
    ctx->pc = 0x406EF8u;
label_406ef8:
    // 0x406ef8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x406ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_406efc:
    // 0x406efc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x406efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_406f00:
    // 0x406f00: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x406f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_406f04:
    // 0x406f04: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x406f04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_406f08:
    // 0x406f08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x406f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_406f0c:
    // 0x406f0c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x406f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_406f10:
    // 0x406f10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x406f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_406f14:
    // 0x406f14: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x406f14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_406f18:
    // 0x406f18: 0xc055754  jal         func_155D50
label_406f1c:
    if (ctx->pc == 0x406F1Cu) {
        ctx->pc = 0x406F1Cu;
            // 0x406f1c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x406F20u;
        goto label_406f20;
    }
    ctx->pc = 0x406F18u;
    SET_GPR_U32(ctx, 31, 0x406F20u);
    ctx->pc = 0x406F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x406F18u;
            // 0x406f1c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406F20u; }
        if (ctx->pc != 0x406F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x406F20u; }
        if (ctx->pc != 0x406F20u) { return; }
    }
    ctx->pc = 0x406F20u;
label_406f20:
    // 0x406f20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x406f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_406f24:
    // 0x406f24: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x406f24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_406f28:
    // 0x406f28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x406f28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_406f2c:
    // 0x406f2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x406f2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_406f30:
    // 0x406f30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x406f30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_406f34:
    // 0x406f34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x406f34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_406f38:
    // 0x406f38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x406f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_406f3c:
    // 0x406f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x406f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_406f40:
    // 0x406f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x406f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_406f44:
    // 0x406f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x406f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_406f48:
    // 0x406f48: 0x3e00008  jr          $ra
label_406f4c:
    if (ctx->pc == 0x406F4Cu) {
        ctx->pc = 0x406F4Cu;
            // 0x406f4c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x406F50u;
        goto label_fallthrough_0x406f48;
    }
    ctx->pc = 0x406F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406F48u;
            // 0x406f4c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x406f48:
    ctx->pc = 0x406F50u;
}
