#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00326980
// Address: 0x326980 - 0x326f40
void sub_00326980_0x326980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326980_0x326980");
#endif

    switch (ctx->pc) {
        case 0x326980u: goto label_326980;
        case 0x326984u: goto label_326984;
        case 0x326988u: goto label_326988;
        case 0x32698cu: goto label_32698c;
        case 0x326990u: goto label_326990;
        case 0x326994u: goto label_326994;
        case 0x326998u: goto label_326998;
        case 0x32699cu: goto label_32699c;
        case 0x3269a0u: goto label_3269a0;
        case 0x3269a4u: goto label_3269a4;
        case 0x3269a8u: goto label_3269a8;
        case 0x3269acu: goto label_3269ac;
        case 0x3269b0u: goto label_3269b0;
        case 0x3269b4u: goto label_3269b4;
        case 0x3269b8u: goto label_3269b8;
        case 0x3269bcu: goto label_3269bc;
        case 0x3269c0u: goto label_3269c0;
        case 0x3269c4u: goto label_3269c4;
        case 0x3269c8u: goto label_3269c8;
        case 0x3269ccu: goto label_3269cc;
        case 0x3269d0u: goto label_3269d0;
        case 0x3269d4u: goto label_3269d4;
        case 0x3269d8u: goto label_3269d8;
        case 0x3269dcu: goto label_3269dc;
        case 0x3269e0u: goto label_3269e0;
        case 0x3269e4u: goto label_3269e4;
        case 0x3269e8u: goto label_3269e8;
        case 0x3269ecu: goto label_3269ec;
        case 0x3269f0u: goto label_3269f0;
        case 0x3269f4u: goto label_3269f4;
        case 0x3269f8u: goto label_3269f8;
        case 0x3269fcu: goto label_3269fc;
        case 0x326a00u: goto label_326a00;
        case 0x326a04u: goto label_326a04;
        case 0x326a08u: goto label_326a08;
        case 0x326a0cu: goto label_326a0c;
        case 0x326a10u: goto label_326a10;
        case 0x326a14u: goto label_326a14;
        case 0x326a18u: goto label_326a18;
        case 0x326a1cu: goto label_326a1c;
        case 0x326a20u: goto label_326a20;
        case 0x326a24u: goto label_326a24;
        case 0x326a28u: goto label_326a28;
        case 0x326a2cu: goto label_326a2c;
        case 0x326a30u: goto label_326a30;
        case 0x326a34u: goto label_326a34;
        case 0x326a38u: goto label_326a38;
        case 0x326a3cu: goto label_326a3c;
        case 0x326a40u: goto label_326a40;
        case 0x326a44u: goto label_326a44;
        case 0x326a48u: goto label_326a48;
        case 0x326a4cu: goto label_326a4c;
        case 0x326a50u: goto label_326a50;
        case 0x326a54u: goto label_326a54;
        case 0x326a58u: goto label_326a58;
        case 0x326a5cu: goto label_326a5c;
        case 0x326a60u: goto label_326a60;
        case 0x326a64u: goto label_326a64;
        case 0x326a68u: goto label_326a68;
        case 0x326a6cu: goto label_326a6c;
        case 0x326a70u: goto label_326a70;
        case 0x326a74u: goto label_326a74;
        case 0x326a78u: goto label_326a78;
        case 0x326a7cu: goto label_326a7c;
        case 0x326a80u: goto label_326a80;
        case 0x326a84u: goto label_326a84;
        case 0x326a88u: goto label_326a88;
        case 0x326a8cu: goto label_326a8c;
        case 0x326a90u: goto label_326a90;
        case 0x326a94u: goto label_326a94;
        case 0x326a98u: goto label_326a98;
        case 0x326a9cu: goto label_326a9c;
        case 0x326aa0u: goto label_326aa0;
        case 0x326aa4u: goto label_326aa4;
        case 0x326aa8u: goto label_326aa8;
        case 0x326aacu: goto label_326aac;
        case 0x326ab0u: goto label_326ab0;
        case 0x326ab4u: goto label_326ab4;
        case 0x326ab8u: goto label_326ab8;
        case 0x326abcu: goto label_326abc;
        case 0x326ac0u: goto label_326ac0;
        case 0x326ac4u: goto label_326ac4;
        case 0x326ac8u: goto label_326ac8;
        case 0x326accu: goto label_326acc;
        case 0x326ad0u: goto label_326ad0;
        case 0x326ad4u: goto label_326ad4;
        case 0x326ad8u: goto label_326ad8;
        case 0x326adcu: goto label_326adc;
        case 0x326ae0u: goto label_326ae0;
        case 0x326ae4u: goto label_326ae4;
        case 0x326ae8u: goto label_326ae8;
        case 0x326aecu: goto label_326aec;
        case 0x326af0u: goto label_326af0;
        case 0x326af4u: goto label_326af4;
        case 0x326af8u: goto label_326af8;
        case 0x326afcu: goto label_326afc;
        case 0x326b00u: goto label_326b00;
        case 0x326b04u: goto label_326b04;
        case 0x326b08u: goto label_326b08;
        case 0x326b0cu: goto label_326b0c;
        case 0x326b10u: goto label_326b10;
        case 0x326b14u: goto label_326b14;
        case 0x326b18u: goto label_326b18;
        case 0x326b1cu: goto label_326b1c;
        case 0x326b20u: goto label_326b20;
        case 0x326b24u: goto label_326b24;
        case 0x326b28u: goto label_326b28;
        case 0x326b2cu: goto label_326b2c;
        case 0x326b30u: goto label_326b30;
        case 0x326b34u: goto label_326b34;
        case 0x326b38u: goto label_326b38;
        case 0x326b3cu: goto label_326b3c;
        case 0x326b40u: goto label_326b40;
        case 0x326b44u: goto label_326b44;
        case 0x326b48u: goto label_326b48;
        case 0x326b4cu: goto label_326b4c;
        case 0x326b50u: goto label_326b50;
        case 0x326b54u: goto label_326b54;
        case 0x326b58u: goto label_326b58;
        case 0x326b5cu: goto label_326b5c;
        case 0x326b60u: goto label_326b60;
        case 0x326b64u: goto label_326b64;
        case 0x326b68u: goto label_326b68;
        case 0x326b6cu: goto label_326b6c;
        case 0x326b70u: goto label_326b70;
        case 0x326b74u: goto label_326b74;
        case 0x326b78u: goto label_326b78;
        case 0x326b7cu: goto label_326b7c;
        case 0x326b80u: goto label_326b80;
        case 0x326b84u: goto label_326b84;
        case 0x326b88u: goto label_326b88;
        case 0x326b8cu: goto label_326b8c;
        case 0x326b90u: goto label_326b90;
        case 0x326b94u: goto label_326b94;
        case 0x326b98u: goto label_326b98;
        case 0x326b9cu: goto label_326b9c;
        case 0x326ba0u: goto label_326ba0;
        case 0x326ba4u: goto label_326ba4;
        case 0x326ba8u: goto label_326ba8;
        case 0x326bacu: goto label_326bac;
        case 0x326bb0u: goto label_326bb0;
        case 0x326bb4u: goto label_326bb4;
        case 0x326bb8u: goto label_326bb8;
        case 0x326bbcu: goto label_326bbc;
        case 0x326bc0u: goto label_326bc0;
        case 0x326bc4u: goto label_326bc4;
        case 0x326bc8u: goto label_326bc8;
        case 0x326bccu: goto label_326bcc;
        case 0x326bd0u: goto label_326bd0;
        case 0x326bd4u: goto label_326bd4;
        case 0x326bd8u: goto label_326bd8;
        case 0x326bdcu: goto label_326bdc;
        case 0x326be0u: goto label_326be0;
        case 0x326be4u: goto label_326be4;
        case 0x326be8u: goto label_326be8;
        case 0x326becu: goto label_326bec;
        case 0x326bf0u: goto label_326bf0;
        case 0x326bf4u: goto label_326bf4;
        case 0x326bf8u: goto label_326bf8;
        case 0x326bfcu: goto label_326bfc;
        case 0x326c00u: goto label_326c00;
        case 0x326c04u: goto label_326c04;
        case 0x326c08u: goto label_326c08;
        case 0x326c0cu: goto label_326c0c;
        case 0x326c10u: goto label_326c10;
        case 0x326c14u: goto label_326c14;
        case 0x326c18u: goto label_326c18;
        case 0x326c1cu: goto label_326c1c;
        case 0x326c20u: goto label_326c20;
        case 0x326c24u: goto label_326c24;
        case 0x326c28u: goto label_326c28;
        case 0x326c2cu: goto label_326c2c;
        case 0x326c30u: goto label_326c30;
        case 0x326c34u: goto label_326c34;
        case 0x326c38u: goto label_326c38;
        case 0x326c3cu: goto label_326c3c;
        case 0x326c40u: goto label_326c40;
        case 0x326c44u: goto label_326c44;
        case 0x326c48u: goto label_326c48;
        case 0x326c4cu: goto label_326c4c;
        case 0x326c50u: goto label_326c50;
        case 0x326c54u: goto label_326c54;
        case 0x326c58u: goto label_326c58;
        case 0x326c5cu: goto label_326c5c;
        case 0x326c60u: goto label_326c60;
        case 0x326c64u: goto label_326c64;
        case 0x326c68u: goto label_326c68;
        case 0x326c6cu: goto label_326c6c;
        case 0x326c70u: goto label_326c70;
        case 0x326c74u: goto label_326c74;
        case 0x326c78u: goto label_326c78;
        case 0x326c7cu: goto label_326c7c;
        case 0x326c80u: goto label_326c80;
        case 0x326c84u: goto label_326c84;
        case 0x326c88u: goto label_326c88;
        case 0x326c8cu: goto label_326c8c;
        case 0x326c90u: goto label_326c90;
        case 0x326c94u: goto label_326c94;
        case 0x326c98u: goto label_326c98;
        case 0x326c9cu: goto label_326c9c;
        case 0x326ca0u: goto label_326ca0;
        case 0x326ca4u: goto label_326ca4;
        case 0x326ca8u: goto label_326ca8;
        case 0x326cacu: goto label_326cac;
        case 0x326cb0u: goto label_326cb0;
        case 0x326cb4u: goto label_326cb4;
        case 0x326cb8u: goto label_326cb8;
        case 0x326cbcu: goto label_326cbc;
        case 0x326cc0u: goto label_326cc0;
        case 0x326cc4u: goto label_326cc4;
        case 0x326cc8u: goto label_326cc8;
        case 0x326cccu: goto label_326ccc;
        case 0x326cd0u: goto label_326cd0;
        case 0x326cd4u: goto label_326cd4;
        case 0x326cd8u: goto label_326cd8;
        case 0x326cdcu: goto label_326cdc;
        case 0x326ce0u: goto label_326ce0;
        case 0x326ce4u: goto label_326ce4;
        case 0x326ce8u: goto label_326ce8;
        case 0x326cecu: goto label_326cec;
        case 0x326cf0u: goto label_326cf0;
        case 0x326cf4u: goto label_326cf4;
        case 0x326cf8u: goto label_326cf8;
        case 0x326cfcu: goto label_326cfc;
        case 0x326d00u: goto label_326d00;
        case 0x326d04u: goto label_326d04;
        case 0x326d08u: goto label_326d08;
        case 0x326d0cu: goto label_326d0c;
        case 0x326d10u: goto label_326d10;
        case 0x326d14u: goto label_326d14;
        case 0x326d18u: goto label_326d18;
        case 0x326d1cu: goto label_326d1c;
        case 0x326d20u: goto label_326d20;
        case 0x326d24u: goto label_326d24;
        case 0x326d28u: goto label_326d28;
        case 0x326d2cu: goto label_326d2c;
        case 0x326d30u: goto label_326d30;
        case 0x326d34u: goto label_326d34;
        case 0x326d38u: goto label_326d38;
        case 0x326d3cu: goto label_326d3c;
        case 0x326d40u: goto label_326d40;
        case 0x326d44u: goto label_326d44;
        case 0x326d48u: goto label_326d48;
        case 0x326d4cu: goto label_326d4c;
        case 0x326d50u: goto label_326d50;
        case 0x326d54u: goto label_326d54;
        case 0x326d58u: goto label_326d58;
        case 0x326d5cu: goto label_326d5c;
        case 0x326d60u: goto label_326d60;
        case 0x326d64u: goto label_326d64;
        case 0x326d68u: goto label_326d68;
        case 0x326d6cu: goto label_326d6c;
        case 0x326d70u: goto label_326d70;
        case 0x326d74u: goto label_326d74;
        case 0x326d78u: goto label_326d78;
        case 0x326d7cu: goto label_326d7c;
        case 0x326d80u: goto label_326d80;
        case 0x326d84u: goto label_326d84;
        case 0x326d88u: goto label_326d88;
        case 0x326d8cu: goto label_326d8c;
        case 0x326d90u: goto label_326d90;
        case 0x326d94u: goto label_326d94;
        case 0x326d98u: goto label_326d98;
        case 0x326d9cu: goto label_326d9c;
        case 0x326da0u: goto label_326da0;
        case 0x326da4u: goto label_326da4;
        case 0x326da8u: goto label_326da8;
        case 0x326dacu: goto label_326dac;
        case 0x326db0u: goto label_326db0;
        case 0x326db4u: goto label_326db4;
        case 0x326db8u: goto label_326db8;
        case 0x326dbcu: goto label_326dbc;
        case 0x326dc0u: goto label_326dc0;
        case 0x326dc4u: goto label_326dc4;
        case 0x326dc8u: goto label_326dc8;
        case 0x326dccu: goto label_326dcc;
        case 0x326dd0u: goto label_326dd0;
        case 0x326dd4u: goto label_326dd4;
        case 0x326dd8u: goto label_326dd8;
        case 0x326ddcu: goto label_326ddc;
        case 0x326de0u: goto label_326de0;
        case 0x326de4u: goto label_326de4;
        case 0x326de8u: goto label_326de8;
        case 0x326decu: goto label_326dec;
        case 0x326df0u: goto label_326df0;
        case 0x326df4u: goto label_326df4;
        case 0x326df8u: goto label_326df8;
        case 0x326dfcu: goto label_326dfc;
        case 0x326e00u: goto label_326e00;
        case 0x326e04u: goto label_326e04;
        case 0x326e08u: goto label_326e08;
        case 0x326e0cu: goto label_326e0c;
        case 0x326e10u: goto label_326e10;
        case 0x326e14u: goto label_326e14;
        case 0x326e18u: goto label_326e18;
        case 0x326e1cu: goto label_326e1c;
        case 0x326e20u: goto label_326e20;
        case 0x326e24u: goto label_326e24;
        case 0x326e28u: goto label_326e28;
        case 0x326e2cu: goto label_326e2c;
        case 0x326e30u: goto label_326e30;
        case 0x326e34u: goto label_326e34;
        case 0x326e38u: goto label_326e38;
        case 0x326e3cu: goto label_326e3c;
        case 0x326e40u: goto label_326e40;
        case 0x326e44u: goto label_326e44;
        case 0x326e48u: goto label_326e48;
        case 0x326e4cu: goto label_326e4c;
        case 0x326e50u: goto label_326e50;
        case 0x326e54u: goto label_326e54;
        case 0x326e58u: goto label_326e58;
        case 0x326e5cu: goto label_326e5c;
        case 0x326e60u: goto label_326e60;
        case 0x326e64u: goto label_326e64;
        case 0x326e68u: goto label_326e68;
        case 0x326e6cu: goto label_326e6c;
        case 0x326e70u: goto label_326e70;
        case 0x326e74u: goto label_326e74;
        case 0x326e78u: goto label_326e78;
        case 0x326e7cu: goto label_326e7c;
        case 0x326e80u: goto label_326e80;
        case 0x326e84u: goto label_326e84;
        case 0x326e88u: goto label_326e88;
        case 0x326e8cu: goto label_326e8c;
        case 0x326e90u: goto label_326e90;
        case 0x326e94u: goto label_326e94;
        case 0x326e98u: goto label_326e98;
        case 0x326e9cu: goto label_326e9c;
        case 0x326ea0u: goto label_326ea0;
        case 0x326ea4u: goto label_326ea4;
        case 0x326ea8u: goto label_326ea8;
        case 0x326eacu: goto label_326eac;
        case 0x326eb0u: goto label_326eb0;
        case 0x326eb4u: goto label_326eb4;
        case 0x326eb8u: goto label_326eb8;
        case 0x326ebcu: goto label_326ebc;
        case 0x326ec0u: goto label_326ec0;
        case 0x326ec4u: goto label_326ec4;
        case 0x326ec8u: goto label_326ec8;
        case 0x326eccu: goto label_326ecc;
        case 0x326ed0u: goto label_326ed0;
        case 0x326ed4u: goto label_326ed4;
        case 0x326ed8u: goto label_326ed8;
        case 0x326edcu: goto label_326edc;
        case 0x326ee0u: goto label_326ee0;
        case 0x326ee4u: goto label_326ee4;
        case 0x326ee8u: goto label_326ee8;
        case 0x326eecu: goto label_326eec;
        case 0x326ef0u: goto label_326ef0;
        case 0x326ef4u: goto label_326ef4;
        case 0x326ef8u: goto label_326ef8;
        case 0x326efcu: goto label_326efc;
        case 0x326f00u: goto label_326f00;
        case 0x326f04u: goto label_326f04;
        case 0x326f08u: goto label_326f08;
        case 0x326f0cu: goto label_326f0c;
        case 0x326f10u: goto label_326f10;
        case 0x326f14u: goto label_326f14;
        case 0x326f18u: goto label_326f18;
        case 0x326f1cu: goto label_326f1c;
        case 0x326f20u: goto label_326f20;
        case 0x326f24u: goto label_326f24;
        case 0x326f28u: goto label_326f28;
        case 0x326f2cu: goto label_326f2c;
        case 0x326f30u: goto label_326f30;
        case 0x326f34u: goto label_326f34;
        case 0x326f38u: goto label_326f38;
        case 0x326f3cu: goto label_326f3c;
        default: break;
    }

    ctx->pc = 0x326980u;

label_326980:
    // 0x326980: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x326980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_326984:
    // 0x326984: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x326984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_326988:
    // 0x326988: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x326988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32698c:
    // 0x32698c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32698cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_326990:
    // 0x326990: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x326990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_326994:
    // 0x326994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x326994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_326998:
    // 0x326998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32699c:
    // 0x32699c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32699cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3269a0:
    // 0x3269a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3269a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3269a4:
    // 0x3269a4: 0x2e41000b  sltiu       $at, $s2, 0xB
    ctx->pc = 0x3269a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_3269a8:
    // 0x3269a8: 0x1020015b  beqz        $at, . + 4 + (0x15B << 2)
label_3269ac:
    if (ctx->pc == 0x3269ACu) {
        ctx->pc = 0x3269ACu;
            // 0x3269ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3269B0u;
        goto label_3269b0;
    }
    ctx->pc = 0x3269A8u;
    {
        const bool branch_taken_0x3269a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3269A8u;
            // 0x3269ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269a8) {
            ctx->pc = 0x326F18u;
            goto label_326f18;
        }
    }
    ctx->pc = 0x3269B0u;
label_3269b0:
    // 0x3269b0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3269b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3269b4:
    // 0x3269b4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3269b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3269b8:
    // 0x3269b8: 0x2484cde0  addiu       $a0, $a0, -0x3220
    ctx->pc = 0x3269b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954464));
label_3269bc:
    // 0x3269bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3269bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3269c0:
    // 0x3269c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3269c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3269c4:
    // 0x3269c4: 0x600008  jr          $v1
label_3269c8:
    if (ctx->pc == 0x3269C8u) {
        ctx->pc = 0x3269CCu;
        goto label_3269cc;
    }
    ctx->pc = 0x3269C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3269CCu: goto label_3269cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3269CCu;
label_3269cc:
    // 0x3269cc: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3269ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_3269d0:
    // 0x3269d0: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x3269d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_3269d4:
    // 0x3269d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3269d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3269d8:
    // 0x3269d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3269d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3269dc:
    // 0x3269dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3269dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3269e0:
    // 0x3269e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3269e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3269e4:
    // 0x3269e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3269e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3269e8:
    // 0x3269e8: 0xc040180  jal         func_100600
label_3269ec:
    if (ctx->pc == 0x3269ECu) {
        ctx->pc = 0x3269ECu;
            // 0x3269ec: 0x24510164  addiu       $s1, $v0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
        ctx->pc = 0x3269F0u;
        goto label_3269f0;
    }
    ctx->pc = 0x3269E8u;
    SET_GPR_U32(ctx, 31, 0x3269F0u);
    ctx->pc = 0x3269ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3269E8u;
            // 0x3269ec: 0x24510164  addiu       $s1, $v0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3269F0u; }
        if (ctx->pc != 0x3269F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3269F0u; }
        if (ctx->pc != 0x3269F0u) { return; }
    }
    ctx->pc = 0x3269F0u;
label_3269f0:
    // 0x3269f0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3269f4:
    if (ctx->pc == 0x3269F4u) {
        ctx->pc = 0x3269F4u;
            // 0x3269f4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3269F8u;
        goto label_3269f8;
    }
    ctx->pc = 0x3269F0u;
    {
        const bool branch_taken_0x3269f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3269f0) {
            ctx->pc = 0x3269F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3269F0u;
            // 0x3269f4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326A1Cu;
            goto label_326a1c;
        }
    }
    ctx->pc = 0x3269F8u;
label_3269f8:
    // 0x3269f8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3269f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3269fc:
    // 0x3269fc: 0x8c653e40  lw          $a1, 0x3E40($v1)
    ctx->pc = 0x3269fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15936)));
label_326a00:
    // 0x326a00: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_326a04:
    if (ctx->pc == 0x326A04u) {
        ctx->pc = 0x326A04u;
            // 0x326a04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326A08u;
        goto label_326a08;
    }
    ctx->pc = 0x326A00u;
    {
        const bool branch_taken_0x326a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x326a00) {
            ctx->pc = 0x326A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326A00u;
            // 0x326a04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326A10u;
            goto label_326a10;
        }
    }
    ctx->pc = 0x326A08u;
label_326a08:
    // 0x326a08: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x326a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_326a0c:
    // 0x326a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x326a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326a10:
    // 0x326a10: 0xc123a04  jal         func_48E810
label_326a14:
    if (ctx->pc == 0x326A14u) {
        ctx->pc = 0x326A18u;
        goto label_326a18;
    }
    ctx->pc = 0x326A10u;
    SET_GPR_U32(ctx, 31, 0x326A18u);
    ctx->pc = 0x48E810u;
    if (runtime->hasFunction(0x48E810u)) {
        auto targetFn = runtime->lookupFunction(0x48E810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326A18u; }
        if (ctx->pc != 0x326A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E810_0x48e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326A18u; }
        if (ctx->pc != 0x326A18u) { return; }
    }
    ctx->pc = 0x326A18u;
label_326a18:
    // 0x326a18: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x326a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_326a1c:
    // 0x326a1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x326a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_326a20:
    // 0x326a20: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x326a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_326a24:
    // 0x326a24: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_326a28:
    if (ctx->pc == 0x326A28u) {
        ctx->pc = 0x326A28u;
            // 0x326a28: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x326A2Cu;
        goto label_326a2c;
    }
    ctx->pc = 0x326A24u;
    {
        const bool branch_taken_0x326a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326a24) {
            ctx->pc = 0x326A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326A24u;
            // 0x326a28: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326A34u;
            goto label_326a34;
        }
    }
    ctx->pc = 0x326A2Cu;
label_326a2c:
    // 0x326a2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x326a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_326a30:
    // 0x326a30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326a34:
    // 0x326a34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x326a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_326a38:
    // 0x326a38: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x326a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
label_326a3c:
    // 0x326a3c: 0x8c4389e8  lw          $v1, -0x7618($v0)
    ctx->pc = 0x326a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_326a40:
    // 0x326a40: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_326a44:
    if (ctx->pc == 0x326A44u) {
        ctx->pc = 0x326A44u;
            // 0x326a44: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x326A48u;
        goto label_326a48;
    }
    ctx->pc = 0x326A40u;
    {
        const bool branch_taken_0x326a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326a40) {
            ctx->pc = 0x326A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326A40u;
            // 0x326a44: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326A50u;
            goto label_326a50;
        }
    }
    ctx->pc = 0x326A48u;
label_326a48:
    // 0x326a48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x326a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_326a4c:
    // 0x326a4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x326a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326a50:
    // 0x326a50: 0x10000003  b           . + 4 + (0x3 << 2)
label_326a54:
    if (ctx->pc == 0x326A54u) {
        ctx->pc = 0x326A54u;
            // 0x326a54: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x326A58u;
        goto label_326a58;
    }
    ctx->pc = 0x326A50u;
    {
        const bool branch_taken_0x326a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326A50u;
            // 0x326a54: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a50) {
            ctx->pc = 0x326A60u;
            goto label_326a60;
        }
    }
    ctx->pc = 0x326A58u;
label_326a58:
    // 0x326a58: 0x10000130  b           . + 4 + (0x130 << 2)
label_326a5c:
    if (ctx->pc == 0x326A5Cu) {
        ctx->pc = 0x326A5Cu;
            // 0x326a5c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x326A60u;
        goto label_326a60;
    }
    ctx->pc = 0x326A58u;
    {
        const bool branch_taken_0x326a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326A58u;
            // 0x326a5c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a58) {
            ctx->pc = 0x326F1Cu;
            goto label_326f1c;
        }
    }
    ctx->pc = 0x326A60u;
label_326a60:
    // 0x326a60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326a64:
    // 0x326a64: 0xc123598  jal         func_48D660
label_326a68:
    if (ctx->pc == 0x326A68u) {
        ctx->pc = 0x326A68u;
            // 0x326a68: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x326A6Cu;
        goto label_326a6c;
    }
    ctx->pc = 0x326A64u;
    SET_GPR_U32(ctx, 31, 0x326A6Cu);
    ctx->pc = 0x326A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326A64u;
            // 0x326a68: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D660u;
    if (runtime->hasFunction(0x48D660u)) {
        auto targetFn = runtime->lookupFunction(0x48D660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326A6Cu; }
        if (ctx->pc != 0x326A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D660_0x48d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326A6Cu; }
        if (ctx->pc != 0x326A6Cu) { return; }
    }
    ctx->pc = 0x326A6Cu;
label_326a6c:
    // 0x326a6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x326a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_326a70:
    // 0x326a70: 0x2e41000b  sltiu       $at, $s2, 0xB
    ctx->pc = 0x326a70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_326a74:
    // 0x326a74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326a78:
    // 0x326a78: 0x10200127  beqz        $at, . + 4 + (0x127 << 2)
label_326a7c:
    if (ctx->pc == 0x326A7Cu) {
        ctx->pc = 0x326A7Cu;
            // 0x326a7c: 0xac64005c  sw          $a0, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
        ctx->pc = 0x326A80u;
        goto label_326a80;
    }
    ctx->pc = 0x326A78u;
    {
        const bool branch_taken_0x326a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326A78u;
            // 0x326a7c: 0xac64005c  sw          $a0, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a78) {
            ctx->pc = 0x326F18u;
            goto label_326f18;
        }
    }
    ctx->pc = 0x326A80u;
label_326a80:
    // 0x326a80: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x326a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_326a84:
    // 0x326a84: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x326a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_326a88:
    // 0x326a88: 0x2484cdb0  addiu       $a0, $a0, -0x3250
    ctx->pc = 0x326a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954416));
label_326a8c:
    // 0x326a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_326a90:
    // 0x326a90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x326a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_326a94:
    // 0x326a94: 0x600008  jr          $v1
label_326a98:
    if (ctx->pc == 0x326A98u) {
        ctx->pc = 0x326A9Cu;
        goto label_326a9c;
    }
    ctx->pc = 0x326A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x326A9Cu: goto label_326a9c;
            case 0x326BDCu: goto label_326bdc;
            case 0x326CA0u: goto label_326ca0;
            case 0x326CF8u: goto label_326cf8;
            case 0x326F18u: goto label_326f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x326A9Cu;
label_326a9c:
    // 0x326a9c: 0xc040180  jal         func_100600
label_326aa0:
    if (ctx->pc == 0x326AA0u) {
        ctx->pc = 0x326AA0u;
            // 0x326aa0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x326AA4u;
        goto label_326aa4;
    }
    ctx->pc = 0x326A9Cu;
    SET_GPR_U32(ctx, 31, 0x326AA4u);
    ctx->pc = 0x326AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326A9Cu;
            // 0x326aa0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326AA4u; }
        if (ctx->pc != 0x326AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326AA4u; }
        if (ctx->pc != 0x326AA4u) { return; }
    }
    ctx->pc = 0x326AA4u;
label_326aa4:
    // 0x326aa4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326aa8:
    if (ctx->pc == 0x326AA8u) {
        ctx->pc = 0x326AA8u;
            // 0x326aa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326AACu;
        goto label_326aac;
    }
    ctx->pc = 0x326AA4u;
    {
        const bool branch_taken_0x326aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326aa4) {
            ctx->pc = 0x326AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326AA4u;
            // 0x326aa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326AB8u;
            goto label_326ab8;
        }
    }
    ctx->pc = 0x326AACu;
label_326aac:
    // 0x326aac: 0xc123230  jal         func_48C8C0
label_326ab0:
    if (ctx->pc == 0x326AB0u) {
        ctx->pc = 0x326AB0u;
            // 0x326ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326AB4u;
        goto label_326ab4;
    }
    ctx->pc = 0x326AACu;
    SET_GPR_U32(ctx, 31, 0x326AB4u);
    ctx->pc = 0x326AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326AACu;
            // 0x326ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326AB4u; }
        if (ctx->pc != 0x326AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326AB4u; }
        if (ctx->pc != 0x326AB4u) { return; }
    }
    ctx->pc = 0x326AB4u;
label_326ab4:
    // 0x326ab4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x326ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_326ab8:
    // 0x326ab8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326abc:
    // 0x326abc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326ac0:
    // 0x326ac0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326ac4:
    // 0x326ac4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326ac8:
    // 0x326ac8: 0xc1230ac  jal         func_48C2B0
label_326acc:
    if (ctx->pc == 0x326ACCu) {
        ctx->pc = 0x326ACCu;
            // 0x326acc: 0x24a5cc90  addiu       $a1, $a1, -0x3370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
        ctx->pc = 0x326AD0u;
        goto label_326ad0;
    }
    ctx->pc = 0x326AC8u;
    SET_GPR_U32(ctx, 31, 0x326AD0u);
    ctx->pc = 0x326ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326AC8u;
            // 0x326acc: 0x24a5cc90  addiu       $a1, $a1, -0x3370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326AD0u; }
        if (ctx->pc != 0x326AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326AD0u; }
        if (ctx->pc != 0x326AD0u) { return; }
    }
    ctx->pc = 0x326AD0u;
label_326ad0:
    // 0x326ad0: 0x8e040168  lw          $a0, 0x168($s0)
    ctx->pc = 0x326ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_326ad4:
    // 0x326ad4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326ad8:
    // 0x326ad8: 0x24a5cc90  addiu       $a1, $a1, -0x3370
    ctx->pc = 0x326ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
label_326adc:
    // 0x326adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326ae0:
    // 0x326ae0: 0xc123944  jal         func_48E510
label_326ae4:
    if (ctx->pc == 0x326AE4u) {
        ctx->pc = 0x326AE4u;
            // 0x326ae4: 0x26140164  addiu       $s4, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->pc = 0x326AE8u;
        goto label_326ae8;
    }
    ctx->pc = 0x326AE0u;
    SET_GPR_U32(ctx, 31, 0x326AE8u);
    ctx->pc = 0x326AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326AE0u;
            // 0x326ae4: 0x26140164  addiu       $s4, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326AE8u; }
        if (ctx->pc != 0x326AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326AE8u; }
        if (ctx->pc != 0x326AE8u) { return; }
    }
    ctx->pc = 0x326AE8u;
label_326ae8:
    // 0x326ae8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x326ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_326aec:
    // 0x326aec: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326af0:
    // 0x326af0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x326af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326af4:
    // 0x326af4: 0x24a5cd10  addiu       $a1, $a1, -0x32F0
    ctx->pc = 0x326af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
label_326af8:
    // 0x326af8: 0xc123944  jal         func_48E510
label_326afc:
    if (ctx->pc == 0x326AFCu) {
        ctx->pc = 0x326AFCu;
            // 0x326afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326B00u;
        goto label_326b00;
    }
    ctx->pc = 0x326AF8u;
    SET_GPR_U32(ctx, 31, 0x326B00u);
    ctx->pc = 0x326AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326AF8u;
            // 0x326afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B00u; }
        if (ctx->pc != 0x326B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B00u; }
        if (ctx->pc != 0x326B00u) { return; }
    }
    ctx->pc = 0x326B00u;
label_326b00:
    // 0x326b00: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x326b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_326b04:
    // 0x326b04: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326b08:
    // 0x326b08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x326b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326b0c:
    // 0x326b0c: 0x24a5cd10  addiu       $a1, $a1, -0x32F0
    ctx->pc = 0x326b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
label_326b10:
    // 0x326b10: 0xc123944  jal         func_48E510
label_326b14:
    if (ctx->pc == 0x326B14u) {
        ctx->pc = 0x326B14u;
            // 0x326b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326B18u;
        goto label_326b18;
    }
    ctx->pc = 0x326B10u;
    SET_GPR_U32(ctx, 31, 0x326B18u);
    ctx->pc = 0x326B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326B10u;
            // 0x326b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B18u; }
        if (ctx->pc != 0x326B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B18u; }
        if (ctx->pc != 0x326B18u) { return; }
    }
    ctx->pc = 0x326B18u;
label_326b18:
    // 0x326b18: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x326b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_326b1c:
    // 0x326b1c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326b20:
    // 0x326b20: 0x24a5cd20  addiu       $a1, $a1, -0x32E0
    ctx->pc = 0x326b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954272));
label_326b24:
    // 0x326b24: 0xc123944  jal         func_48E510
label_326b28:
    if (ctx->pc == 0x326B28u) {
        ctx->pc = 0x326B28u;
            // 0x326b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326B2Cu;
        goto label_326b2c;
    }
    ctx->pc = 0x326B24u;
    SET_GPR_U32(ctx, 31, 0x326B2Cu);
    ctx->pc = 0x326B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326B24u;
            // 0x326b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B2Cu; }
        if (ctx->pc != 0x326B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B2Cu; }
        if (ctx->pc != 0x326B2Cu) { return; }
    }
    ctx->pc = 0x326B2Cu;
label_326b2c:
    // 0x326b2c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x326b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_326b30:
    // 0x326b30: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326b34:
    // 0x326b34: 0x24a5cd28  addiu       $a1, $a1, -0x32D8
    ctx->pc = 0x326b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954280));
label_326b38:
    // 0x326b38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326b3c:
    // 0x326b3c: 0xc123944  jal         func_48E510
label_326b40:
    if (ctx->pc == 0x326B40u) {
        ctx->pc = 0x326B40u;
            // 0x326b40: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326B44u;
        goto label_326b44;
    }
    ctx->pc = 0x326B3Cu;
    SET_GPR_U32(ctx, 31, 0x326B44u);
    ctx->pc = 0x326B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326B3Cu;
            // 0x326b40: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B44u; }
        if (ctx->pc != 0x326B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B44u; }
        if (ctx->pc != 0x326B44u) { return; }
    }
    ctx->pc = 0x326B44u;
label_326b44:
    // 0x326b44: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x326b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_326b48:
    // 0x326b48: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x326b48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326b4c:
    // 0x326b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326b50:
    // 0x326b50: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x326b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_326b54:
    // 0x326b54: 0xc123654  jal         func_48D950
label_326b58:
    if (ctx->pc == 0x326B58u) {
        ctx->pc = 0x326B58u;
            // 0x326b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326B5Cu;
        goto label_326b5c;
    }
    ctx->pc = 0x326B54u;
    SET_GPR_U32(ctx, 31, 0x326B5Cu);
    ctx->pc = 0x326B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326B54u;
            // 0x326b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B5Cu; }
        if (ctx->pc != 0x326B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B5Cu; }
        if (ctx->pc != 0x326B5Cu) { return; }
    }
    ctx->pc = 0x326B5Cu;
label_326b5c:
    // 0x326b5c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x326b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_326b60:
    // 0x326b60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_326b64:
    // 0x326b64: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x326b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_326b68:
    // 0x326b68: 0xc123654  jal         func_48D950
label_326b6c:
    if (ctx->pc == 0x326B6Cu) {
        ctx->pc = 0x326B6Cu;
            // 0x326b6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326B70u;
        goto label_326b70;
    }
    ctx->pc = 0x326B68u;
    SET_GPR_U32(ctx, 31, 0x326B70u);
    ctx->pc = 0x326B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326B68u;
            // 0x326b6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B70u; }
        if (ctx->pc != 0x326B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B70u; }
        if (ctx->pc != 0x326B70u) { return; }
    }
    ctx->pc = 0x326B70u;
label_326b70:
    // 0x326b70: 0xc0c9960  jal         func_326580
label_326b74:
    if (ctx->pc == 0x326B74u) {
        ctx->pc = 0x326B74u;
            // 0x326b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326B78u;
        goto label_326b78;
    }
    ctx->pc = 0x326B70u;
    SET_GPR_U32(ctx, 31, 0x326B78u);
    ctx->pc = 0x326B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326B70u;
            // 0x326b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326580u;
    if (runtime->hasFunction(0x326580u)) {
        auto targetFn = runtime->lookupFunction(0x326580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B78u; }
        if (ctx->pc != 0x326B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326580_0x326580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326B78u; }
        if (ctx->pc != 0x326B78u) { return; }
    }
    ctx->pc = 0x326B78u;
label_326b78:
    // 0x326b78: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326b7c:
    // 0x326b7c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_326b80:
    if (ctx->pc == 0x326B80u) {
        ctx->pc = 0x326B80u;
            // 0x326b80: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x326B84u;
        goto label_326b84;
    }
    ctx->pc = 0x326B7Cu;
    {
        const bool branch_taken_0x326b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326b7c) {
            ctx->pc = 0x326B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326B7Cu;
            // 0x326b80: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326B98u;
            goto label_326b98;
        }
    }
    ctx->pc = 0x326B84u;
label_326b84:
    // 0x326b84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x326b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326b88:
    // 0x326b88: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x326b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_326b8c:
    // 0x326b8c: 0x320f809  jalr        $t9
label_326b90:
    if (ctx->pc == 0x326B90u) {
        ctx->pc = 0x326B94u;
        goto label_326b94;
    }
    ctx->pc = 0x326B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326B94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x326B94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x326B94u; }
            if (ctx->pc != 0x326B94u) { return; }
        }
        }
    }
    ctx->pc = 0x326B94u;
label_326b94:
    // 0x326b94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x326b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326b98:
    // 0x326b98: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x326b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_326b9c:
    // 0x326b9c: 0x261205dc  addiu       $s2, $s0, 0x5DC
    ctx->pc = 0x326b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1500));
label_326ba0:
    // 0x326ba0: 0xc040180  jal         func_100600
label_326ba4:
    if (ctx->pc == 0x326BA4u) {
        ctx->pc = 0x326BA4u;
            // 0x326ba4: 0xae0205e0  sw          $v0, 0x5E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 2));
        ctx->pc = 0x326BA8u;
        goto label_326ba8;
    }
    ctx->pc = 0x326BA0u;
    SET_GPR_U32(ctx, 31, 0x326BA8u);
    ctx->pc = 0x326BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326BA0u;
            // 0x326ba4: 0xae0205e0  sw          $v0, 0x5E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BA8u; }
        if (ctx->pc != 0x326BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BA8u; }
        if (ctx->pc != 0x326BA8u) { return; }
    }
    ctx->pc = 0x326BA8u;
label_326ba8:
    // 0x326ba8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326bac:
    if (ctx->pc == 0x326BACu) {
        ctx->pc = 0x326BACu;
            // 0x326bac: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326BB0u;
        goto label_326bb0;
    }
    ctx->pc = 0x326BA8u;
    {
        const bool branch_taken_0x326ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326ba8) {
            ctx->pc = 0x326BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326BA8u;
            // 0x326bac: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326BBCu;
            goto label_326bbc;
        }
    }
    ctx->pc = 0x326BB0u;
label_326bb0:
    // 0x326bb0: 0xc123230  jal         func_48C8C0
label_326bb4:
    if (ctx->pc == 0x326BB4u) {
        ctx->pc = 0x326BB4u;
            // 0x326bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326BB8u;
        goto label_326bb8;
    }
    ctx->pc = 0x326BB0u;
    SET_GPR_U32(ctx, 31, 0x326BB8u);
    ctx->pc = 0x326BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326BB0u;
            // 0x326bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BB8u; }
        if (ctx->pc != 0x326BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BB8u; }
        if (ctx->pc != 0x326BB8u) { return; }
    }
    ctx->pc = 0x326BB8u;
label_326bb8:
    // 0x326bb8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x326bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_326bbc:
    // 0x326bbc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326bc0:
    // 0x326bc0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326bc4:
    // 0x326bc4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326bc8:
    // 0x326bc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x326bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326bcc:
    // 0x326bcc: 0xc1230ac  jal         func_48C2B0
label_326bd0:
    if (ctx->pc == 0x326BD0u) {
        ctx->pc = 0x326BD0u;
            // 0x326bd0: 0x24a5cd38  addiu       $a1, $a1, -0x32C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954296));
        ctx->pc = 0x326BD4u;
        goto label_326bd4;
    }
    ctx->pc = 0x326BCCu;
    SET_GPR_U32(ctx, 31, 0x326BD4u);
    ctx->pc = 0x326BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326BCCu;
            // 0x326bd0: 0x24a5cd38  addiu       $a1, $a1, -0x32C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BD4u; }
        if (ctx->pc != 0x326BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BD4u; }
        if (ctx->pc != 0x326BD4u) { return; }
    }
    ctx->pc = 0x326BD4u;
label_326bd4:
    // 0x326bd4: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_326bd8:
    if (ctx->pc == 0x326BD8u) {
        ctx->pc = 0x326BDCu;
        goto label_326bdc;
    }
    ctx->pc = 0x326BD4u;
    {
        const bool branch_taken_0x326bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326bd4) {
            ctx->pc = 0x326F18u;
            goto label_326f18;
        }
    }
    ctx->pc = 0x326BDCu;
label_326bdc:
    // 0x326bdc: 0xc040180  jal         func_100600
label_326be0:
    if (ctx->pc == 0x326BE0u) {
        ctx->pc = 0x326BE0u;
            // 0x326be0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x326BE4u;
        goto label_326be4;
    }
    ctx->pc = 0x326BDCu;
    SET_GPR_U32(ctx, 31, 0x326BE4u);
    ctx->pc = 0x326BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326BDCu;
            // 0x326be0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BE4u; }
        if (ctx->pc != 0x326BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BE4u; }
        if (ctx->pc != 0x326BE4u) { return; }
    }
    ctx->pc = 0x326BE4u;
label_326be4:
    // 0x326be4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326be8:
    if (ctx->pc == 0x326BE8u) {
        ctx->pc = 0x326BE8u;
            // 0x326be8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326BECu;
        goto label_326bec;
    }
    ctx->pc = 0x326BE4u;
    {
        const bool branch_taken_0x326be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326be4) {
            ctx->pc = 0x326BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326BE4u;
            // 0x326be8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326BF8u;
            goto label_326bf8;
        }
    }
    ctx->pc = 0x326BECu;
label_326bec:
    // 0x326bec: 0xc123230  jal         func_48C8C0
label_326bf0:
    if (ctx->pc == 0x326BF0u) {
        ctx->pc = 0x326BF0u;
            // 0x326bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326BF4u;
        goto label_326bf4;
    }
    ctx->pc = 0x326BECu;
    SET_GPR_U32(ctx, 31, 0x326BF4u);
    ctx->pc = 0x326BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326BECu;
            // 0x326bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BF4u; }
        if (ctx->pc != 0x326BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326BF4u; }
        if (ctx->pc != 0x326BF4u) { return; }
    }
    ctx->pc = 0x326BF4u;
label_326bf4:
    // 0x326bf4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x326bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_326bf8:
    // 0x326bf8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326bfc:
    // 0x326bfc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326c00:
    // 0x326c00: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326c04:
    // 0x326c04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326c08:
    // 0x326c08: 0xc1230ac  jal         func_48C2B0
label_326c0c:
    if (ctx->pc == 0x326C0Cu) {
        ctx->pc = 0x326C0Cu;
            // 0x326c0c: 0x24a5cd48  addiu       $a1, $a1, -0x32B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954312));
        ctx->pc = 0x326C10u;
        goto label_326c10;
    }
    ctx->pc = 0x326C08u;
    SET_GPR_U32(ctx, 31, 0x326C10u);
    ctx->pc = 0x326C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326C08u;
            // 0x326c0c: 0x24a5cd48  addiu       $a1, $a1, -0x32B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C10u; }
        if (ctx->pc != 0x326C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C10u; }
        if (ctx->pc != 0x326C10u) { return; }
    }
    ctx->pc = 0x326C10u;
label_326c10:
    // 0x326c10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326c14:
    // 0x326c14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_326c18:
    if (ctx->pc == 0x326C18u) {
        ctx->pc = 0x326C18u;
            // 0x326c18: 0x8e040308  lw          $a0, 0x308($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
        ctx->pc = 0x326C1Cu;
        goto label_326c1c;
    }
    ctx->pc = 0x326C14u;
    {
        const bool branch_taken_0x326c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326c14) {
            ctx->pc = 0x326C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326C14u;
            // 0x326c18: 0x8e040308  lw          $a0, 0x308($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326C30u;
            goto label_326c30;
        }
    }
    ctx->pc = 0x326C1Cu;
label_326c1c:
    // 0x326c1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x326c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326c20:
    // 0x326c20: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x326c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_326c24:
    // 0x326c24: 0x320f809  jalr        $t9
label_326c28:
    if (ctx->pc == 0x326C28u) {
        ctx->pc = 0x326C2Cu;
        goto label_326c2c;
    }
    ctx->pc = 0x326C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326C2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x326C2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x326C2Cu; }
            if (ctx->pc != 0x326C2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x326C2Cu;
label_326c2c:
    // 0x326c2c: 0x8e040308  lw          $a0, 0x308($s0)
    ctx->pc = 0x326c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_326c30:
    // 0x326c30: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326c34:
    // 0x326c34: 0x24a5cd60  addiu       $a1, $a1, -0x32A0
    ctx->pc = 0x326c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954336));
label_326c38:
    // 0x326c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326c3c:
    // 0x326c3c: 0xc123944  jal         func_48E510
label_326c40:
    if (ctx->pc == 0x326C40u) {
        ctx->pc = 0x326C40u;
            // 0x326c40: 0x26110304  addiu       $s1, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->pc = 0x326C44u;
        goto label_326c44;
    }
    ctx->pc = 0x326C3Cu;
    SET_GPR_U32(ctx, 31, 0x326C44u);
    ctx->pc = 0x326C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326C3Cu;
            // 0x326c40: 0x26110304  addiu       $s1, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C44u; }
        if (ctx->pc != 0x326C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C44u; }
        if (ctx->pc != 0x326C44u) { return; }
    }
    ctx->pc = 0x326C44u;
label_326c44:
    // 0x326c44: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326c48:
    // 0x326c48: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326c4c:
    // 0x326c4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x326c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326c50:
    // 0x326c50: 0x24a5cd78  addiu       $a1, $a1, -0x3288
    ctx->pc = 0x326c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954360));
label_326c54:
    // 0x326c54: 0xc123944  jal         func_48E510
label_326c58:
    if (ctx->pc == 0x326C58u) {
        ctx->pc = 0x326C58u;
            // 0x326c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326C5Cu;
        goto label_326c5c;
    }
    ctx->pc = 0x326C54u;
    SET_GPR_U32(ctx, 31, 0x326C5Cu);
    ctx->pc = 0x326C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326C54u;
            // 0x326c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C5Cu; }
        if (ctx->pc != 0x326C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C5Cu; }
        if (ctx->pc != 0x326C5Cu) { return; }
    }
    ctx->pc = 0x326C5Cu;
label_326c5c:
    // 0x326c5c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326c60:
    // 0x326c60: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326c64:
    // 0x326c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x326c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326c68:
    // 0x326c68: 0x24a5cd80  addiu       $a1, $a1, -0x3280
    ctx->pc = 0x326c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954368));
label_326c6c:
    // 0x326c6c: 0xc123944  jal         func_48E510
label_326c70:
    if (ctx->pc == 0x326C70u) {
        ctx->pc = 0x326C70u;
            // 0x326c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326C74u;
        goto label_326c74;
    }
    ctx->pc = 0x326C6Cu;
    SET_GPR_U32(ctx, 31, 0x326C74u);
    ctx->pc = 0x326C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326C6Cu;
            // 0x326c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C74u; }
        if (ctx->pc != 0x326C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C74u; }
        if (ctx->pc != 0x326C74u) { return; }
    }
    ctx->pc = 0x326C74u;
label_326c74:
    // 0x326c74: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x326c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_326c78:
    // 0x326c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326c7c:
    // 0x326c7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326c80:
    // 0x326c80: 0xc123654  jal         func_48D950
label_326c84:
    if (ctx->pc == 0x326C84u) {
        ctx->pc = 0x326C84u;
            // 0x326c84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326C88u;
        goto label_326c88;
    }
    ctx->pc = 0x326C80u;
    SET_GPR_U32(ctx, 31, 0x326C88u);
    ctx->pc = 0x326C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326C80u;
            // 0x326c84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C88u; }
        if (ctx->pc != 0x326C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C88u; }
        if (ctx->pc != 0x326C88u) { return; }
    }
    ctx->pc = 0x326C88u;
label_326c88:
    // 0x326c88: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326c8c:
    // 0x326c8c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x326c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_326c90:
    // 0x326c90: 0xc1232d8  jal         func_48CB60
label_326c94:
    if (ctx->pc == 0x326C94u) {
        ctx->pc = 0x326C94u;
            // 0x326c94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x326C98u;
        goto label_326c98;
    }
    ctx->pc = 0x326C90u;
    SET_GPR_U32(ctx, 31, 0x326C98u);
    ctx->pc = 0x326C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326C90u;
            // 0x326c94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C98u; }
        if (ctx->pc != 0x326C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326C98u; }
        if (ctx->pc != 0x326C98u) { return; }
    }
    ctx->pc = 0x326C98u;
label_326c98:
    // 0x326c98: 0x1000009f  b           . + 4 + (0x9F << 2)
label_326c9c:
    if (ctx->pc == 0x326C9Cu) {
        ctx->pc = 0x326CA0u;
        goto label_326ca0;
    }
    ctx->pc = 0x326C98u;
    {
        const bool branch_taken_0x326c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326c98) {
            ctx->pc = 0x326F18u;
            goto label_326f18;
        }
    }
    ctx->pc = 0x326CA0u;
label_326ca0:
    // 0x326ca0: 0xc040180  jal         func_100600
label_326ca4:
    if (ctx->pc == 0x326CA4u) {
        ctx->pc = 0x326CA4u;
            // 0x326ca4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x326CA8u;
        goto label_326ca8;
    }
    ctx->pc = 0x326CA0u;
    SET_GPR_U32(ctx, 31, 0x326CA8u);
    ctx->pc = 0x326CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326CA0u;
            // 0x326ca4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326CA8u; }
        if (ctx->pc != 0x326CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326CA8u; }
        if (ctx->pc != 0x326CA8u) { return; }
    }
    ctx->pc = 0x326CA8u;
label_326ca8:
    // 0x326ca8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326cac:
    if (ctx->pc == 0x326CACu) {
        ctx->pc = 0x326CACu;
            // 0x326cac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326CB0u;
        goto label_326cb0;
    }
    ctx->pc = 0x326CA8u;
    {
        const bool branch_taken_0x326ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326ca8) {
            ctx->pc = 0x326CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326CA8u;
            // 0x326cac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326CBCu;
            goto label_326cbc;
        }
    }
    ctx->pc = 0x326CB0u;
label_326cb0:
    // 0x326cb0: 0xc123230  jal         func_48C8C0
label_326cb4:
    if (ctx->pc == 0x326CB4u) {
        ctx->pc = 0x326CB4u;
            // 0x326cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326CB8u;
        goto label_326cb8;
    }
    ctx->pc = 0x326CB0u;
    SET_GPR_U32(ctx, 31, 0x326CB8u);
    ctx->pc = 0x326CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326CB0u;
            // 0x326cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326CB8u; }
        if (ctx->pc != 0x326CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326CB8u; }
        if (ctx->pc != 0x326CB8u) { return; }
    }
    ctx->pc = 0x326CB8u;
label_326cb8:
    // 0x326cb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x326cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_326cbc:
    // 0x326cbc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326cc0:
    // 0x326cc0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326cc4:
    // 0x326cc4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326cc8:
    // 0x326cc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326ccc:
    // 0x326ccc: 0xc1230ac  jal         func_48C2B0
label_326cd0:
    if (ctx->pc == 0x326CD0u) {
        ctx->pc = 0x326CD0u;
            // 0x326cd0: 0x24a5cd98  addiu       $a1, $a1, -0x3268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954392));
        ctx->pc = 0x326CD4u;
        goto label_326cd4;
    }
    ctx->pc = 0x326CCCu;
    SET_GPR_U32(ctx, 31, 0x326CD4u);
    ctx->pc = 0x326CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326CCCu;
            // 0x326cd0: 0x24a5cd98  addiu       $a1, $a1, -0x3268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326CD4u; }
        if (ctx->pc != 0x326CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326CD4u; }
        if (ctx->pc != 0x326CD4u) { return; }
    }
    ctx->pc = 0x326CD4u;
label_326cd4:
    // 0x326cd4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326cd8:
    // 0x326cd8: 0x1080008f  beqz        $a0, . + 4 + (0x8F << 2)
label_326cdc:
    if (ctx->pc == 0x326CDCu) {
        ctx->pc = 0x326CE0u;
        goto label_326ce0;
    }
    ctx->pc = 0x326CD8u;
    {
        const bool branch_taken_0x326cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326cd8) {
            ctx->pc = 0x326F18u;
            goto label_326f18;
        }
    }
    ctx->pc = 0x326CE0u;
label_326ce0:
    // 0x326ce0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x326ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326ce4:
    // 0x326ce4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x326ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_326ce8:
    // 0x326ce8: 0x320f809  jalr        $t9
label_326cec:
    if (ctx->pc == 0x326CECu) {
        ctx->pc = 0x326CF0u;
        goto label_326cf0;
    }
    ctx->pc = 0x326CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326CF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x326CF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x326CF0u; }
            if (ctx->pc != 0x326CF0u) { return; }
        }
        }
    }
    ctx->pc = 0x326CF0u;
label_326cf0:
    // 0x326cf0: 0x10000089  b           . + 4 + (0x89 << 2)
label_326cf4:
    if (ctx->pc == 0x326CF4u) {
        ctx->pc = 0x326CF8u;
        goto label_326cf8;
    }
    ctx->pc = 0x326CF0u;
    {
        const bool branch_taken_0x326cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326cf0) {
            ctx->pc = 0x326F18u;
            goto label_326f18;
        }
    }
    ctx->pc = 0x326CF8u;
label_326cf8:
    // 0x326cf8: 0xc040180  jal         func_100600
label_326cfc:
    if (ctx->pc == 0x326CFCu) {
        ctx->pc = 0x326CFCu;
            // 0x326cfc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x326D00u;
        goto label_326d00;
    }
    ctx->pc = 0x326CF8u;
    SET_GPR_U32(ctx, 31, 0x326D00u);
    ctx->pc = 0x326CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326CF8u;
            // 0x326cfc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D00u; }
        if (ctx->pc != 0x326D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D00u; }
        if (ctx->pc != 0x326D00u) { return; }
    }
    ctx->pc = 0x326D00u;
label_326d00:
    // 0x326d00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326d04:
    if (ctx->pc == 0x326D04u) {
        ctx->pc = 0x326D04u;
            // 0x326d04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326D08u;
        goto label_326d08;
    }
    ctx->pc = 0x326D00u;
    {
        const bool branch_taken_0x326d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326d00) {
            ctx->pc = 0x326D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326D00u;
            // 0x326d04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326D14u;
            goto label_326d14;
        }
    }
    ctx->pc = 0x326D08u;
label_326d08:
    // 0x326d08: 0xc123230  jal         func_48C8C0
label_326d0c:
    if (ctx->pc == 0x326D0Cu) {
        ctx->pc = 0x326D0Cu;
            // 0x326d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326D10u;
        goto label_326d10;
    }
    ctx->pc = 0x326D08u;
    SET_GPR_U32(ctx, 31, 0x326D10u);
    ctx->pc = 0x326D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326D08u;
            // 0x326d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D10u; }
        if (ctx->pc != 0x326D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D10u; }
        if (ctx->pc != 0x326D10u) { return; }
    }
    ctx->pc = 0x326D10u;
label_326d10:
    // 0x326d10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x326d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_326d14:
    // 0x326d14: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326d18:
    // 0x326d18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326d1c:
    // 0x326d1c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326d20:
    // 0x326d20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326d24:
    // 0x326d24: 0xc1230ac  jal         func_48C2B0
label_326d28:
    if (ctx->pc == 0x326D28u) {
        ctx->pc = 0x326D28u;
            // 0x326d28: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->pc = 0x326D2Cu;
        goto label_326d2c;
    }
    ctx->pc = 0x326D24u;
    SET_GPR_U32(ctx, 31, 0x326D2Cu);
    ctx->pc = 0x326D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326D24u;
            // 0x326d28: 0x24a5ca80  addiu       $a1, $a1, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D2Cu; }
        if (ctx->pc != 0x326D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D2Cu; }
        if (ctx->pc != 0x326D2Cu) { return; }
    }
    ctx->pc = 0x326D2Cu;
label_326d2c:
    // 0x326d2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326d30:
    // 0x326d30: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x326d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_326d34:
    // 0x326d34: 0x2442edd0  addiu       $v0, $v0, -0x1230
    ctx->pc = 0x326d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962640));
label_326d38:
    // 0x326d38: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x326d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_326d3c:
    // 0x326d3c: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x326d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_326d40:
    // 0x326d40: 0xac700088  sw          $s0, 0x88($v1)
    ctx->pc = 0x326d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 16));
label_326d44:
    // 0x326d44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326d48:
    // 0x326d48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_326d4c:
    if (ctx->pc == 0x326D4Cu) {
        ctx->pc = 0x326D4Cu;
            // 0x326d4c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x326D50u;
        goto label_326d50;
    }
    ctx->pc = 0x326D48u;
    {
        const bool branch_taken_0x326d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326d48) {
            ctx->pc = 0x326D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326D48u;
            // 0x326d4c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326D64u;
            goto label_326d64;
        }
    }
    ctx->pc = 0x326D50u;
label_326d50:
    // 0x326d50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x326d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326d54:
    // 0x326d54: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x326d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_326d58:
    // 0x326d58: 0x320f809  jalr        $t9
label_326d5c:
    if (ctx->pc == 0x326D5Cu) {
        ctx->pc = 0x326D60u;
        goto label_326d60;
    }
    ctx->pc = 0x326D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326D60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x326D60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x326D60u; }
            if (ctx->pc != 0x326D60u) { return; }
        }
        }
    }
    ctx->pc = 0x326D60u;
label_326d60:
    // 0x326d60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x326d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326d64:
    // 0x326d64: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x326d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_326d68:
    // 0x326d68: 0x261205ec  addiu       $s2, $s0, 0x5EC
    ctx->pc = 0x326d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1516));
label_326d6c:
    // 0x326d6c: 0xc040180  jal         func_100600
label_326d70:
    if (ctx->pc == 0x326D70u) {
        ctx->pc = 0x326D70u;
            // 0x326d70: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->pc = 0x326D74u;
        goto label_326d74;
    }
    ctx->pc = 0x326D6Cu;
    SET_GPR_U32(ctx, 31, 0x326D74u);
    ctx->pc = 0x326D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326D6Cu;
            // 0x326d70: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D74u; }
        if (ctx->pc != 0x326D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D74u; }
        if (ctx->pc != 0x326D74u) { return; }
    }
    ctx->pc = 0x326D74u;
label_326d74:
    // 0x326d74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326d78:
    if (ctx->pc == 0x326D78u) {
        ctx->pc = 0x326D78u;
            // 0x326d78: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326D7Cu;
        goto label_326d7c;
    }
    ctx->pc = 0x326D74u;
    {
        const bool branch_taken_0x326d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326d74) {
            ctx->pc = 0x326D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326D74u;
            // 0x326d78: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326D88u;
            goto label_326d88;
        }
    }
    ctx->pc = 0x326D7Cu;
label_326d7c:
    // 0x326d7c: 0xc123230  jal         func_48C8C0
label_326d80:
    if (ctx->pc == 0x326D80u) {
        ctx->pc = 0x326D80u;
            // 0x326d80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326D84u;
        goto label_326d84;
    }
    ctx->pc = 0x326D7Cu;
    SET_GPR_U32(ctx, 31, 0x326D84u);
    ctx->pc = 0x326D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326D7Cu;
            // 0x326d80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D84u; }
        if (ctx->pc != 0x326D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326D84u; }
        if (ctx->pc != 0x326D84u) { return; }
    }
    ctx->pc = 0x326D84u;
label_326d84:
    // 0x326d84: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x326d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_326d88:
    // 0x326d88: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326d8c:
    // 0x326d8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326d90:
    // 0x326d90: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326d94:
    // 0x326d94: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x326d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326d98:
    // 0x326d98: 0xc1230ac  jal         func_48C2B0
label_326d9c:
    if (ctx->pc == 0x326D9Cu) {
        ctx->pc = 0x326D9Cu;
            // 0x326d9c: 0x24a5cda0  addiu       $a1, $a1, -0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954400));
        ctx->pc = 0x326DA0u;
        goto label_326da0;
    }
    ctx->pc = 0x326D98u;
    SET_GPR_U32(ctx, 31, 0x326DA0u);
    ctx->pc = 0x326D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326D98u;
            // 0x326d9c: 0x24a5cda0  addiu       $a1, $a1, -0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DA0u; }
        if (ctx->pc != 0x326DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DA0u; }
        if (ctx->pc != 0x326DA0u) { return; }
    }
    ctx->pc = 0x326DA0u;
label_326da0:
    // 0x326da0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x326da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326da4:
    // 0x326da4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x326da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_326da8:
    // 0x326da8: 0x261205f4  addiu       $s2, $s0, 0x5F4
    ctx->pc = 0x326da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1524));
label_326dac:
    // 0x326dac: 0xc040180  jal         func_100600
label_326db0:
    if (ctx->pc == 0x326DB0u) {
        ctx->pc = 0x326DB0u;
            // 0x326db0: 0xae0205f8  sw          $v0, 0x5F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 2));
        ctx->pc = 0x326DB4u;
        goto label_326db4;
    }
    ctx->pc = 0x326DACu;
    SET_GPR_U32(ctx, 31, 0x326DB4u);
    ctx->pc = 0x326DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326DACu;
            // 0x326db0: 0xae0205f8  sw          $v0, 0x5F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DB4u; }
        if (ctx->pc != 0x326DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DB4u; }
        if (ctx->pc != 0x326DB4u) { return; }
    }
    ctx->pc = 0x326DB4u;
label_326db4:
    // 0x326db4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326db8:
    if (ctx->pc == 0x326DB8u) {
        ctx->pc = 0x326DB8u;
            // 0x326db8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326DBCu;
        goto label_326dbc;
    }
    ctx->pc = 0x326DB4u;
    {
        const bool branch_taken_0x326db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326db4) {
            ctx->pc = 0x326DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326DB4u;
            // 0x326db8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326DC8u;
            goto label_326dc8;
        }
    }
    ctx->pc = 0x326DBCu;
label_326dbc:
    // 0x326dbc: 0xc123230  jal         func_48C8C0
label_326dc0:
    if (ctx->pc == 0x326DC0u) {
        ctx->pc = 0x326DC0u;
            // 0x326dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326DC4u;
        goto label_326dc4;
    }
    ctx->pc = 0x326DBCu;
    SET_GPR_U32(ctx, 31, 0x326DC4u);
    ctx->pc = 0x326DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326DBCu;
            // 0x326dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DC4u; }
        if (ctx->pc != 0x326DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DC4u; }
        if (ctx->pc != 0x326DC4u) { return; }
    }
    ctx->pc = 0x326DC4u;
label_326dc4:
    // 0x326dc4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x326dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_326dc8:
    // 0x326dc8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326dcc:
    // 0x326dcc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326dd0:
    // 0x326dd0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326dd4:
    // 0x326dd4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x326dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326dd8:
    // 0x326dd8: 0xc1230ac  jal         func_48C2B0
label_326ddc:
    if (ctx->pc == 0x326DDCu) {
        ctx->pc = 0x326DDCu;
            // 0x326ddc: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
        ctx->pc = 0x326DE0u;
        goto label_326de0;
    }
    ctx->pc = 0x326DD8u;
    SET_GPR_U32(ctx, 31, 0x326DE0u);
    ctx->pc = 0x326DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326DD8u;
            // 0x326ddc: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DE0u; }
        if (ctx->pc != 0x326DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DE0u; }
        if (ctx->pc != 0x326DE0u) { return; }
    }
    ctx->pc = 0x326DE0u;
label_326de0:
    // 0x326de0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x326de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326de4:
    // 0x326de4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x326de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_326de8:
    // 0x326de8: 0x261205fc  addiu       $s2, $s0, 0x5FC
    ctx->pc = 0x326de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1532));
label_326dec:
    // 0x326dec: 0xc040180  jal         func_100600
label_326df0:
    if (ctx->pc == 0x326DF0u) {
        ctx->pc = 0x326DF0u;
            // 0x326df0: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->pc = 0x326DF4u;
        goto label_326df4;
    }
    ctx->pc = 0x326DECu;
    SET_GPR_U32(ctx, 31, 0x326DF4u);
    ctx->pc = 0x326DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326DECu;
            // 0x326df0: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DF4u; }
        if (ctx->pc != 0x326DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326DF4u; }
        if (ctx->pc != 0x326DF4u) { return; }
    }
    ctx->pc = 0x326DF4u;
label_326df4:
    // 0x326df4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326df8:
    if (ctx->pc == 0x326DF8u) {
        ctx->pc = 0x326DF8u;
            // 0x326df8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326DFCu;
        goto label_326dfc;
    }
    ctx->pc = 0x326DF4u;
    {
        const bool branch_taken_0x326df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326df4) {
            ctx->pc = 0x326DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326DF4u;
            // 0x326df8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326E08u;
            goto label_326e08;
        }
    }
    ctx->pc = 0x326DFCu;
label_326dfc:
    // 0x326dfc: 0xc123230  jal         func_48C8C0
label_326e00:
    if (ctx->pc == 0x326E00u) {
        ctx->pc = 0x326E00u;
            // 0x326e00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326E04u;
        goto label_326e04;
    }
    ctx->pc = 0x326DFCu;
    SET_GPR_U32(ctx, 31, 0x326E04u);
    ctx->pc = 0x326E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326DFCu;
            // 0x326e00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E04u; }
        if (ctx->pc != 0x326E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E04u; }
        if (ctx->pc != 0x326E04u) { return; }
    }
    ctx->pc = 0x326E04u;
label_326e04:
    // 0x326e04: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x326e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_326e08:
    // 0x326e08: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326e0c:
    // 0x326e0c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326e10:
    // 0x326e10: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326e14:
    // 0x326e14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x326e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326e18:
    // 0x326e18: 0xc1230ac  jal         func_48C2B0
label_326e1c:
    if (ctx->pc == 0x326E1Cu) {
        ctx->pc = 0x326E1Cu;
            // 0x326e1c: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
        ctx->pc = 0x326E20u;
        goto label_326e20;
    }
    ctx->pc = 0x326E18u;
    SET_GPR_U32(ctx, 31, 0x326E20u);
    ctx->pc = 0x326E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326E18u;
            // 0x326e1c: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E20u; }
        if (ctx->pc != 0x326E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E20u; }
        if (ctx->pc != 0x326E20u) { return; }
    }
    ctx->pc = 0x326E20u;
label_326e20:
    // 0x326e20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x326e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326e24:
    // 0x326e24: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x326e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_326e28:
    // 0x326e28: 0x26120604  addiu       $s2, $s0, 0x604
    ctx->pc = 0x326e28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1540));
label_326e2c:
    // 0x326e2c: 0xc040180  jal         func_100600
label_326e30:
    if (ctx->pc == 0x326E30u) {
        ctx->pc = 0x326E30u;
            // 0x326e30: 0xae020608  sw          $v0, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
        ctx->pc = 0x326E34u;
        goto label_326e34;
    }
    ctx->pc = 0x326E2Cu;
    SET_GPR_U32(ctx, 31, 0x326E34u);
    ctx->pc = 0x326E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326E2Cu;
            // 0x326e30: 0xae020608  sw          $v0, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E34u; }
        if (ctx->pc != 0x326E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E34u; }
        if (ctx->pc != 0x326E34u) { return; }
    }
    ctx->pc = 0x326E34u;
label_326e34:
    // 0x326e34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326e38:
    if (ctx->pc == 0x326E38u) {
        ctx->pc = 0x326E38u;
            // 0x326e38: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x326E3Cu;
        goto label_326e3c;
    }
    ctx->pc = 0x326E34u;
    {
        const bool branch_taken_0x326e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326e34) {
            ctx->pc = 0x326E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x326E34u;
            // 0x326e38: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x326E48u;
            goto label_326e48;
        }
    }
    ctx->pc = 0x326E3Cu;
label_326e3c:
    // 0x326e3c: 0xc123230  jal         func_48C8C0
label_326e40:
    if (ctx->pc == 0x326E40u) {
        ctx->pc = 0x326E40u;
            // 0x326e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326E44u;
        goto label_326e44;
    }
    ctx->pc = 0x326E3Cu;
    SET_GPR_U32(ctx, 31, 0x326E44u);
    ctx->pc = 0x326E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326E3Cu;
            // 0x326e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C8C0u;
    if (runtime->hasFunction(0x48C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x48C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E44u; }
        if (ctx->pc != 0x326E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C8C0_0x48c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E44u; }
        if (ctx->pc != 0x326E44u) { return; }
    }
    ctx->pc = 0x326E44u;
label_326e44:
    // 0x326e44: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x326e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_326e48:
    // 0x326e48: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326e4c:
    // 0x326e4c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x326e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326e50:
    // 0x326e50: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x326e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_326e54:
    // 0x326e54: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x326e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326e58:
    // 0x326e58: 0xc1230ac  jal         func_48C2B0
label_326e5c:
    if (ctx->pc == 0x326E5Cu) {
        ctx->pc = 0x326E5Cu;
            // 0x326e5c: 0x24a5c530  addiu       $a1, $a1, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952240));
        ctx->pc = 0x326E60u;
        goto label_326e60;
    }
    ctx->pc = 0x326E58u;
    SET_GPR_U32(ctx, 31, 0x326E60u);
    ctx->pc = 0x326E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326E58u;
            // 0x326e5c: 0x24a5c530  addiu       $a1, $a1, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C2B0u;
    if (runtime->hasFunction(0x48C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E60u; }
        if (ctx->pc != 0x326E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C2B0_0x48c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E60u; }
        if (ctx->pc != 0x326E60u) { return; }
    }
    ctx->pc = 0x326E60u;
label_326e60:
    // 0x326e60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326e64:
    // 0x326e64: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326e68:
    // 0x326e68: 0x24a5cc28  addiu       $a1, $a1, -0x33D8
    ctx->pc = 0x326e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954024));
label_326e6c:
    // 0x326e6c: 0xc123944  jal         func_48E510
label_326e70:
    if (ctx->pc == 0x326E70u) {
        ctx->pc = 0x326E70u;
            // 0x326e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326E74u;
        goto label_326e74;
    }
    ctx->pc = 0x326E6Cu;
    SET_GPR_U32(ctx, 31, 0x326E74u);
    ctx->pc = 0x326E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326E6Cu;
            // 0x326e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E74u; }
        if (ctx->pc != 0x326E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E74u; }
        if (ctx->pc != 0x326E74u) { return; }
    }
    ctx->pc = 0x326E74u;
label_326e74:
    // 0x326e74: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326e78:
    // 0x326e78: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326e7c:
    // 0x326e7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x326e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326e80:
    // 0x326e80: 0x24a5c4b8  addiu       $a1, $a1, -0x3B48
    ctx->pc = 0x326e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952120));
label_326e84:
    // 0x326e84: 0xc123944  jal         func_48E510
label_326e88:
    if (ctx->pc == 0x326E88u) {
        ctx->pc = 0x326E88u;
            // 0x326e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326E8Cu;
        goto label_326e8c;
    }
    ctx->pc = 0x326E84u;
    SET_GPR_U32(ctx, 31, 0x326E8Cu);
    ctx->pc = 0x326E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326E84u;
            // 0x326e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E8Cu; }
        if (ctx->pc != 0x326E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326E8Cu; }
        if (ctx->pc != 0x326E8Cu) { return; }
    }
    ctx->pc = 0x326E8Cu;
label_326e8c:
    // 0x326e8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326e90:
    // 0x326e90: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326e94:
    // 0x326e94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x326e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326e98:
    // 0x326e98: 0x24a5c4c8  addiu       $a1, $a1, -0x3B38
    ctx->pc = 0x326e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952136));
label_326e9c:
    // 0x326e9c: 0xc123944  jal         func_48E510
label_326ea0:
    if (ctx->pc == 0x326EA0u) {
        ctx->pc = 0x326EA0u;
            // 0x326ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326EA4u;
        goto label_326ea4;
    }
    ctx->pc = 0x326E9Cu;
    SET_GPR_U32(ctx, 31, 0x326EA4u);
    ctx->pc = 0x326EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326E9Cu;
            // 0x326ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326EA4u; }
        if (ctx->pc != 0x326EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326EA4u; }
        if (ctx->pc != 0x326EA4u) { return; }
    }
    ctx->pc = 0x326EA4u;
label_326ea4:
    // 0x326ea4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326ea8:
    // 0x326ea8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326eac:
    // 0x326eac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x326eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326eb0:
    // 0x326eb0: 0x24a5cc40  addiu       $a1, $a1, -0x33C0
    ctx->pc = 0x326eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954048));
label_326eb4:
    // 0x326eb4: 0xc123944  jal         func_48E510
label_326eb8:
    if (ctx->pc == 0x326EB8u) {
        ctx->pc = 0x326EB8u;
            // 0x326eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326EBCu;
        goto label_326ebc;
    }
    ctx->pc = 0x326EB4u;
    SET_GPR_U32(ctx, 31, 0x326EBCu);
    ctx->pc = 0x326EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326EB4u;
            // 0x326eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326EBCu; }
        if (ctx->pc != 0x326EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326EBCu; }
        if (ctx->pc != 0x326EBCu) { return; }
    }
    ctx->pc = 0x326EBCu;
label_326ebc:
    // 0x326ebc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_326ec0:
    // 0x326ec0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_326ec4:
    // 0x326ec4: 0x24a5cc50  addiu       $a1, $a1, -0x33B0
    ctx->pc = 0x326ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954064));
label_326ec8:
    // 0x326ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326ecc:
    // 0x326ecc: 0xc123944  jal         func_48E510
label_326ed0:
    if (ctx->pc == 0x326ED0u) {
        ctx->pc = 0x326ED0u;
            // 0x326ed0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326ED4u;
        goto label_326ed4;
    }
    ctx->pc = 0x326ECCu;
    SET_GPR_U32(ctx, 31, 0x326ED4u);
    ctx->pc = 0x326ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326ECCu;
            // 0x326ed0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326ED4u; }
        if (ctx->pc != 0x326ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326ED4u; }
        if (ctx->pc != 0x326ED4u) { return; }
    }
    ctx->pc = 0x326ED4u;
label_326ed4:
    // 0x326ed4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x326ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_326ed8:
    // 0x326ed8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x326ed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326edc:
    // 0x326edc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x326edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326ee0:
    // 0x326ee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326ee4:
    // 0x326ee4: 0xc123654  jal         func_48D950
label_326ee8:
    if (ctx->pc == 0x326EE8u) {
        ctx->pc = 0x326EE8u;
            // 0x326ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326EECu;
        goto label_326eec;
    }
    ctx->pc = 0x326EE4u;
    SET_GPR_U32(ctx, 31, 0x326EECu);
    ctx->pc = 0x326EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326EE4u;
            // 0x326ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326EECu; }
        if (ctx->pc != 0x326EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326EECu; }
        if (ctx->pc != 0x326EECu) { return; }
    }
    ctx->pc = 0x326EECu;
label_326eec:
    // 0x326eec: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x326eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_326ef0:
    // 0x326ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_326ef4:
    // 0x326ef4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x326ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_326ef8:
    // 0x326ef8: 0xc123654  jal         func_48D950
label_326efc:
    if (ctx->pc == 0x326EFCu) {
        ctx->pc = 0x326EFCu;
            // 0x326efc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326F00u;
        goto label_326f00;
    }
    ctx->pc = 0x326EF8u;
    SET_GPR_U32(ctx, 31, 0x326F00u);
    ctx->pc = 0x326EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326EF8u;
            // 0x326efc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326F00u; }
        if (ctx->pc != 0x326F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326F00u; }
        if (ctx->pc != 0x326F00u) { return; }
    }
    ctx->pc = 0x326F00u;
label_326f00:
    // 0x326f00: 0xc0c974c  jal         func_325D30
label_326f04:
    if (ctx->pc == 0x326F04u) {
        ctx->pc = 0x326F04u;
            // 0x326f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326F08u;
        goto label_326f08;
    }
    ctx->pc = 0x326F00u;
    SET_GPR_U32(ctx, 31, 0x326F08u);
    ctx->pc = 0x326F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326F00u;
            // 0x326f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x325D30u;
    if (runtime->hasFunction(0x325D30u)) {
        auto targetFn = runtime->lookupFunction(0x325D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326F08u; }
        if (ctx->pc != 0x326F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00325D30_0x325d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326F08u; }
        if (ctx->pc != 0x326F08u) { return; }
    }
    ctx->pc = 0x326F08u;
label_326f08:
    // 0x326f08: 0xc0c92bc  jal         func_324AF0
label_326f0c:
    if (ctx->pc == 0x326F0Cu) {
        ctx->pc = 0x326F0Cu;
            // 0x326f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326F10u;
        goto label_326f10;
    }
    ctx->pc = 0x326F08u;
    SET_GPR_U32(ctx, 31, 0x326F10u);
    ctx->pc = 0x326F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326F08u;
            // 0x326f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324AF0u;
    if (runtime->hasFunction(0x324AF0u)) {
        auto targetFn = runtime->lookupFunction(0x324AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326F10u; }
        if (ctx->pc != 0x326F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324AF0_0x324af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326F10u; }
        if (ctx->pc != 0x326F10u) { return; }
    }
    ctx->pc = 0x326F10u;
label_326f10:
    // 0x326f10: 0xc0c9240  jal         func_324900
label_326f14:
    if (ctx->pc == 0x326F14u) {
        ctx->pc = 0x326F14u;
            // 0x326f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x326F18u;
        goto label_326f18;
    }
    ctx->pc = 0x326F10u;
    SET_GPR_U32(ctx, 31, 0x326F18u);
    ctx->pc = 0x326F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326F10u;
            // 0x326f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324900u;
    if (runtime->hasFunction(0x324900u)) {
        auto targetFn = runtime->lookupFunction(0x324900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326F18u; }
        if (ctx->pc != 0x326F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324900_0x324900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326F18u; }
        if (ctx->pc != 0x326F18u) { return; }
    }
    ctx->pc = 0x326F18u;
label_326f18:
    // 0x326f18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x326f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_326f1c:
    // 0x326f1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x326f1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_326f20:
    // 0x326f20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x326f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_326f24:
    // 0x326f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x326f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_326f28:
    // 0x326f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x326f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_326f2c:
    // 0x326f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_326f30:
    // 0x326f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_326f34:
    // 0x326f34: 0x3e00008  jr          $ra
label_326f38:
    if (ctx->pc == 0x326F38u) {
        ctx->pc = 0x326F38u;
            // 0x326f38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x326F3Cu;
        goto label_326f3c;
    }
    ctx->pc = 0x326F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326F34u;
            // 0x326f38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x326F3Cu;
label_326f3c:
    // 0x326f3c: 0x0  nop
    ctx->pc = 0x326f3cu;
    // NOP
}
