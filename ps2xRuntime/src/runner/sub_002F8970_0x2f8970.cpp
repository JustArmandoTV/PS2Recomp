#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8970
// Address: 0x2f8970 - 0x2f8d90
void sub_002F8970_0x2f8970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8970_0x2f8970");
#endif

    switch (ctx->pc) {
        case 0x2f8970u: goto label_2f8970;
        case 0x2f8974u: goto label_2f8974;
        case 0x2f8978u: goto label_2f8978;
        case 0x2f897cu: goto label_2f897c;
        case 0x2f8980u: goto label_2f8980;
        case 0x2f8984u: goto label_2f8984;
        case 0x2f8988u: goto label_2f8988;
        case 0x2f898cu: goto label_2f898c;
        case 0x2f8990u: goto label_2f8990;
        case 0x2f8994u: goto label_2f8994;
        case 0x2f8998u: goto label_2f8998;
        case 0x2f899cu: goto label_2f899c;
        case 0x2f89a0u: goto label_2f89a0;
        case 0x2f89a4u: goto label_2f89a4;
        case 0x2f89a8u: goto label_2f89a8;
        case 0x2f89acu: goto label_2f89ac;
        case 0x2f89b0u: goto label_2f89b0;
        case 0x2f89b4u: goto label_2f89b4;
        case 0x2f89b8u: goto label_2f89b8;
        case 0x2f89bcu: goto label_2f89bc;
        case 0x2f89c0u: goto label_2f89c0;
        case 0x2f89c4u: goto label_2f89c4;
        case 0x2f89c8u: goto label_2f89c8;
        case 0x2f89ccu: goto label_2f89cc;
        case 0x2f89d0u: goto label_2f89d0;
        case 0x2f89d4u: goto label_2f89d4;
        case 0x2f89d8u: goto label_2f89d8;
        case 0x2f89dcu: goto label_2f89dc;
        case 0x2f89e0u: goto label_2f89e0;
        case 0x2f89e4u: goto label_2f89e4;
        case 0x2f89e8u: goto label_2f89e8;
        case 0x2f89ecu: goto label_2f89ec;
        case 0x2f89f0u: goto label_2f89f0;
        case 0x2f89f4u: goto label_2f89f4;
        case 0x2f89f8u: goto label_2f89f8;
        case 0x2f89fcu: goto label_2f89fc;
        case 0x2f8a00u: goto label_2f8a00;
        case 0x2f8a04u: goto label_2f8a04;
        case 0x2f8a08u: goto label_2f8a08;
        case 0x2f8a0cu: goto label_2f8a0c;
        case 0x2f8a10u: goto label_2f8a10;
        case 0x2f8a14u: goto label_2f8a14;
        case 0x2f8a18u: goto label_2f8a18;
        case 0x2f8a1cu: goto label_2f8a1c;
        case 0x2f8a20u: goto label_2f8a20;
        case 0x2f8a24u: goto label_2f8a24;
        case 0x2f8a28u: goto label_2f8a28;
        case 0x2f8a2cu: goto label_2f8a2c;
        case 0x2f8a30u: goto label_2f8a30;
        case 0x2f8a34u: goto label_2f8a34;
        case 0x2f8a38u: goto label_2f8a38;
        case 0x2f8a3cu: goto label_2f8a3c;
        case 0x2f8a40u: goto label_2f8a40;
        case 0x2f8a44u: goto label_2f8a44;
        case 0x2f8a48u: goto label_2f8a48;
        case 0x2f8a4cu: goto label_2f8a4c;
        case 0x2f8a50u: goto label_2f8a50;
        case 0x2f8a54u: goto label_2f8a54;
        case 0x2f8a58u: goto label_2f8a58;
        case 0x2f8a5cu: goto label_2f8a5c;
        case 0x2f8a60u: goto label_2f8a60;
        case 0x2f8a64u: goto label_2f8a64;
        case 0x2f8a68u: goto label_2f8a68;
        case 0x2f8a6cu: goto label_2f8a6c;
        case 0x2f8a70u: goto label_2f8a70;
        case 0x2f8a74u: goto label_2f8a74;
        case 0x2f8a78u: goto label_2f8a78;
        case 0x2f8a7cu: goto label_2f8a7c;
        case 0x2f8a80u: goto label_2f8a80;
        case 0x2f8a84u: goto label_2f8a84;
        case 0x2f8a88u: goto label_2f8a88;
        case 0x2f8a8cu: goto label_2f8a8c;
        case 0x2f8a90u: goto label_2f8a90;
        case 0x2f8a94u: goto label_2f8a94;
        case 0x2f8a98u: goto label_2f8a98;
        case 0x2f8a9cu: goto label_2f8a9c;
        case 0x2f8aa0u: goto label_2f8aa0;
        case 0x2f8aa4u: goto label_2f8aa4;
        case 0x2f8aa8u: goto label_2f8aa8;
        case 0x2f8aacu: goto label_2f8aac;
        case 0x2f8ab0u: goto label_2f8ab0;
        case 0x2f8ab4u: goto label_2f8ab4;
        case 0x2f8ab8u: goto label_2f8ab8;
        case 0x2f8abcu: goto label_2f8abc;
        case 0x2f8ac0u: goto label_2f8ac0;
        case 0x2f8ac4u: goto label_2f8ac4;
        case 0x2f8ac8u: goto label_2f8ac8;
        case 0x2f8accu: goto label_2f8acc;
        case 0x2f8ad0u: goto label_2f8ad0;
        case 0x2f8ad4u: goto label_2f8ad4;
        case 0x2f8ad8u: goto label_2f8ad8;
        case 0x2f8adcu: goto label_2f8adc;
        case 0x2f8ae0u: goto label_2f8ae0;
        case 0x2f8ae4u: goto label_2f8ae4;
        case 0x2f8ae8u: goto label_2f8ae8;
        case 0x2f8aecu: goto label_2f8aec;
        case 0x2f8af0u: goto label_2f8af0;
        case 0x2f8af4u: goto label_2f8af4;
        case 0x2f8af8u: goto label_2f8af8;
        case 0x2f8afcu: goto label_2f8afc;
        case 0x2f8b00u: goto label_2f8b00;
        case 0x2f8b04u: goto label_2f8b04;
        case 0x2f8b08u: goto label_2f8b08;
        case 0x2f8b0cu: goto label_2f8b0c;
        case 0x2f8b10u: goto label_2f8b10;
        case 0x2f8b14u: goto label_2f8b14;
        case 0x2f8b18u: goto label_2f8b18;
        case 0x2f8b1cu: goto label_2f8b1c;
        case 0x2f8b20u: goto label_2f8b20;
        case 0x2f8b24u: goto label_2f8b24;
        case 0x2f8b28u: goto label_2f8b28;
        case 0x2f8b2cu: goto label_2f8b2c;
        case 0x2f8b30u: goto label_2f8b30;
        case 0x2f8b34u: goto label_2f8b34;
        case 0x2f8b38u: goto label_2f8b38;
        case 0x2f8b3cu: goto label_2f8b3c;
        case 0x2f8b40u: goto label_2f8b40;
        case 0x2f8b44u: goto label_2f8b44;
        case 0x2f8b48u: goto label_2f8b48;
        case 0x2f8b4cu: goto label_2f8b4c;
        case 0x2f8b50u: goto label_2f8b50;
        case 0x2f8b54u: goto label_2f8b54;
        case 0x2f8b58u: goto label_2f8b58;
        case 0x2f8b5cu: goto label_2f8b5c;
        case 0x2f8b60u: goto label_2f8b60;
        case 0x2f8b64u: goto label_2f8b64;
        case 0x2f8b68u: goto label_2f8b68;
        case 0x2f8b6cu: goto label_2f8b6c;
        case 0x2f8b70u: goto label_2f8b70;
        case 0x2f8b74u: goto label_2f8b74;
        case 0x2f8b78u: goto label_2f8b78;
        case 0x2f8b7cu: goto label_2f8b7c;
        case 0x2f8b80u: goto label_2f8b80;
        case 0x2f8b84u: goto label_2f8b84;
        case 0x2f8b88u: goto label_2f8b88;
        case 0x2f8b8cu: goto label_2f8b8c;
        case 0x2f8b90u: goto label_2f8b90;
        case 0x2f8b94u: goto label_2f8b94;
        case 0x2f8b98u: goto label_2f8b98;
        case 0x2f8b9cu: goto label_2f8b9c;
        case 0x2f8ba0u: goto label_2f8ba0;
        case 0x2f8ba4u: goto label_2f8ba4;
        case 0x2f8ba8u: goto label_2f8ba8;
        case 0x2f8bacu: goto label_2f8bac;
        case 0x2f8bb0u: goto label_2f8bb0;
        case 0x2f8bb4u: goto label_2f8bb4;
        case 0x2f8bb8u: goto label_2f8bb8;
        case 0x2f8bbcu: goto label_2f8bbc;
        case 0x2f8bc0u: goto label_2f8bc0;
        case 0x2f8bc4u: goto label_2f8bc4;
        case 0x2f8bc8u: goto label_2f8bc8;
        case 0x2f8bccu: goto label_2f8bcc;
        case 0x2f8bd0u: goto label_2f8bd0;
        case 0x2f8bd4u: goto label_2f8bd4;
        case 0x2f8bd8u: goto label_2f8bd8;
        case 0x2f8bdcu: goto label_2f8bdc;
        case 0x2f8be0u: goto label_2f8be0;
        case 0x2f8be4u: goto label_2f8be4;
        case 0x2f8be8u: goto label_2f8be8;
        case 0x2f8becu: goto label_2f8bec;
        case 0x2f8bf0u: goto label_2f8bf0;
        case 0x2f8bf4u: goto label_2f8bf4;
        case 0x2f8bf8u: goto label_2f8bf8;
        case 0x2f8bfcu: goto label_2f8bfc;
        case 0x2f8c00u: goto label_2f8c00;
        case 0x2f8c04u: goto label_2f8c04;
        case 0x2f8c08u: goto label_2f8c08;
        case 0x2f8c0cu: goto label_2f8c0c;
        case 0x2f8c10u: goto label_2f8c10;
        case 0x2f8c14u: goto label_2f8c14;
        case 0x2f8c18u: goto label_2f8c18;
        case 0x2f8c1cu: goto label_2f8c1c;
        case 0x2f8c20u: goto label_2f8c20;
        case 0x2f8c24u: goto label_2f8c24;
        case 0x2f8c28u: goto label_2f8c28;
        case 0x2f8c2cu: goto label_2f8c2c;
        case 0x2f8c30u: goto label_2f8c30;
        case 0x2f8c34u: goto label_2f8c34;
        case 0x2f8c38u: goto label_2f8c38;
        case 0x2f8c3cu: goto label_2f8c3c;
        case 0x2f8c40u: goto label_2f8c40;
        case 0x2f8c44u: goto label_2f8c44;
        case 0x2f8c48u: goto label_2f8c48;
        case 0x2f8c4cu: goto label_2f8c4c;
        case 0x2f8c50u: goto label_2f8c50;
        case 0x2f8c54u: goto label_2f8c54;
        case 0x2f8c58u: goto label_2f8c58;
        case 0x2f8c5cu: goto label_2f8c5c;
        case 0x2f8c60u: goto label_2f8c60;
        case 0x2f8c64u: goto label_2f8c64;
        case 0x2f8c68u: goto label_2f8c68;
        case 0x2f8c6cu: goto label_2f8c6c;
        case 0x2f8c70u: goto label_2f8c70;
        case 0x2f8c74u: goto label_2f8c74;
        case 0x2f8c78u: goto label_2f8c78;
        case 0x2f8c7cu: goto label_2f8c7c;
        case 0x2f8c80u: goto label_2f8c80;
        case 0x2f8c84u: goto label_2f8c84;
        case 0x2f8c88u: goto label_2f8c88;
        case 0x2f8c8cu: goto label_2f8c8c;
        case 0x2f8c90u: goto label_2f8c90;
        case 0x2f8c94u: goto label_2f8c94;
        case 0x2f8c98u: goto label_2f8c98;
        case 0x2f8c9cu: goto label_2f8c9c;
        case 0x2f8ca0u: goto label_2f8ca0;
        case 0x2f8ca4u: goto label_2f8ca4;
        case 0x2f8ca8u: goto label_2f8ca8;
        case 0x2f8cacu: goto label_2f8cac;
        case 0x2f8cb0u: goto label_2f8cb0;
        case 0x2f8cb4u: goto label_2f8cb4;
        case 0x2f8cb8u: goto label_2f8cb8;
        case 0x2f8cbcu: goto label_2f8cbc;
        case 0x2f8cc0u: goto label_2f8cc0;
        case 0x2f8cc4u: goto label_2f8cc4;
        case 0x2f8cc8u: goto label_2f8cc8;
        case 0x2f8cccu: goto label_2f8ccc;
        case 0x2f8cd0u: goto label_2f8cd0;
        case 0x2f8cd4u: goto label_2f8cd4;
        case 0x2f8cd8u: goto label_2f8cd8;
        case 0x2f8cdcu: goto label_2f8cdc;
        case 0x2f8ce0u: goto label_2f8ce0;
        case 0x2f8ce4u: goto label_2f8ce4;
        case 0x2f8ce8u: goto label_2f8ce8;
        case 0x2f8cecu: goto label_2f8cec;
        case 0x2f8cf0u: goto label_2f8cf0;
        case 0x2f8cf4u: goto label_2f8cf4;
        case 0x2f8cf8u: goto label_2f8cf8;
        case 0x2f8cfcu: goto label_2f8cfc;
        case 0x2f8d00u: goto label_2f8d00;
        case 0x2f8d04u: goto label_2f8d04;
        case 0x2f8d08u: goto label_2f8d08;
        case 0x2f8d0cu: goto label_2f8d0c;
        case 0x2f8d10u: goto label_2f8d10;
        case 0x2f8d14u: goto label_2f8d14;
        case 0x2f8d18u: goto label_2f8d18;
        case 0x2f8d1cu: goto label_2f8d1c;
        case 0x2f8d20u: goto label_2f8d20;
        case 0x2f8d24u: goto label_2f8d24;
        case 0x2f8d28u: goto label_2f8d28;
        case 0x2f8d2cu: goto label_2f8d2c;
        case 0x2f8d30u: goto label_2f8d30;
        case 0x2f8d34u: goto label_2f8d34;
        case 0x2f8d38u: goto label_2f8d38;
        case 0x2f8d3cu: goto label_2f8d3c;
        case 0x2f8d40u: goto label_2f8d40;
        case 0x2f8d44u: goto label_2f8d44;
        case 0x2f8d48u: goto label_2f8d48;
        case 0x2f8d4cu: goto label_2f8d4c;
        case 0x2f8d50u: goto label_2f8d50;
        case 0x2f8d54u: goto label_2f8d54;
        case 0x2f8d58u: goto label_2f8d58;
        case 0x2f8d5cu: goto label_2f8d5c;
        case 0x2f8d60u: goto label_2f8d60;
        case 0x2f8d64u: goto label_2f8d64;
        case 0x2f8d68u: goto label_2f8d68;
        case 0x2f8d6cu: goto label_2f8d6c;
        case 0x2f8d70u: goto label_2f8d70;
        case 0x2f8d74u: goto label_2f8d74;
        case 0x2f8d78u: goto label_2f8d78;
        case 0x2f8d7cu: goto label_2f8d7c;
        case 0x2f8d80u: goto label_2f8d80;
        case 0x2f8d84u: goto label_2f8d84;
        case 0x2f8d88u: goto label_2f8d88;
        case 0x2f8d8cu: goto label_2f8d8c;
        default: break;
    }

    ctx->pc = 0x2f8970u;

label_2f8970:
    // 0x2f8970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f8970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f8974:
    // 0x2f8974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8978:
    // 0x2f8978: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f8978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f897c:
    // 0x2f897c: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x2f897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2f8980:
    // 0x2f8980: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f8980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f8984:
    // 0x2f8984: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f8984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f8988:
    // 0x2f8988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f8988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f898c:
    // 0x2f898c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f898cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f8990:
    // 0x2f8990: 0x2672005c  addiu       $s2, $s3, 0x5C
    ctx->pc = 0x2f8990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
label_2f8994:
    // 0x2f8994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f8998:
    // 0x2f8998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f8998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f899c:
    // 0x2f899c: 0xc04a576  jal         func_1295D8
label_2f89a0:
    if (ctx->pc == 0x2F89A0u) {
        ctx->pc = 0x2F89A0u;
            // 0x2f89a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2F89A4u;
        goto label_2f89a4;
    }
    ctx->pc = 0x2F899Cu;
    SET_GPR_U32(ctx, 31, 0x2F89A4u);
    ctx->pc = 0x2F89A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F899Cu;
            // 0x2f89a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89A4u; }
        if (ctx->pc != 0x2F89A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89A4u; }
        if (ctx->pc != 0x2F89A4u) { return; }
    }
    ctx->pc = 0x2F89A4u;
label_2f89a4:
    // 0x2f89a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f89a8:
    // 0x2f89a8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2f89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2f89ac:
    // 0x2f89ac: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x2f89acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_2f89b0:
    // 0x2f89b0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2f89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2f89b4:
    // 0x2f89b4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2f89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2f89b8:
    // 0x2f89b8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2f89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2f89bc:
    // 0x2f89bc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2f89bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2f89c0:
    // 0x2f89c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2f89c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2f89c4:
    // 0x2f89c4: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x2f89c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f89c8:
    // 0x2f89c8: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x2f89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_2f89cc:
    // 0x2f89cc: 0x1054006d  beq         $v0, $s4, . + 4 + (0x6D << 2)
label_2f89d0:
    if (ctx->pc == 0x2F89D0u) {
        ctx->pc = 0x2F89D0u;
            // 0x2f89d0: 0x26710030  addiu       $s1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x2F89D4u;
        goto label_2f89d4;
    }
    ctx->pc = 0x2F89CCu;
    {
        const bool branch_taken_0x2f89cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2F89D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89CCu;
            // 0x2f89d0: 0x26710030  addiu       $s1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89cc) {
            ctx->pc = 0x2F8B84u;
            goto label_2f8b84;
        }
    }
    ctx->pc = 0x2F89D4u;
label_2f89d4:
    // 0x2f89d4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f89d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f89d8:
    // 0x2f89d8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2f89d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2f89dc:
    // 0x2f89dc: 0x320f809  jalr        $t9
label_2f89e0:
    if (ctx->pc == 0x2F89E0u) {
        ctx->pc = 0x2F89E0u;
            // 0x2f89e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F89E4u;
        goto label_2f89e4;
    }
    ctx->pc = 0x2F89DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F89E4u);
        ctx->pc = 0x2F89E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89DCu;
            // 0x2f89e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F89E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F89E4u; }
            if (ctx->pc != 0x2F89E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F89E4u;
label_2f89e4:
    // 0x2f89e4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f89e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f89e8:
    // 0x2f89e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f89e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f89ec:
    // 0x2f89ec: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f89ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f89f0:
    // 0x2f89f0: 0x320f809  jalr        $t9
label_2f89f4:
    if (ctx->pc == 0x2F89F4u) {
        ctx->pc = 0x2F89F4u;
            // 0x2f89f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F89F8u;
        goto label_2f89f8;
    }
    ctx->pc = 0x2F89F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F89F8u);
        ctx->pc = 0x2F89F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89F0u;
            // 0x2f89f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F89F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F89F8u; }
            if (ctx->pc != 0x2F89F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F89F8u;
label_2f89f8:
    // 0x2f89f8: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x2f89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_2f89fc:
    // 0x2f89fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f89fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a00:
    // 0x2f8a00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f8a04:
    // 0x2f8a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a08:
    // 0x2f8a08: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x2f8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_2f8a0c:
    // 0x2f8a0c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2f8a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a10:
    // 0x2f8a10: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2f8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a14:
    // 0x2f8a14: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2f8a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8a18:
    // 0x2f8a18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8a1c:
    // 0x2f8a1c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2f8a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2f8a20:
    // 0x2f8a20: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2f8a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a24:
    // 0x2f8a24: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2f8a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8a28:
    // 0x2f8a28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8a2c:
    // 0x2f8a2c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2f8a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2f8a30:
    // 0x2f8a30: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2f8a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a34:
    // 0x2f8a34: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2f8a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8a38:
    // 0x2f8a38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8a3c:
    // 0x2f8a3c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2f8a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2f8a40:
    // 0x2f8a40: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2f8a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a44:
    // 0x2f8a44: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2f8a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8a48:
    // 0x2f8a48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8a4c:
    // 0x2f8a4c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x2f8a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2f8a50:
    // 0x2f8a50: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2f8a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a54:
    // 0x2f8a54: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2f8a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8a58:
    // 0x2f8a58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8a5c:
    // 0x2f8a5c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2f8a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_2f8a60:
    // 0x2f8a60: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2f8a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a64:
    // 0x2f8a64: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2f8a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8a68:
    // 0x2f8a68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8a6c:
    // 0x2f8a6c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2f8a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_2f8a70:
    // 0x2f8a70: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2f8a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a74:
    // 0x2f8a74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f8a78:
    // 0x2f8a78: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2f8a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8a7c:
    // 0x2f8a7c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2f8a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2f8a80:
    // 0x2f8a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8a84:
    // 0x2f8a84: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2f8a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2f8a88:
    // 0x2f8a88: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x2f8a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a8c:
    // 0x2f8a8c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2f8a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8a90:
    // 0x2f8a90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2f8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2f8a94:
    // 0x2f8a94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8a98:
    // 0x2f8a98: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2f8a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2f8a9c:
    // 0x2f8a9c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2f8aa0:
    if (ctx->pc == 0x2F8AA0u) {
        ctx->pc = 0x2F8AA0u;
            // 0x2f8aa0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2F8AA4u;
        goto label_2f8aa4;
    }
    ctx->pc = 0x2F8A9Cu;
    {
        const bool branch_taken_0x2f8a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A9Cu;
            // 0x2f8aa0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a9c) {
            ctx->pc = 0x2F8A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8a70;
        }
    }
    ctx->pc = 0x2F8AA4u;
label_2f8aa4:
    // 0x2f8aa4: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2f8aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8aa8:
    // 0x2f8aa8: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2f8aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8aac:
    // 0x2f8aac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8ab0:
    // 0x2f8ab0: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2f8ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_2f8ab4:
    // 0x2f8ab4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2f8ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8ab8:
    // 0x2f8ab8: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2f8ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8abc:
    // 0x2f8abc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8ac0:
    // 0x2f8ac0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2f8ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_2f8ac4:
    // 0x2f8ac4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2f8ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8ac8:
    // 0x2f8ac8: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2f8ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8acc:
    // 0x2f8acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8ad0:
    // 0x2f8ad0: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2f8ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_2f8ad4:
    // 0x2f8ad4: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2f8ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8ad8:
    // 0x2f8ad8: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x2f8ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8adc:
    // 0x2f8adc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8ae0:
    // 0x2f8ae0: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x2f8ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_2f8ae4:
    // 0x2f8ae4: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2f8ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8ae8:
    // 0x2f8ae8: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2f8ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8aec:
    // 0x2f8aec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8af0:
    // 0x2f8af0: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2f8af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_2f8af4:
    // 0x2f8af4: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2f8af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8af8:
    // 0x2f8af8: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2f8af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8afc:
    // 0x2f8afc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8b00:
    // 0x2f8b00: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2f8b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_2f8b04:
    // 0x2f8b04: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2f8b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8b08:
    // 0x2f8b08: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x2f8b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8b0c:
    // 0x2f8b0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8b10:
    // 0x2f8b10: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x2f8b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_2f8b14:
    // 0x2f8b14: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2f8b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8b18:
    // 0x2f8b18: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x2f8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8b1c:
    // 0x2f8b1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8b20:
    // 0x2f8b20: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x2f8b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_2f8b24:
    // 0x2f8b24: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x2f8b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8b28:
    // 0x2f8b28: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x2f8b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8b2c:
    // 0x2f8b2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8b30:
    // 0x2f8b30: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x2f8b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_2f8b34:
    // 0x2f8b34: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2f8b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8b38:
    // 0x2f8b38: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x2f8b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8b3c:
    // 0x2f8b3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8b40:
    // 0x2f8b40: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x2f8b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_2f8b44:
    // 0x2f8b44: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2f8b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2f8b48:
    // 0x2f8b48: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x2f8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_2f8b4c:
    // 0x2f8b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8b50:
    // 0x2f8b50: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2f8b50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_2f8b54:
    // 0x2f8b54: 0x8603005c  lh          $v1, 0x5C($s0)
    ctx->pc = 0x2f8b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_2f8b58:
    // 0x2f8b58: 0x86420068  lh          $v0, 0x68($s2)
    ctx->pc = 0x2f8b58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
label_2f8b5c:
    // 0x2f8b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8b60:
    // 0x2f8b60: 0xa6420068  sh          $v0, 0x68($s2)
    ctx->pc = 0x2f8b60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 104), (uint16_t)GPR_U32(ctx, 2));
label_2f8b64:
    // 0x2f8b64: 0x8203005e  lb          $v1, 0x5E($s0)
    ctx->pc = 0x2f8b64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
label_2f8b68:
    // 0x2f8b68: 0x8242006a  lb          $v0, 0x6A($s2)
    ctx->pc = 0x2f8b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 106)));
label_2f8b6c:
    // 0x2f8b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8b70:
    // 0x2f8b70: 0xa242006a  sb          $v0, 0x6A($s2)
    ctx->pc = 0x2f8b70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 2));
label_2f8b74:
    // 0x2f8b74: 0x8203005f  lb          $v1, 0x5F($s0)
    ctx->pc = 0x2f8b74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
label_2f8b78:
    // 0x2f8b78: 0x8242006b  lb          $v0, 0x6B($s2)
    ctx->pc = 0x2f8b78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 107)));
label_2f8b7c:
    // 0x2f8b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8b80:
    // 0x2f8b80: 0xa242006b  sb          $v0, 0x6B($s2)
    ctx->pc = 0x2f8b80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 2));
label_2f8b84:
    // 0x2f8b84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f8b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8b88:
    // 0x2f8b88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8b8c:
    // 0x2f8b8c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2f8b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2f8b90:
    // 0x2f8b90: 0x320f809  jalr        $t9
label_2f8b94:
    if (ctx->pc == 0x2F8B94u) {
        ctx->pc = 0x2F8B98u;
        goto label_2f8b98;
    }
    ctx->pc = 0x2F8B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8B98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B98u; }
            if (ctx->pc != 0x2F8B98u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8B98u;
label_2f8b98:
    // 0x2f8b98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8b9c:
    // 0x2f8b9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8ba0:
    // 0x2f8ba0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f8ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f8ba4:
    // 0x2f8ba4: 0x320f809  jalr        $t9
label_2f8ba8:
    if (ctx->pc == 0x2F8BA8u) {
        ctx->pc = 0x2F8BA8u;
            // 0x2f8ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BACu;
        goto label_2f8bac;
    }
    ctx->pc = 0x2F8BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8BACu);
        ctx->pc = 0x2F8BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BA4u;
            // 0x2f8ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BACu; }
            if (ctx->pc != 0x2F8BACu) { return; }
        }
        }
    }
    ctx->pc = 0x2F8BACu;
label_2f8bac:
    // 0x2f8bac: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2f8bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8bb0:
    // 0x2f8bb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8bb4:
    // 0x2f8bb4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2f8bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8bb8:
    // 0x2f8bb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f8bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8bbc:
    // 0x2f8bbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f8bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8bc0:
    // 0x2f8bc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8bc4:
    // 0x2f8bc4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2f8bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2f8bc8:
    // 0x2f8bc8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2f8bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8bcc:
    // 0x2f8bcc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2f8bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8bd0:
    // 0x2f8bd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8bd4:
    // 0x2f8bd4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2f8bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2f8bd8:
    // 0x2f8bd8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2f8bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8bdc:
    // 0x2f8bdc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2f8bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8be0:
    // 0x2f8be0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8be4:
    // 0x2f8be4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2f8be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2f8be8:
    // 0x2f8be8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2f8be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8bec:
    // 0x2f8bec: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2f8becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8bf0:
    // 0x2f8bf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8bf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8bf4:
    // 0x2f8bf4: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x2f8bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2f8bf8:
    // 0x2f8bf8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2f8bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8bfc:
    // 0x2f8bfc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2f8bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8c00:
    // 0x2f8c00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8c04:
    // 0x2f8c04: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2f8c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_2f8c08:
    // 0x2f8c08: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2f8c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8c0c:
    // 0x2f8c0c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2f8c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8c10:
    // 0x2f8c10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f8c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f8c14:
    // 0x2f8c14: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2f8c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_2f8c18:
    // 0x2f8c18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f8c1c:
    // 0x2f8c1c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2f8c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8c20:
    // 0x2f8c20: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x2f8c20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2f8c24:
    // 0x2f8c24: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2f8c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8c28:
    // 0x2f8c28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8c2c:
    // 0x2f8c2c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2f8c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_2f8c30:
    // 0x2f8c30: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x2f8c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8c34:
    // 0x2f8c34: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2f8c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8c38:
    // 0x2f8c38: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2f8c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2f8c3c:
    // 0x2f8c3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8c40:
    // 0x2f8c40: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x2f8c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_2f8c44:
    // 0x2f8c44: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_2f8c48:
    if (ctx->pc == 0x2F8C48u) {
        ctx->pc = 0x2F8C48u;
            // 0x2f8c48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2F8C4Cu;
        goto label_2f8c4c;
    }
    ctx->pc = 0x2F8C44u;
    {
        const bool branch_taken_0x2f8c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C44u;
            // 0x2f8c48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c44) {
            ctx->pc = 0x2F8C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8c18;
        }
    }
    ctx->pc = 0x2F8C4Cu;
label_2f8c4c:
    // 0x2f8c4c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2f8c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8c50:
    // 0x2f8c50: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2f8c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2f8c54:
    // 0x2f8c54: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2f8c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8c58:
    // 0x2f8c58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8c5c:
    // 0x2f8c5c: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2f8c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_2f8c60:
    // 0x2f8c60: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2f8c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8c64:
    // 0x2f8c64: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2f8c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8c68:
    // 0x2f8c68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8c6c:
    // 0x2f8c6c: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2f8c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_2f8c70:
    // 0x2f8c70: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2f8c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8c74:
    // 0x2f8c74: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2f8c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8c78:
    // 0x2f8c78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8c7c:
    // 0x2f8c7c: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2f8c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_2f8c80:
    // 0x2f8c80: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2f8c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8c84:
    // 0x2f8c84: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x2f8c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8c88:
    // 0x2f8c88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8c8c:
    // 0x2f8c8c: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x2f8c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_2f8c90:
    // 0x2f8c90: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2f8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2f8c94:
    // 0x2f8c94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f8c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f8c98:
    // 0x2f8c98: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x2f8c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_2f8c9c:
    // 0x2f8c9c: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2f8c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8ca0:
    // 0x2f8ca0: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2f8ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8ca4:
    // 0x2f8ca4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8ca8:
    // 0x2f8ca8: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2f8ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_2f8cac:
    // 0x2f8cac: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2f8cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8cb0:
    // 0x2f8cb0: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2f8cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8cb4:
    // 0x2f8cb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8cb8:
    // 0x2f8cb8: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2f8cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_2f8cbc:
    // 0x2f8cbc: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2f8cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8cc0:
    // 0x2f8cc0: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x2f8cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8cc4:
    // 0x2f8cc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8cc8:
    // 0x2f8cc8: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x2f8cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_2f8ccc:
    // 0x2f8ccc: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2f8cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8cd0:
    // 0x2f8cd0: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x2f8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8cd4:
    // 0x2f8cd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8cd8:
    // 0x2f8cd8: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x2f8cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_2f8cdc:
    // 0x2f8cdc: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x2f8cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8ce0:
    // 0x2f8ce0: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x2f8ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8ce4:
    // 0x2f8ce4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8ce8:
    // 0x2f8ce8: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x2f8ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_2f8cec:
    // 0x2f8cec: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2f8cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8cf0:
    // 0x2f8cf0: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x2f8cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8cf4:
    // 0x2f8cf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f8cf8:
    // 0x2f8cf8: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x2f8cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_2f8cfc:
    // 0x2f8cfc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2f8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2f8d00:
    // 0x2f8d00: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x2f8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_2f8d04:
    // 0x2f8d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8d08:
    // 0x2f8d08: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2f8d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_2f8d0c:
    // 0x2f8d0c: 0x8603005c  lh          $v1, 0x5C($s0)
    ctx->pc = 0x2f8d0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_2f8d10:
    // 0x2f8d10: 0x86420068  lh          $v0, 0x68($s2)
    ctx->pc = 0x2f8d10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
label_2f8d14:
    // 0x2f8d14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8d18:
    // 0x2f8d18: 0xa6420068  sh          $v0, 0x68($s2)
    ctx->pc = 0x2f8d18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 104), (uint16_t)GPR_U32(ctx, 2));
label_2f8d1c:
    // 0x2f8d1c: 0x8203005e  lb          $v1, 0x5E($s0)
    ctx->pc = 0x2f8d1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
label_2f8d20:
    // 0x2f8d20: 0x8242006a  lb          $v0, 0x6A($s2)
    ctx->pc = 0x2f8d20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 106)));
label_2f8d24:
    // 0x2f8d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8d28:
    // 0x2f8d28: 0xa242006a  sb          $v0, 0x6A($s2)
    ctx->pc = 0x2f8d28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 2));
label_2f8d2c:
    // 0x2f8d2c: 0x8203005f  lb          $v1, 0x5F($s0)
    ctx->pc = 0x2f8d2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
label_2f8d30:
    // 0x2f8d30: 0x8242006b  lb          $v0, 0x6B($s2)
    ctx->pc = 0x2f8d30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 107)));
label_2f8d34:
    // 0x2f8d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f8d38:
    // 0x2f8d38: 0xa242006b  sb          $v0, 0x6B($s2)
    ctx->pc = 0x2f8d38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 2));
label_2f8d3c:
    // 0x2f8d3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f8d40:
    // 0x2f8d40: 0x5440ff91  bnel        $v0, $zero, . + 4 + (-0x6F << 2)
label_2f8d44:
    if (ctx->pc == 0x2F8D44u) {
        ctx->pc = 0x2F8D44u;
            // 0x2f8d44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2F8D48u;
        goto label_2f8d48;
    }
    ctx->pc = 0x2F8D40u;
    {
        const bool branch_taken_0x2f8d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8d40) {
            ctx->pc = 0x2F8D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D40u;
            // 0x2f8d44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8b88;
        }
    }
    ctx->pc = 0x2F8D48u;
label_2f8d48:
    // 0x2f8d48: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2f8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_2f8d4c:
    // 0x2f8d4c: 0xc0754e0  jal         func_1D5380
label_2f8d50:
    if (ctx->pc == 0x2F8D50u) {
        ctx->pc = 0x2F8D50u;
            // 0x2f8d50: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x2F8D54u;
        goto label_2f8d54;
    }
    ctx->pc = 0x2F8D4Cu;
    SET_GPR_U32(ctx, 31, 0x2F8D54u);
    ctx->pc = 0x2F8D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D4Cu;
            // 0x2f8d50: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5380u;
    if (runtime->hasFunction(0x1D5380u)) {
        auto targetFn = runtime->lookupFunction(0x1D5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D54u; }
        if (ctx->pc != 0x2F8D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5380_0x1d5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D54u; }
        if (ctx->pc != 0x2F8D54u) { return; }
    }
    ctx->pc = 0x2F8D54u;
label_2f8d54:
    // 0x2f8d54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f8d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8d58:
    // 0x2f8d58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f8d58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8d5c:
    // 0x2f8d5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f8d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f8d60:
    // 0x2f8d60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f8d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8d64:
    // 0x2f8d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8d68:
    // 0x2f8d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8d6c:
    // 0x2f8d6c: 0x3e00008  jr          $ra
label_2f8d70:
    if (ctx->pc == 0x2F8D70u) {
        ctx->pc = 0x2F8D70u;
            // 0x2f8d70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F8D74u;
        goto label_2f8d74;
    }
    ctx->pc = 0x2F8D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D6Cu;
            // 0x2f8d70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8D74u;
label_2f8d74:
    // 0x2f8d74: 0x0  nop
    ctx->pc = 0x2f8d74u;
    // NOP
label_2f8d78:
    // 0x2f8d78: 0x0  nop
    ctx->pc = 0x2f8d78u;
    // NOP
label_2f8d7c:
    // 0x2f8d7c: 0x0  nop
    ctx->pc = 0x2f8d7cu;
    // NOP
label_2f8d80:
    // 0x2f8d80: 0x3e00008  jr          $ra
label_2f8d84:
    if (ctx->pc == 0x2F8D84u) {
        ctx->pc = 0x2F8D84u;
            // 0x2f8d84: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x2F8D88u;
        goto label_2f8d88;
    }
    ctx->pc = 0x2F8D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D80u;
            // 0x2f8d84: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8D88u;
label_2f8d88:
    // 0x2f8d88: 0x0  nop
    ctx->pc = 0x2f8d88u;
    // NOP
label_2f8d8c:
    // 0x2f8d8c: 0x0  nop
    ctx->pc = 0x2f8d8cu;
    // NOP
}
