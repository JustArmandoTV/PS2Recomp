#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8930
// Address: 0x1e8930 - 0x1e8d20
void sub_001E8930_0x1e8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8930_0x1e8930");
#endif

    switch (ctx->pc) {
        case 0x1e8930u: goto label_1e8930;
        case 0x1e8934u: goto label_1e8934;
        case 0x1e8938u: goto label_1e8938;
        case 0x1e893cu: goto label_1e893c;
        case 0x1e8940u: goto label_1e8940;
        case 0x1e8944u: goto label_1e8944;
        case 0x1e8948u: goto label_1e8948;
        case 0x1e894cu: goto label_1e894c;
        case 0x1e8950u: goto label_1e8950;
        case 0x1e8954u: goto label_1e8954;
        case 0x1e8958u: goto label_1e8958;
        case 0x1e895cu: goto label_1e895c;
        case 0x1e8960u: goto label_1e8960;
        case 0x1e8964u: goto label_1e8964;
        case 0x1e8968u: goto label_1e8968;
        case 0x1e896cu: goto label_1e896c;
        case 0x1e8970u: goto label_1e8970;
        case 0x1e8974u: goto label_1e8974;
        case 0x1e8978u: goto label_1e8978;
        case 0x1e897cu: goto label_1e897c;
        case 0x1e8980u: goto label_1e8980;
        case 0x1e8984u: goto label_1e8984;
        case 0x1e8988u: goto label_1e8988;
        case 0x1e898cu: goto label_1e898c;
        case 0x1e8990u: goto label_1e8990;
        case 0x1e8994u: goto label_1e8994;
        case 0x1e8998u: goto label_1e8998;
        case 0x1e899cu: goto label_1e899c;
        case 0x1e89a0u: goto label_1e89a0;
        case 0x1e89a4u: goto label_1e89a4;
        case 0x1e89a8u: goto label_1e89a8;
        case 0x1e89acu: goto label_1e89ac;
        case 0x1e89b0u: goto label_1e89b0;
        case 0x1e89b4u: goto label_1e89b4;
        case 0x1e89b8u: goto label_1e89b8;
        case 0x1e89bcu: goto label_1e89bc;
        case 0x1e89c0u: goto label_1e89c0;
        case 0x1e89c4u: goto label_1e89c4;
        case 0x1e89c8u: goto label_1e89c8;
        case 0x1e89ccu: goto label_1e89cc;
        case 0x1e89d0u: goto label_1e89d0;
        case 0x1e89d4u: goto label_1e89d4;
        case 0x1e89d8u: goto label_1e89d8;
        case 0x1e89dcu: goto label_1e89dc;
        case 0x1e89e0u: goto label_1e89e0;
        case 0x1e89e4u: goto label_1e89e4;
        case 0x1e89e8u: goto label_1e89e8;
        case 0x1e89ecu: goto label_1e89ec;
        case 0x1e89f0u: goto label_1e89f0;
        case 0x1e89f4u: goto label_1e89f4;
        case 0x1e89f8u: goto label_1e89f8;
        case 0x1e89fcu: goto label_1e89fc;
        case 0x1e8a00u: goto label_1e8a00;
        case 0x1e8a04u: goto label_1e8a04;
        case 0x1e8a08u: goto label_1e8a08;
        case 0x1e8a0cu: goto label_1e8a0c;
        case 0x1e8a10u: goto label_1e8a10;
        case 0x1e8a14u: goto label_1e8a14;
        case 0x1e8a18u: goto label_1e8a18;
        case 0x1e8a1cu: goto label_1e8a1c;
        case 0x1e8a20u: goto label_1e8a20;
        case 0x1e8a24u: goto label_1e8a24;
        case 0x1e8a28u: goto label_1e8a28;
        case 0x1e8a2cu: goto label_1e8a2c;
        case 0x1e8a30u: goto label_1e8a30;
        case 0x1e8a34u: goto label_1e8a34;
        case 0x1e8a38u: goto label_1e8a38;
        case 0x1e8a3cu: goto label_1e8a3c;
        case 0x1e8a40u: goto label_1e8a40;
        case 0x1e8a44u: goto label_1e8a44;
        case 0x1e8a48u: goto label_1e8a48;
        case 0x1e8a4cu: goto label_1e8a4c;
        case 0x1e8a50u: goto label_1e8a50;
        case 0x1e8a54u: goto label_1e8a54;
        case 0x1e8a58u: goto label_1e8a58;
        case 0x1e8a5cu: goto label_1e8a5c;
        case 0x1e8a60u: goto label_1e8a60;
        case 0x1e8a64u: goto label_1e8a64;
        case 0x1e8a68u: goto label_1e8a68;
        case 0x1e8a6cu: goto label_1e8a6c;
        case 0x1e8a70u: goto label_1e8a70;
        case 0x1e8a74u: goto label_1e8a74;
        case 0x1e8a78u: goto label_1e8a78;
        case 0x1e8a7cu: goto label_1e8a7c;
        case 0x1e8a80u: goto label_1e8a80;
        case 0x1e8a84u: goto label_1e8a84;
        case 0x1e8a88u: goto label_1e8a88;
        case 0x1e8a8cu: goto label_1e8a8c;
        case 0x1e8a90u: goto label_1e8a90;
        case 0x1e8a94u: goto label_1e8a94;
        case 0x1e8a98u: goto label_1e8a98;
        case 0x1e8a9cu: goto label_1e8a9c;
        case 0x1e8aa0u: goto label_1e8aa0;
        case 0x1e8aa4u: goto label_1e8aa4;
        case 0x1e8aa8u: goto label_1e8aa8;
        case 0x1e8aacu: goto label_1e8aac;
        case 0x1e8ab0u: goto label_1e8ab0;
        case 0x1e8ab4u: goto label_1e8ab4;
        case 0x1e8ab8u: goto label_1e8ab8;
        case 0x1e8abcu: goto label_1e8abc;
        case 0x1e8ac0u: goto label_1e8ac0;
        case 0x1e8ac4u: goto label_1e8ac4;
        case 0x1e8ac8u: goto label_1e8ac8;
        case 0x1e8accu: goto label_1e8acc;
        case 0x1e8ad0u: goto label_1e8ad0;
        case 0x1e8ad4u: goto label_1e8ad4;
        case 0x1e8ad8u: goto label_1e8ad8;
        case 0x1e8adcu: goto label_1e8adc;
        case 0x1e8ae0u: goto label_1e8ae0;
        case 0x1e8ae4u: goto label_1e8ae4;
        case 0x1e8ae8u: goto label_1e8ae8;
        case 0x1e8aecu: goto label_1e8aec;
        case 0x1e8af0u: goto label_1e8af0;
        case 0x1e8af4u: goto label_1e8af4;
        case 0x1e8af8u: goto label_1e8af8;
        case 0x1e8afcu: goto label_1e8afc;
        case 0x1e8b00u: goto label_1e8b00;
        case 0x1e8b04u: goto label_1e8b04;
        case 0x1e8b08u: goto label_1e8b08;
        case 0x1e8b0cu: goto label_1e8b0c;
        case 0x1e8b10u: goto label_1e8b10;
        case 0x1e8b14u: goto label_1e8b14;
        case 0x1e8b18u: goto label_1e8b18;
        case 0x1e8b1cu: goto label_1e8b1c;
        case 0x1e8b20u: goto label_1e8b20;
        case 0x1e8b24u: goto label_1e8b24;
        case 0x1e8b28u: goto label_1e8b28;
        case 0x1e8b2cu: goto label_1e8b2c;
        case 0x1e8b30u: goto label_1e8b30;
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b38u: goto label_1e8b38;
        case 0x1e8b3cu: goto label_1e8b3c;
        case 0x1e8b40u: goto label_1e8b40;
        case 0x1e8b44u: goto label_1e8b44;
        case 0x1e8b48u: goto label_1e8b48;
        case 0x1e8b4cu: goto label_1e8b4c;
        case 0x1e8b50u: goto label_1e8b50;
        case 0x1e8b54u: goto label_1e8b54;
        case 0x1e8b58u: goto label_1e8b58;
        case 0x1e8b5cu: goto label_1e8b5c;
        case 0x1e8b60u: goto label_1e8b60;
        case 0x1e8b64u: goto label_1e8b64;
        case 0x1e8b68u: goto label_1e8b68;
        case 0x1e8b6cu: goto label_1e8b6c;
        case 0x1e8b70u: goto label_1e8b70;
        case 0x1e8b74u: goto label_1e8b74;
        case 0x1e8b78u: goto label_1e8b78;
        case 0x1e8b7cu: goto label_1e8b7c;
        case 0x1e8b80u: goto label_1e8b80;
        case 0x1e8b84u: goto label_1e8b84;
        case 0x1e8b88u: goto label_1e8b88;
        case 0x1e8b8cu: goto label_1e8b8c;
        case 0x1e8b90u: goto label_1e8b90;
        case 0x1e8b94u: goto label_1e8b94;
        case 0x1e8b98u: goto label_1e8b98;
        case 0x1e8b9cu: goto label_1e8b9c;
        case 0x1e8ba0u: goto label_1e8ba0;
        case 0x1e8ba4u: goto label_1e8ba4;
        case 0x1e8ba8u: goto label_1e8ba8;
        case 0x1e8bacu: goto label_1e8bac;
        case 0x1e8bb0u: goto label_1e8bb0;
        case 0x1e8bb4u: goto label_1e8bb4;
        case 0x1e8bb8u: goto label_1e8bb8;
        case 0x1e8bbcu: goto label_1e8bbc;
        case 0x1e8bc0u: goto label_1e8bc0;
        case 0x1e8bc4u: goto label_1e8bc4;
        case 0x1e8bc8u: goto label_1e8bc8;
        case 0x1e8bccu: goto label_1e8bcc;
        case 0x1e8bd0u: goto label_1e8bd0;
        case 0x1e8bd4u: goto label_1e8bd4;
        case 0x1e8bd8u: goto label_1e8bd8;
        case 0x1e8bdcu: goto label_1e8bdc;
        case 0x1e8be0u: goto label_1e8be0;
        case 0x1e8be4u: goto label_1e8be4;
        case 0x1e8be8u: goto label_1e8be8;
        case 0x1e8becu: goto label_1e8bec;
        case 0x1e8bf0u: goto label_1e8bf0;
        case 0x1e8bf4u: goto label_1e8bf4;
        case 0x1e8bf8u: goto label_1e8bf8;
        case 0x1e8bfcu: goto label_1e8bfc;
        case 0x1e8c00u: goto label_1e8c00;
        case 0x1e8c04u: goto label_1e8c04;
        case 0x1e8c08u: goto label_1e8c08;
        case 0x1e8c0cu: goto label_1e8c0c;
        case 0x1e8c10u: goto label_1e8c10;
        case 0x1e8c14u: goto label_1e8c14;
        case 0x1e8c18u: goto label_1e8c18;
        case 0x1e8c1cu: goto label_1e8c1c;
        case 0x1e8c20u: goto label_1e8c20;
        case 0x1e8c24u: goto label_1e8c24;
        case 0x1e8c28u: goto label_1e8c28;
        case 0x1e8c2cu: goto label_1e8c2c;
        case 0x1e8c30u: goto label_1e8c30;
        case 0x1e8c34u: goto label_1e8c34;
        case 0x1e8c38u: goto label_1e8c38;
        case 0x1e8c3cu: goto label_1e8c3c;
        case 0x1e8c40u: goto label_1e8c40;
        case 0x1e8c44u: goto label_1e8c44;
        case 0x1e8c48u: goto label_1e8c48;
        case 0x1e8c4cu: goto label_1e8c4c;
        case 0x1e8c50u: goto label_1e8c50;
        case 0x1e8c54u: goto label_1e8c54;
        case 0x1e8c58u: goto label_1e8c58;
        case 0x1e8c5cu: goto label_1e8c5c;
        case 0x1e8c60u: goto label_1e8c60;
        case 0x1e8c64u: goto label_1e8c64;
        case 0x1e8c68u: goto label_1e8c68;
        case 0x1e8c6cu: goto label_1e8c6c;
        case 0x1e8c70u: goto label_1e8c70;
        case 0x1e8c74u: goto label_1e8c74;
        case 0x1e8c78u: goto label_1e8c78;
        case 0x1e8c7cu: goto label_1e8c7c;
        case 0x1e8c80u: goto label_1e8c80;
        case 0x1e8c84u: goto label_1e8c84;
        case 0x1e8c88u: goto label_1e8c88;
        case 0x1e8c8cu: goto label_1e8c8c;
        case 0x1e8c90u: goto label_1e8c90;
        case 0x1e8c94u: goto label_1e8c94;
        case 0x1e8c98u: goto label_1e8c98;
        case 0x1e8c9cu: goto label_1e8c9c;
        case 0x1e8ca0u: goto label_1e8ca0;
        case 0x1e8ca4u: goto label_1e8ca4;
        case 0x1e8ca8u: goto label_1e8ca8;
        case 0x1e8cacu: goto label_1e8cac;
        case 0x1e8cb0u: goto label_1e8cb0;
        case 0x1e8cb4u: goto label_1e8cb4;
        case 0x1e8cb8u: goto label_1e8cb8;
        case 0x1e8cbcu: goto label_1e8cbc;
        case 0x1e8cc0u: goto label_1e8cc0;
        case 0x1e8cc4u: goto label_1e8cc4;
        case 0x1e8cc8u: goto label_1e8cc8;
        case 0x1e8cccu: goto label_1e8ccc;
        case 0x1e8cd0u: goto label_1e8cd0;
        case 0x1e8cd4u: goto label_1e8cd4;
        case 0x1e8cd8u: goto label_1e8cd8;
        case 0x1e8cdcu: goto label_1e8cdc;
        case 0x1e8ce0u: goto label_1e8ce0;
        case 0x1e8ce4u: goto label_1e8ce4;
        case 0x1e8ce8u: goto label_1e8ce8;
        case 0x1e8cecu: goto label_1e8cec;
        case 0x1e8cf0u: goto label_1e8cf0;
        case 0x1e8cf4u: goto label_1e8cf4;
        case 0x1e8cf8u: goto label_1e8cf8;
        case 0x1e8cfcu: goto label_1e8cfc;
        case 0x1e8d00u: goto label_1e8d00;
        case 0x1e8d04u: goto label_1e8d04;
        case 0x1e8d08u: goto label_1e8d08;
        case 0x1e8d0cu: goto label_1e8d0c;
        case 0x1e8d10u: goto label_1e8d10;
        case 0x1e8d14u: goto label_1e8d14;
        case 0x1e8d18u: goto label_1e8d18;
        case 0x1e8d1cu: goto label_1e8d1c;
        default: break;
    }

    ctx->pc = 0x1e8930u;

label_1e8930:
    // 0x1e8930: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x1e8930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_1e8934:
    // 0x1e8934: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e8934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e8938:
    // 0x1e8938: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e8938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e893c:
    // 0x1e893c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e893cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8940:
    // 0x1e8940: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e8940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e8944:
    // 0x1e8944: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e8944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e8948:
    // 0x1e8948: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e894c:
    // 0x1e894c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e8950:
    // 0x1e8950: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e8950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8954:
    // 0x1e8954: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8958:
    // 0x1e8958: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e8958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e895c:
    // 0x1e895c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8960:
    // 0x1e8960: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e8960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8964:
    // 0x1e8964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8968:
    // 0x1e8968: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e8968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e896c:
    // 0x1e896c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8970:
    // 0x1e8970: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e8970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e8974:
    // 0x1e8974: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e8974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e8978:
    // 0x1e8978: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e8978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e897c:
    // 0x1e897c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e897cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8980:
    // 0x1e8980: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e8984:
    if (ctx->pc == 0x1E8984u) {
        ctx->pc = 0x1E8984u;
            // 0x1e8984: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E8988u;
        goto label_1e8988;
    }
    ctx->pc = 0x1E8980u;
    {
        const bool branch_taken_0x1e8980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8980u;
            // 0x1e8984: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8980) {
            ctx->pc = 0x1E89BCu;
            goto label_1e89bc;
        }
    }
    ctx->pc = 0x1E8988u;
label_1e8988:
    // 0x1e8988: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e8988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e898c:
    // 0x1e898c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e898cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e8990:
    // 0x1e8990: 0x2463aa28  addiu       $v1, $v1, -0x55D8
    ctx->pc = 0x1e8990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945320));
label_1e8994:
    // 0x1e8994: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e8994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e8998:
    // 0x1e8998: 0x2442aa38  addiu       $v0, $v0, -0x55C8
    ctx->pc = 0x1e8998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945336));
label_1e899c:
    // 0x1e899c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e899cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e89a0:
    // 0x1e89a0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e89a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1e89a4:
    // 0x1e89a4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e89a8:
    // 0x1e89a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e89ac:
    // 0x1e89ac: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e89acu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e89b0:
    // 0x1e89b0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e89b4:
    // 0x1e89b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e89b8:
    // 0x1e89b8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1e89bc:
    // 0x1e89bc: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x1e89bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e89c0:
    // 0x1e89c0: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e89c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e89c4:
    // 0x1e89c4: 0xc0a45a0  jal         func_291680
label_1e89c8:
    if (ctx->pc == 0x1E89C8u) {
        ctx->pc = 0x1E89C8u;
            // 0x1e89c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1E89CCu;
        goto label_1e89cc;
    }
    ctx->pc = 0x1E89C4u;
    SET_GPR_U32(ctx, 31, 0x1E89CCu);
    ctx->pc = 0x1E89C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89C4u;
            // 0x1e89c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89CCu; }
        if (ctx->pc != 0x1E89CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89CCu; }
        if (ctx->pc != 0x1E89CCu) { return; }
    }
    ctx->pc = 0x1E89CCu;
label_1e89cc:
    // 0x1e89cc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e89ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e89d0:
    // 0x1e89d0: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x1e89d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e89d4:
    // 0x1e89d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1e89d8:
    // 0x1e89d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e89d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e89dc:
    // 0x1e89dc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e89dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e89e0:
    // 0x1e89e0: 0x320f809  jalr        $t9
label_1e89e4:
    if (ctx->pc == 0x1E89E4u) {
        ctx->pc = 0x1E89E4u;
            // 0x1e89e4: 0x27a604f0  addiu       $a2, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x1E89E8u;
        goto label_1e89e8;
    }
    ctx->pc = 0x1E89E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E89E8u);
        ctx->pc = 0x1E89E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89E0u;
            // 0x1e89e4: 0x27a604f0  addiu       $a2, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E89E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E89E8u; }
            if (ctx->pc != 0x1E89E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E89E8u;
label_1e89e8:
    // 0x1e89e8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x1e89e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e89ec:
    // 0x1e89ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e89f0:
    // 0x1e89f0: 0x27a302ec  addiu       $v1, $sp, 0x2EC
    ctx->pc = 0x1e89f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
label_1e89f4:
    // 0x1e89f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1e89f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1e89f8:
    // 0x1e89f8: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x1e89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_1e89fc:
    // 0x1e89fc: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x1e89fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_1e8a00:
    // 0x1e8a00: 0xafa302e0  sw          $v1, 0x2E0($sp)
    ctx->pc = 0x1e8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 3));
label_1e8a04:
    // 0x1e8a04: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x1e8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_1e8a08:
    // 0x1e8a08: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x1e8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
label_1e8a0c:
    // 0x1e8a0c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e8a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8a10:
    // 0x1e8a10: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1e8a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1e8a14:
    // 0x1e8a14: 0x320f809  jalr        $t9
label_1e8a18:
    if (ctx->pc == 0x1E8A18u) {
        ctx->pc = 0x1E8A18u;
            // 0x1e8a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A1Cu;
        goto label_1e8a1c;
    }
    ctx->pc = 0x1E8A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8A1Cu);
        ctx->pc = 0x1E8A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A14u;
            // 0x1e8a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A1Cu; }
            if (ctx->pc != 0x1E8A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E8A1Cu;
label_1e8a1c:
    // 0x1e8a1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8a20:
    // 0x1e8a20: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e8a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e8a24:
    // 0x1e8a24: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e8a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e8a28:
    // 0x1e8a28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8a2c:
    // 0x1e8a2c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e8a30:
    // 0x1e8a30: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e8a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8a34:
    // 0x1e8a34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e8a38:
    if (ctx->pc == 0x1E8A38u) {
        ctx->pc = 0x1E8A38u;
            // 0x1e8a38: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E8A3Cu;
        goto label_1e8a3c;
    }
    ctx->pc = 0x1E8A34u;
    {
        const bool branch_taken_0x1e8a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A34u;
            // 0x1e8a38: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a34) {
            ctx->pc = 0x1E8A64u;
            goto label_1e8a64;
        }
    }
    ctx->pc = 0x1E8A3Cu;
label_1e8a3c:
    // 0x1e8a3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e8a40:
    // 0x1e8a40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e8a44:
    // 0x1e8a44: 0x2442aa48  addiu       $v0, $v0, -0x55B8
    ctx->pc = 0x1e8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945352));
label_1e8a48:
    // 0x1e8a48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e8a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e8a4c:
    // 0x1e8a4c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e8a50:
    // 0x1e8a50: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e8a54:
    // 0x1e8a54: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e8a58:
    // 0x1e8a58: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e8a5c:
    // 0x1e8a5c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e8a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e8a60:
    // 0x1e8a60: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e8a64:
    // 0x1e8a64: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e8a68:
    // 0x1e8a68: 0x8fa202e4  lw          $v0, 0x2E4($sp)
    ctx->pc = 0x1e8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_1e8a6c:
    // 0x1e8a6c: 0x8fb102e0  lw          $s1, 0x2E0($sp)
    ctx->pc = 0x1e8a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_1e8a70:
    // 0x1e8a70: 0x8c77000c  lw          $s7, 0xC($v1)
    ctx->pc = 0x1e8a70u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e8a74:
    // 0x1e8a74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e8a78:
    // 0x1e8a78: 0x222b021  addu        $s6, $s1, $v0
    ctx->pc = 0x1e8a78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e8a7c:
    // 0x1e8a7c: 0xafb502dc  sw          $s5, 0x2DC($sp)
    ctx->pc = 0x1e8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 21));
label_1e8a80:
    // 0x1e8a80: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e8a84:
    // 0x1e8a84: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x1e8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
label_1e8a88:
    // 0x1e8a88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e8a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8a8c:
    // 0x1e8a8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e8a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e8a90:
    // 0x1e8a90: 0x320f809  jalr        $t9
label_1e8a94:
    if (ctx->pc == 0x1E8A94u) {
        ctx->pc = 0x1E8A94u;
            // 0x1e8a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A98u;
        goto label_1e8a98;
    }
    ctx->pc = 0x1E8A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8A98u);
        ctx->pc = 0x1E8A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A90u;
            // 0x1e8a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A98u; }
            if (ctx->pc != 0x1E8A98u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8A98u;
label_1e8a98:
    // 0x1e8a98: 0x1236002f  beq         $s1, $s6, . + 4 + (0x2F << 2)
label_1e8a9c:
    if (ctx->pc == 0x1E8A9Cu) {
        ctx->pc = 0x1E8A9Cu;
            // 0x1e8a9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AA0u;
        goto label_1e8aa0;
    }
    ctx->pc = 0x1E8A98u;
    {
        const bool branch_taken_0x1e8a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x1E8A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A98u;
            // 0x1e8a9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a98) {
            ctx->pc = 0x1E8B58u;
            goto label_1e8b58;
        }
    }
    ctx->pc = 0x1E8AA0u;
label_1e8aa0:
    // 0x1e8aa0: 0x17b940  sll         $s7, $s7, 5
    ctx->pc = 0x1e8aa0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_1e8aa4:
    // 0x1e8aa4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e8aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e8aa8:
    // 0x1e8aa8: 0x27a4051c  addiu       $a0, $sp, 0x51C
    ctx->pc = 0x1e8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
label_1e8aac:
    // 0x1e8aac: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x1e8aacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8ab0:
    // 0x1e8ab0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e8ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ab4:
    // 0x1e8ab4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e8ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ab8:
    // 0x1e8ab8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1e8ab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e8abc:
    // 0x1e8abc: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1e8abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e8ac0:
    // 0x1e8ac0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e8ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e8ac4:
    // 0x1e8ac4: 0x320f809  jalr        $t9
label_1e8ac8:
    if (ctx->pc == 0x1E8AC8u) {
        ctx->pc = 0x1E8AC8u;
            // 0x1e8ac8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8ACCu;
        goto label_1e8acc;
    }
    ctx->pc = 0x1E8AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8ACCu);
        ctx->pc = 0x1E8AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AC4u;
            // 0x1e8ac8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8ACCu; }
            if (ctx->pc != 0x1E8ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E8ACCu;
label_1e8acc:
    // 0x1e8acc: 0x27a3051c  addiu       $v1, $sp, 0x51C
    ctx->pc = 0x1e8accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
label_1e8ad0:
    // 0x1e8ad0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e8ad0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8ad4:
    // 0x1e8ad4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1e8ad8:
    if (ctx->pc == 0x1E8AD8u) {
        ctx->pc = 0x1E8ADCu;
        goto label_1e8adc;
    }
    ctx->pc = 0x1E8AD4u;
    {
        const bool branch_taken_0x1e8ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ad4) {
            ctx->pc = 0x1E8B48u;
            goto label_1e8b48;
        }
    }
    ctx->pc = 0x1E8ADCu;
label_1e8adc:
    // 0x1e8adc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e8adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8ae0:
    // 0x1e8ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8ae4:
    // 0x1e8ae4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8ae8:
    // 0x1e8ae8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e8aec:
    // 0x1e8aec: 0x320f809  jalr        $t9
label_1e8af0:
    if (ctx->pc == 0x1E8AF0u) {
        ctx->pc = 0x1E8AF0u;
            // 0x1e8af0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1E8AF4u;
        goto label_1e8af4;
    }
    ctx->pc = 0x1E8AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8AF4u);
        ctx->pc = 0x1E8AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AECu;
            // 0x1e8af0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8AF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AF4u; }
            if (ctx->pc != 0x1E8AF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8AF4u;
label_1e8af4:
    // 0x1e8af4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8af8:
    // 0x1e8af8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e8af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e8afc:
    // 0x1e8afc: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x1e8afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_1e8b00:
    // 0x1e8b00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e8b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e8b04:
    // 0x1e8b04: 0xafa302d4  sw          $v1, 0x2D4($sp)
    ctx->pc = 0x1e8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 3));
label_1e8b08:
    // 0x1e8b08: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x1e8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
label_1e8b0c:
    // 0x1e8b0c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e8b10:
    // 0x1e8b10: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e8b14:
    // 0x1e8b14: 0x2e81021  addu        $v0, $s7, $t0
    ctx->pc = 0x1e8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
label_1e8b18:
    // 0x1e8b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8b1c:
    // 0x1e8b1c: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1e8b1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1e8b20:
    // 0x1e8b20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e8b24:
    // 0x1e8b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8b28:
    // 0x1e8b28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e8b2c:
    // 0x1e8b2c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1e8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1e8b30:
    // 0x1e8b30: 0x8c4209a4  lw          $v0, 0x9A4($v0)
    ctx->pc = 0x1e8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2468)));
label_1e8b34:
    // 0x1e8b34: 0x40f809  jalr        $v0
label_1e8b38:
    if (ctx->pc == 0x1E8B38u) {
        ctx->pc = 0x1E8B38u;
            // 0x1e8b38: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B3Cu;
        goto label_1e8b3c;
    }
    ctx->pc = 0x1E8B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8B3Cu);
        ctx->pc = 0x1E8B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B34u;
            // 0x1e8b38: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8B3Cu; }
            if (ctx->pc != 0x1E8B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E8B3Cu;
label_1e8b3c:
    // 0x1e8b3c: 0x82430004  lb          $v1, 0x4($s2)
    ctx->pc = 0x1e8b3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_1e8b40:
    // 0x1e8b40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1e8b44:
    if (ctx->pc == 0x1E8B44u) {
        ctx->pc = 0x1E8B48u;
        goto label_1e8b48;
    }
    ctx->pc = 0x1E8B40u;
    {
        const bool branch_taken_0x1e8b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b40) {
            ctx->pc = 0x1E8B58u;
            goto label_1e8b58;
        }
    }
    ctx->pc = 0x1E8B48u;
label_1e8b48:
    // 0x1e8b48: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e8b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1e8b4c:
    // 0x1e8b4c: 0x5636ffd6  bnel        $s1, $s6, . + 4 + (-0x2A << 2)
label_1e8b50:
    if (ctx->pc == 0x1E8B50u) {
        ctx->pc = 0x1E8B50u;
            // 0x1e8b50: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1E8B54u;
        goto label_1e8b54;
    }
    ctx->pc = 0x1E8B4Cu;
    {
        const bool branch_taken_0x1e8b4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x1e8b4c) {
            ctx->pc = 0x1E8B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B4Cu;
            // 0x1e8b50: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e8aa8;
        }
    }
    ctx->pc = 0x1E8B54u;
label_1e8b54:
    // 0x1e8b54: 0x0  nop
    ctx->pc = 0x1e8b54u;
    // NOP
label_1e8b58:
    // 0x1e8b58: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e8b5c:
    // 0x1e8b5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e8b60:
    // 0x1e8b60: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1e8b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1e8b64:
    // 0x1e8b64: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e8b68:
    // 0x1e8b68: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e8b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e8b6c:
    // 0x1e8b6c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e8b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e8b70:
    // 0x1e8b70: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e8b74:
    if (ctx->pc == 0x1E8B74u) {
        ctx->pc = 0x1E8B74u;
            // 0x1e8b74: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E8B78u;
        goto label_1e8b78;
    }
    ctx->pc = 0x1E8B70u;
    {
        const bool branch_taken_0x1e8b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8B70u;
            // 0x1e8b74: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b70) {
            ctx->pc = 0x1E8BA0u;
            goto label_1e8ba0;
        }
    }
    ctx->pc = 0x1E8B78u;
label_1e8b78:
    // 0x1e8b78: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e8b7c:
    // 0x1e8b7c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e8b80:
    // 0x1e8b80: 0x2463aa58  addiu       $v1, $v1, -0x55A8
    ctx->pc = 0x1e8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945368));
label_1e8b84:
    // 0x1e8b84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e8b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e8b88:
    // 0x1e8b88: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e8b8c:
    // 0x1e8b8c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e8b90:
    // 0x1e8b90: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e8b94:
    // 0x1e8b94: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e8b98:
    // 0x1e8b98: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e8b9c:
    // 0x1e8b9c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e8ba0:
    // 0x1e8ba0: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x1e8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_1e8ba4:
    // 0x1e8ba4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1e8ba8:
    // 0x1e8ba8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e8ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e8bac:
    // 0x1e8bac: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_1e8bb0:
    if (ctx->pc == 0x1E8BB0u) {
        ctx->pc = 0x1E8BB0u;
            // 0x1e8bb0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x1E8BB4u;
        goto label_1e8bb4;
    }
    ctx->pc = 0x1E8BACu;
    {
        const bool branch_taken_0x1e8bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bac) {
            ctx->pc = 0x1E8BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BACu;
            // 0x1e8bb0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8BDCu;
            goto label_1e8bdc;
        }
    }
    ctx->pc = 0x1E8BB4u;
label_1e8bb4:
    // 0x1e8bb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8bb8:
    // 0x1e8bb8: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x1e8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_1e8bbc:
    // 0x1e8bbc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e8bc0:
    // 0x1e8bc0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e8bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e8bc4:
    // 0x1e8bc4: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x1e8bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_1e8bc8:
    // 0x1e8bc8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e8bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1e8bcc:
    // 0x1e8bcc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e8bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1e8bd0:
    // 0x1e8bd0: 0xc0a7ab4  jal         func_29EAD0
label_1e8bd4:
    if (ctx->pc == 0x1E8BD4u) {
        ctx->pc = 0x1E8BD4u;
            // 0x1e8bd4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E8BD8u;
        goto label_1e8bd8;
    }
    ctx->pc = 0x1E8BD0u;
    SET_GPR_U32(ctx, 31, 0x1E8BD8u);
    ctx->pc = 0x1E8BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BD0u;
            // 0x1e8bd4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BD8u; }
        if (ctx->pc != 0x1E8BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BD8u; }
        if (ctx->pc != 0x1E8BD8u) { return; }
    }
    ctx->pc = 0x1E8BD8u;
label_1e8bd8:
    // 0x1e8bd8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e8bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e8bdc:
    // 0x1e8bdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e8bdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e8be0:
    // 0x1e8be0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e8be0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e8be4:
    // 0x1e8be4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e8be4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8be8:
    // 0x1e8be8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e8be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8bec:
    // 0x1e8bec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8becu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8bf0:
    // 0x1e8bf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8bf4:
    // 0x1e8bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8bf8:
    // 0x1e8bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8bfc:
    // 0x1e8bfc: 0x3e00008  jr          $ra
label_1e8c00:
    if (ctx->pc == 0x1E8C00u) {
        ctx->pc = 0x1E8C00u;
            // 0x1e8c00: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->pc = 0x1E8C04u;
        goto label_1e8c04;
    }
    ctx->pc = 0x1E8BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8BFCu;
            // 0x1e8c00: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8C04u;
label_1e8c04:
    // 0x1e8c04: 0x0  nop
    ctx->pc = 0x1e8c04u;
    // NOP
label_1e8c08:
    // 0x1e8c08: 0x0  nop
    ctx->pc = 0x1e8c08u;
    // NOP
label_1e8c0c:
    // 0x1e8c0c: 0x0  nop
    ctx->pc = 0x1e8c0cu;
    // NOP
label_1e8c10:
    // 0x1e8c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e8c14:
    // 0x1e8c14: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e8c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e8c18:
    // 0x1e8c18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e8c1c:
    // 0x1e8c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8c20:
    // 0x1e8c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8c24:
    // 0x1e8c24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e8c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c28:
    // 0x1e8c28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e8c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c2c:
    // 0x1e8c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8c30:
    // 0x1e8c30: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e8c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8c34:
    // 0x1e8c34: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1e8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1e8c38:
    // 0x1e8c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c3c:
    // 0x1e8c3c: 0x24a5aa60  addiu       $a1, $a1, -0x55A0
    ctx->pc = 0x1e8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945376));
label_1e8c40:
    // 0x1e8c40: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1e8c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1e8c44:
    // 0x1e8c44: 0x320f809  jalr        $t9
label_1e8c48:
    if (ctx->pc == 0x1E8C48u) {
        ctx->pc = 0x1E8C48u;
            // 0x1e8c48: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C4Cu;
        goto label_1e8c4c;
    }
    ctx->pc = 0x1E8C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8C4Cu);
        ctx->pc = 0x1E8C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C44u;
            // 0x1e8c48: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C4Cu; }
            if (ctx->pc != 0x1E8C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E8C4Cu;
label_1e8c4c:
    // 0x1e8c4c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1e8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e8c50:
    // 0x1e8c50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1e8c54:
    // 0x1e8c54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e8c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e8c58:
    // 0x1e8c58: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
label_1e8c5c:
    if (ctx->pc == 0x1E8C5Cu) {
        ctx->pc = 0x1E8C5Cu;
            // 0x1e8c5c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x1E8C60u;
        goto label_1e8c60;
    }
    ctx->pc = 0x1E8C58u;
    {
        const bool branch_taken_0x1e8c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c58) {
            ctx->pc = 0x1E8C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C58u;
            // 0x1e8c5c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8CA8u;
            goto label_1e8ca8;
        }
    }
    ctx->pc = 0x1E8C60u;
label_1e8c60:
    // 0x1e8c60: 0x418bc  dsll32      $v1, $a0, 2
    ctx->pc = 0x1e8c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 2));
label_1e8c64:
    // 0x1e8c64: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e8c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8c68:
    // 0x1e8c68: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1e8c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_1e8c6c:
    // 0x1e8c6c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1e8c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1e8c70:
    // 0x1e8c70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e8c74:
    // 0x1e8c74: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x1e8c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e8c78:
    // 0x1e8c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8c7c:
    // 0x1e8c7c: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x1e8c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1e8c80:
    // 0x1e8c80: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x1e8c80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e8c84:
    // 0x1e8c84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e8c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e8c88:
    // 0x1e8c88: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1e8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1e8c8c:
    // 0x1e8c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c90:
    // 0x1e8c90: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e8c94:
    // 0x1e8c94: 0x24a5aa70  addiu       $a1, $a1, -0x5590
    ctx->pc = 0x1e8c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945392));
label_1e8c98:
    // 0x1e8c98: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e8c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e8c9c:
    // 0x1e8c9c: 0x320f809  jalr        $t9
label_1e8ca0:
    if (ctx->pc == 0x1E8CA0u) {
        ctx->pc = 0x1E8CA0u;
            // 0x1e8ca0: 0x24080  sll         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E8CA4u;
        goto label_1e8ca4;
    }
    ctx->pc = 0x1E8C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8CA4u);
        ctx->pc = 0x1E8CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8C9Cu;
            // 0x1e8ca0: 0x24080  sll         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8CA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CA4u; }
            if (ctx->pc != 0x1E8CA4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8CA4u;
label_1e8ca4:
    // 0x1e8ca4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1e8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e8ca8:
    // 0x1e8ca8: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x1e8ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1e8cac:
    // 0x1e8cac: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1e8cb0:
    // 0x1e8cb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e8cb4:
    // 0x1e8cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e8cb8:
    // 0x1e8cb8: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x1e8cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1e8cbc:
    // 0x1e8cbc: 0x12120010  beq         $s0, $s2, . + 4 + (0x10 << 2)
label_1e8cc0:
    if (ctx->pc == 0x1E8CC0u) {
        ctx->pc = 0x1E8CC4u;
        goto label_1e8cc4;
    }
    ctx->pc = 0x1E8CBCu;
    {
        const bool branch_taken_0x1e8cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x1e8cbc) {
            ctx->pc = 0x1E8D00u;
            goto label_1e8d00;
        }
    }
    ctx->pc = 0x1E8CC4u;
label_1e8cc4:
    // 0x1e8cc4: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1e8cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e8cc8:
    // 0x1e8cc8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_1e8ccc:
    if (ctx->pc == 0x1E8CCCu) {
        ctx->pc = 0x1E8CD0u;
        goto label_1e8cd0;
    }
    ctx->pc = 0x1E8CC8u;
    {
        const bool branch_taken_0x1e8cc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cc8) {
            ctx->pc = 0x1E8CF0u;
            goto label_1e8cf0;
        }
    }
    ctx->pc = 0x1E8CD0u;
label_1e8cd0:
    // 0x1e8cd0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e8cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8cd4:
    // 0x1e8cd4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1e8cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1e8cd8:
    // 0x1e8cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8cdc:
    // 0x1e8cdc: 0x24a5aa80  addiu       $a1, $a1, -0x5580
    ctx->pc = 0x1e8cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945408));
label_1e8ce0:
    // 0x1e8ce0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e8ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e8ce4:
    // 0x1e8ce4: 0x320f809  jalr        $t9
label_1e8ce8:
    if (ctx->pc == 0x1E8CE8u) {
        ctx->pc = 0x1E8CE8u;
            // 0x1e8ce8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1E8CECu;
        goto label_1e8cec;
    }
    ctx->pc = 0x1E8CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8CECu);
        ctx->pc = 0x1E8CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CE4u;
            // 0x1e8ce8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8CECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CECu; }
            if (ctx->pc != 0x1E8CECu) { return; }
        }
        }
    }
    ctx->pc = 0x1E8CECu;
label_1e8cec:
    // 0x1e8cec: 0x0  nop
    ctx->pc = 0x1e8cecu;
    // NOP
label_1e8cf0:
    // 0x1e8cf0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1e8cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1e8cf4:
    // 0x1e8cf4: 0x5612fff4  bnel        $s0, $s2, . + 4 + (-0xC << 2)
label_1e8cf8:
    if (ctx->pc == 0x1E8CF8u) {
        ctx->pc = 0x1E8CF8u;
            // 0x1e8cf8: 0x8e070008  lw          $a3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1E8CFCu;
        goto label_1e8cfc;
    }
    ctx->pc = 0x1E8CF4u;
    {
        const bool branch_taken_0x1e8cf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x1e8cf4) {
            ctx->pc = 0x1E8CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8CF4u;
            // 0x1e8cf8: 0x8e070008  lw          $a3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e8cc8;
        }
    }
    ctx->pc = 0x1E8CFCu;
label_1e8cfc:
    // 0x1e8cfc: 0x0  nop
    ctx->pc = 0x1e8cfcu;
    // NOP
label_1e8d00:
    // 0x1e8d00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e8d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8d04:
    // 0x1e8d04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8d08:
    // 0x1e8d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8d0c:
    // 0x1e8d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8d10:
    // 0x1e8d10: 0x3e00008  jr          $ra
label_1e8d14:
    if (ctx->pc == 0x1E8D14u) {
        ctx->pc = 0x1E8D14u;
            // 0x1e8d14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E8D18u;
        goto label_1e8d18;
    }
    ctx->pc = 0x1E8D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8D10u;
            // 0x1e8d14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8D18u;
label_1e8d18:
    // 0x1e8d18: 0x0  nop
    ctx->pc = 0x1e8d18u;
    // NOP
label_1e8d1c:
    // 0x1e8d1c: 0x0  nop
    ctx->pc = 0x1e8d1cu;
    // NOP
}
