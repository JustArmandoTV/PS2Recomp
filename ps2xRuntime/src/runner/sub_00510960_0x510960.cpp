#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510960
// Address: 0x510960 - 0x510eb0
void sub_00510960_0x510960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510960_0x510960");
#endif

    switch (ctx->pc) {
        case 0x510960u: goto label_510960;
        case 0x510964u: goto label_510964;
        case 0x510968u: goto label_510968;
        case 0x51096cu: goto label_51096c;
        case 0x510970u: goto label_510970;
        case 0x510974u: goto label_510974;
        case 0x510978u: goto label_510978;
        case 0x51097cu: goto label_51097c;
        case 0x510980u: goto label_510980;
        case 0x510984u: goto label_510984;
        case 0x510988u: goto label_510988;
        case 0x51098cu: goto label_51098c;
        case 0x510990u: goto label_510990;
        case 0x510994u: goto label_510994;
        case 0x510998u: goto label_510998;
        case 0x51099cu: goto label_51099c;
        case 0x5109a0u: goto label_5109a0;
        case 0x5109a4u: goto label_5109a4;
        case 0x5109a8u: goto label_5109a8;
        case 0x5109acu: goto label_5109ac;
        case 0x5109b0u: goto label_5109b0;
        case 0x5109b4u: goto label_5109b4;
        case 0x5109b8u: goto label_5109b8;
        case 0x5109bcu: goto label_5109bc;
        case 0x5109c0u: goto label_5109c0;
        case 0x5109c4u: goto label_5109c4;
        case 0x5109c8u: goto label_5109c8;
        case 0x5109ccu: goto label_5109cc;
        case 0x5109d0u: goto label_5109d0;
        case 0x5109d4u: goto label_5109d4;
        case 0x5109d8u: goto label_5109d8;
        case 0x5109dcu: goto label_5109dc;
        case 0x5109e0u: goto label_5109e0;
        case 0x5109e4u: goto label_5109e4;
        case 0x5109e8u: goto label_5109e8;
        case 0x5109ecu: goto label_5109ec;
        case 0x5109f0u: goto label_5109f0;
        case 0x5109f4u: goto label_5109f4;
        case 0x5109f8u: goto label_5109f8;
        case 0x5109fcu: goto label_5109fc;
        case 0x510a00u: goto label_510a00;
        case 0x510a04u: goto label_510a04;
        case 0x510a08u: goto label_510a08;
        case 0x510a0cu: goto label_510a0c;
        case 0x510a10u: goto label_510a10;
        case 0x510a14u: goto label_510a14;
        case 0x510a18u: goto label_510a18;
        case 0x510a1cu: goto label_510a1c;
        case 0x510a20u: goto label_510a20;
        case 0x510a24u: goto label_510a24;
        case 0x510a28u: goto label_510a28;
        case 0x510a2cu: goto label_510a2c;
        case 0x510a30u: goto label_510a30;
        case 0x510a34u: goto label_510a34;
        case 0x510a38u: goto label_510a38;
        case 0x510a3cu: goto label_510a3c;
        case 0x510a40u: goto label_510a40;
        case 0x510a44u: goto label_510a44;
        case 0x510a48u: goto label_510a48;
        case 0x510a4cu: goto label_510a4c;
        case 0x510a50u: goto label_510a50;
        case 0x510a54u: goto label_510a54;
        case 0x510a58u: goto label_510a58;
        case 0x510a5cu: goto label_510a5c;
        case 0x510a60u: goto label_510a60;
        case 0x510a64u: goto label_510a64;
        case 0x510a68u: goto label_510a68;
        case 0x510a6cu: goto label_510a6c;
        case 0x510a70u: goto label_510a70;
        case 0x510a74u: goto label_510a74;
        case 0x510a78u: goto label_510a78;
        case 0x510a7cu: goto label_510a7c;
        case 0x510a80u: goto label_510a80;
        case 0x510a84u: goto label_510a84;
        case 0x510a88u: goto label_510a88;
        case 0x510a8cu: goto label_510a8c;
        case 0x510a90u: goto label_510a90;
        case 0x510a94u: goto label_510a94;
        case 0x510a98u: goto label_510a98;
        case 0x510a9cu: goto label_510a9c;
        case 0x510aa0u: goto label_510aa0;
        case 0x510aa4u: goto label_510aa4;
        case 0x510aa8u: goto label_510aa8;
        case 0x510aacu: goto label_510aac;
        case 0x510ab0u: goto label_510ab0;
        case 0x510ab4u: goto label_510ab4;
        case 0x510ab8u: goto label_510ab8;
        case 0x510abcu: goto label_510abc;
        case 0x510ac0u: goto label_510ac0;
        case 0x510ac4u: goto label_510ac4;
        case 0x510ac8u: goto label_510ac8;
        case 0x510accu: goto label_510acc;
        case 0x510ad0u: goto label_510ad0;
        case 0x510ad4u: goto label_510ad4;
        case 0x510ad8u: goto label_510ad8;
        case 0x510adcu: goto label_510adc;
        case 0x510ae0u: goto label_510ae0;
        case 0x510ae4u: goto label_510ae4;
        case 0x510ae8u: goto label_510ae8;
        case 0x510aecu: goto label_510aec;
        case 0x510af0u: goto label_510af0;
        case 0x510af4u: goto label_510af4;
        case 0x510af8u: goto label_510af8;
        case 0x510afcu: goto label_510afc;
        case 0x510b00u: goto label_510b00;
        case 0x510b04u: goto label_510b04;
        case 0x510b08u: goto label_510b08;
        case 0x510b0cu: goto label_510b0c;
        case 0x510b10u: goto label_510b10;
        case 0x510b14u: goto label_510b14;
        case 0x510b18u: goto label_510b18;
        case 0x510b1cu: goto label_510b1c;
        case 0x510b20u: goto label_510b20;
        case 0x510b24u: goto label_510b24;
        case 0x510b28u: goto label_510b28;
        case 0x510b2cu: goto label_510b2c;
        case 0x510b30u: goto label_510b30;
        case 0x510b34u: goto label_510b34;
        case 0x510b38u: goto label_510b38;
        case 0x510b3cu: goto label_510b3c;
        case 0x510b40u: goto label_510b40;
        case 0x510b44u: goto label_510b44;
        case 0x510b48u: goto label_510b48;
        case 0x510b4cu: goto label_510b4c;
        case 0x510b50u: goto label_510b50;
        case 0x510b54u: goto label_510b54;
        case 0x510b58u: goto label_510b58;
        case 0x510b5cu: goto label_510b5c;
        case 0x510b60u: goto label_510b60;
        case 0x510b64u: goto label_510b64;
        case 0x510b68u: goto label_510b68;
        case 0x510b6cu: goto label_510b6c;
        case 0x510b70u: goto label_510b70;
        case 0x510b74u: goto label_510b74;
        case 0x510b78u: goto label_510b78;
        case 0x510b7cu: goto label_510b7c;
        case 0x510b80u: goto label_510b80;
        case 0x510b84u: goto label_510b84;
        case 0x510b88u: goto label_510b88;
        case 0x510b8cu: goto label_510b8c;
        case 0x510b90u: goto label_510b90;
        case 0x510b94u: goto label_510b94;
        case 0x510b98u: goto label_510b98;
        case 0x510b9cu: goto label_510b9c;
        case 0x510ba0u: goto label_510ba0;
        case 0x510ba4u: goto label_510ba4;
        case 0x510ba8u: goto label_510ba8;
        case 0x510bacu: goto label_510bac;
        case 0x510bb0u: goto label_510bb0;
        case 0x510bb4u: goto label_510bb4;
        case 0x510bb8u: goto label_510bb8;
        case 0x510bbcu: goto label_510bbc;
        case 0x510bc0u: goto label_510bc0;
        case 0x510bc4u: goto label_510bc4;
        case 0x510bc8u: goto label_510bc8;
        case 0x510bccu: goto label_510bcc;
        case 0x510bd0u: goto label_510bd0;
        case 0x510bd4u: goto label_510bd4;
        case 0x510bd8u: goto label_510bd8;
        case 0x510bdcu: goto label_510bdc;
        case 0x510be0u: goto label_510be0;
        case 0x510be4u: goto label_510be4;
        case 0x510be8u: goto label_510be8;
        case 0x510becu: goto label_510bec;
        case 0x510bf0u: goto label_510bf0;
        case 0x510bf4u: goto label_510bf4;
        case 0x510bf8u: goto label_510bf8;
        case 0x510bfcu: goto label_510bfc;
        case 0x510c00u: goto label_510c00;
        case 0x510c04u: goto label_510c04;
        case 0x510c08u: goto label_510c08;
        case 0x510c0cu: goto label_510c0c;
        case 0x510c10u: goto label_510c10;
        case 0x510c14u: goto label_510c14;
        case 0x510c18u: goto label_510c18;
        case 0x510c1cu: goto label_510c1c;
        case 0x510c20u: goto label_510c20;
        case 0x510c24u: goto label_510c24;
        case 0x510c28u: goto label_510c28;
        case 0x510c2cu: goto label_510c2c;
        case 0x510c30u: goto label_510c30;
        case 0x510c34u: goto label_510c34;
        case 0x510c38u: goto label_510c38;
        case 0x510c3cu: goto label_510c3c;
        case 0x510c40u: goto label_510c40;
        case 0x510c44u: goto label_510c44;
        case 0x510c48u: goto label_510c48;
        case 0x510c4cu: goto label_510c4c;
        case 0x510c50u: goto label_510c50;
        case 0x510c54u: goto label_510c54;
        case 0x510c58u: goto label_510c58;
        case 0x510c5cu: goto label_510c5c;
        case 0x510c60u: goto label_510c60;
        case 0x510c64u: goto label_510c64;
        case 0x510c68u: goto label_510c68;
        case 0x510c6cu: goto label_510c6c;
        case 0x510c70u: goto label_510c70;
        case 0x510c74u: goto label_510c74;
        case 0x510c78u: goto label_510c78;
        case 0x510c7cu: goto label_510c7c;
        case 0x510c80u: goto label_510c80;
        case 0x510c84u: goto label_510c84;
        case 0x510c88u: goto label_510c88;
        case 0x510c8cu: goto label_510c8c;
        case 0x510c90u: goto label_510c90;
        case 0x510c94u: goto label_510c94;
        case 0x510c98u: goto label_510c98;
        case 0x510c9cu: goto label_510c9c;
        case 0x510ca0u: goto label_510ca0;
        case 0x510ca4u: goto label_510ca4;
        case 0x510ca8u: goto label_510ca8;
        case 0x510cacu: goto label_510cac;
        case 0x510cb0u: goto label_510cb0;
        case 0x510cb4u: goto label_510cb4;
        case 0x510cb8u: goto label_510cb8;
        case 0x510cbcu: goto label_510cbc;
        case 0x510cc0u: goto label_510cc0;
        case 0x510cc4u: goto label_510cc4;
        case 0x510cc8u: goto label_510cc8;
        case 0x510cccu: goto label_510ccc;
        case 0x510cd0u: goto label_510cd0;
        case 0x510cd4u: goto label_510cd4;
        case 0x510cd8u: goto label_510cd8;
        case 0x510cdcu: goto label_510cdc;
        case 0x510ce0u: goto label_510ce0;
        case 0x510ce4u: goto label_510ce4;
        case 0x510ce8u: goto label_510ce8;
        case 0x510cecu: goto label_510cec;
        case 0x510cf0u: goto label_510cf0;
        case 0x510cf4u: goto label_510cf4;
        case 0x510cf8u: goto label_510cf8;
        case 0x510cfcu: goto label_510cfc;
        case 0x510d00u: goto label_510d00;
        case 0x510d04u: goto label_510d04;
        case 0x510d08u: goto label_510d08;
        case 0x510d0cu: goto label_510d0c;
        case 0x510d10u: goto label_510d10;
        case 0x510d14u: goto label_510d14;
        case 0x510d18u: goto label_510d18;
        case 0x510d1cu: goto label_510d1c;
        case 0x510d20u: goto label_510d20;
        case 0x510d24u: goto label_510d24;
        case 0x510d28u: goto label_510d28;
        case 0x510d2cu: goto label_510d2c;
        case 0x510d30u: goto label_510d30;
        case 0x510d34u: goto label_510d34;
        case 0x510d38u: goto label_510d38;
        case 0x510d3cu: goto label_510d3c;
        case 0x510d40u: goto label_510d40;
        case 0x510d44u: goto label_510d44;
        case 0x510d48u: goto label_510d48;
        case 0x510d4cu: goto label_510d4c;
        case 0x510d50u: goto label_510d50;
        case 0x510d54u: goto label_510d54;
        case 0x510d58u: goto label_510d58;
        case 0x510d5cu: goto label_510d5c;
        case 0x510d60u: goto label_510d60;
        case 0x510d64u: goto label_510d64;
        case 0x510d68u: goto label_510d68;
        case 0x510d6cu: goto label_510d6c;
        case 0x510d70u: goto label_510d70;
        case 0x510d74u: goto label_510d74;
        case 0x510d78u: goto label_510d78;
        case 0x510d7cu: goto label_510d7c;
        case 0x510d80u: goto label_510d80;
        case 0x510d84u: goto label_510d84;
        case 0x510d88u: goto label_510d88;
        case 0x510d8cu: goto label_510d8c;
        case 0x510d90u: goto label_510d90;
        case 0x510d94u: goto label_510d94;
        case 0x510d98u: goto label_510d98;
        case 0x510d9cu: goto label_510d9c;
        case 0x510da0u: goto label_510da0;
        case 0x510da4u: goto label_510da4;
        case 0x510da8u: goto label_510da8;
        case 0x510dacu: goto label_510dac;
        case 0x510db0u: goto label_510db0;
        case 0x510db4u: goto label_510db4;
        case 0x510db8u: goto label_510db8;
        case 0x510dbcu: goto label_510dbc;
        case 0x510dc0u: goto label_510dc0;
        case 0x510dc4u: goto label_510dc4;
        case 0x510dc8u: goto label_510dc8;
        case 0x510dccu: goto label_510dcc;
        case 0x510dd0u: goto label_510dd0;
        case 0x510dd4u: goto label_510dd4;
        case 0x510dd8u: goto label_510dd8;
        case 0x510ddcu: goto label_510ddc;
        case 0x510de0u: goto label_510de0;
        case 0x510de4u: goto label_510de4;
        case 0x510de8u: goto label_510de8;
        case 0x510decu: goto label_510dec;
        case 0x510df0u: goto label_510df0;
        case 0x510df4u: goto label_510df4;
        case 0x510df8u: goto label_510df8;
        case 0x510dfcu: goto label_510dfc;
        case 0x510e00u: goto label_510e00;
        case 0x510e04u: goto label_510e04;
        case 0x510e08u: goto label_510e08;
        case 0x510e0cu: goto label_510e0c;
        case 0x510e10u: goto label_510e10;
        case 0x510e14u: goto label_510e14;
        case 0x510e18u: goto label_510e18;
        case 0x510e1cu: goto label_510e1c;
        case 0x510e20u: goto label_510e20;
        case 0x510e24u: goto label_510e24;
        case 0x510e28u: goto label_510e28;
        case 0x510e2cu: goto label_510e2c;
        case 0x510e30u: goto label_510e30;
        case 0x510e34u: goto label_510e34;
        case 0x510e38u: goto label_510e38;
        case 0x510e3cu: goto label_510e3c;
        case 0x510e40u: goto label_510e40;
        case 0x510e44u: goto label_510e44;
        case 0x510e48u: goto label_510e48;
        case 0x510e4cu: goto label_510e4c;
        case 0x510e50u: goto label_510e50;
        case 0x510e54u: goto label_510e54;
        case 0x510e58u: goto label_510e58;
        case 0x510e5cu: goto label_510e5c;
        case 0x510e60u: goto label_510e60;
        case 0x510e64u: goto label_510e64;
        case 0x510e68u: goto label_510e68;
        case 0x510e6cu: goto label_510e6c;
        case 0x510e70u: goto label_510e70;
        case 0x510e74u: goto label_510e74;
        case 0x510e78u: goto label_510e78;
        case 0x510e7cu: goto label_510e7c;
        case 0x510e80u: goto label_510e80;
        case 0x510e84u: goto label_510e84;
        case 0x510e88u: goto label_510e88;
        case 0x510e8cu: goto label_510e8c;
        case 0x510e90u: goto label_510e90;
        case 0x510e94u: goto label_510e94;
        case 0x510e98u: goto label_510e98;
        case 0x510e9cu: goto label_510e9c;
        case 0x510ea0u: goto label_510ea0;
        case 0x510ea4u: goto label_510ea4;
        case 0x510ea8u: goto label_510ea8;
        case 0x510eacu: goto label_510eac;
        default: break;
    }

    ctx->pc = 0x510960u;

label_510960:
    // 0x510960: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x510960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_510964:
    // 0x510964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x510964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_510968:
    // 0x510968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x510968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_51096c:
    // 0x51096c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_510970:
    // 0x510970: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x510970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_510974:
    // 0x510974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x510974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_510978:
    // 0x510978: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x510978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_51097c:
    // 0x51097c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_510980:
    // 0x510980: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x510980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_510984:
    // 0x510984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x510984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_510988:
    // 0x510988: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x510988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51098c:
    // 0x51098c: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x51098cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_510990:
    // 0x510990: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_510994:
    if (ctx->pc == 0x510994u) {
        ctx->pc = 0x510994u;
            // 0x510994: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510998u;
        goto label_510998;
    }
    ctx->pc = 0x510990u;
    {
        const bool branch_taken_0x510990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x510994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510990u;
            // 0x510994: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510990) {
            ctx->pc = 0x510BD0u;
            goto label_510bd0;
        }
    }
    ctx->pc = 0x510998u;
label_510998:
    // 0x510998: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x510998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_51099c:
    // 0x51099c: 0x5060008d  beql        $v1, $zero, . + 4 + (0x8D << 2)
label_5109a0:
    if (ctx->pc == 0x5109A0u) {
        ctx->pc = 0x5109A0u;
            // 0x5109a0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x5109A4u;
        goto label_5109a4;
    }
    ctx->pc = 0x51099Cu;
    {
        const bool branch_taken_0x51099c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51099c) {
            ctx->pc = 0x5109A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51099Cu;
            // 0x5109a0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x510BD4u;
            goto label_510bd4;
        }
    }
    ctx->pc = 0x5109A4u;
label_5109a4:
    // 0x5109a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5109a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5109a8:
    // 0x5109a8: 0xc04f278  jal         func_13C9E0
label_5109ac:
    if (ctx->pc == 0x5109ACu) {
        ctx->pc = 0x5109ACu;
            // 0x5109ac: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x5109B0u;
        goto label_5109b0;
    }
    ctx->pc = 0x5109A8u;
    SET_GPR_U32(ctx, 31, 0x5109B0u);
    ctx->pc = 0x5109ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5109A8u;
            // 0x5109ac: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109B0u; }
        if (ctx->pc != 0x5109B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109B0u; }
        if (ctx->pc != 0x5109B0u) { return; }
    }
    ctx->pc = 0x5109B0u;
label_5109b0:
    // 0x5109b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5109b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5109b4:
    // 0x5109b4: 0xc04ce80  jal         func_133A00
label_5109b8:
    if (ctx->pc == 0x5109B8u) {
        ctx->pc = 0x5109B8u;
            // 0x5109b8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x5109BCu;
        goto label_5109bc;
    }
    ctx->pc = 0x5109B4u;
    SET_GPR_U32(ctx, 31, 0x5109BCu);
    ctx->pc = 0x5109B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5109B4u;
            // 0x5109b8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109BCu; }
        if (ctx->pc != 0x5109BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109BCu; }
        if (ctx->pc != 0x5109BCu) { return; }
    }
    ctx->pc = 0x5109BCu;
label_5109bc:
    // 0x5109bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5109bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5109c0:
    // 0x5109c0: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x5109c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_5109c4:
    // 0x5109c4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x5109c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_5109c8:
    // 0x5109c8: 0xc07698c  jal         func_1DA630
label_5109cc:
    if (ctx->pc == 0x5109CCu) {
        ctx->pc = 0x5109CCu;
            // 0x5109cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5109D0u;
        goto label_5109d0;
    }
    ctx->pc = 0x5109C8u;
    SET_GPR_U32(ctx, 31, 0x5109D0u);
    ctx->pc = 0x5109CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5109C8u;
            // 0x5109cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109D0u; }
        if (ctx->pc != 0x5109D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109D0u; }
        if (ctx->pc != 0x5109D0u) { return; }
    }
    ctx->pc = 0x5109D0u;
label_5109d0:
    // 0x5109d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5109d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5109d4:
    // 0x5109d4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_5109d8:
    if (ctx->pc == 0x5109D8u) {
        ctx->pc = 0x5109DCu;
        goto label_5109dc;
    }
    ctx->pc = 0x5109D4u;
    {
        const bool branch_taken_0x5109d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x5109d4) {
            ctx->pc = 0x5109E4u;
            goto label_5109e4;
        }
    }
    ctx->pc = 0x5109DCu;
label_5109dc:
    // 0x5109dc: 0x10000033  b           . + 4 + (0x33 << 2)
label_5109e0:
    if (ctx->pc == 0x5109E0u) {
        ctx->pc = 0x5109E0u;
            // 0x5109e0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5109E4u;
        goto label_5109e4;
    }
    ctx->pc = 0x5109DCu;
    {
        const bool branch_taken_0x5109dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5109E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5109DCu;
            // 0x5109e0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5109dc) {
            ctx->pc = 0x510AACu;
            goto label_510aac;
        }
    }
    ctx->pc = 0x5109E4u;
label_5109e4:
    // 0x5109e4: 0xc0576f4  jal         func_15DBD0
label_5109e8:
    if (ctx->pc == 0x5109E8u) {
        ctx->pc = 0x5109ECu;
        goto label_5109ec;
    }
    ctx->pc = 0x5109E4u;
    SET_GPR_U32(ctx, 31, 0x5109ECu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109ECu; }
        if (ctx->pc != 0x5109ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109ECu; }
        if (ctx->pc != 0x5109ECu) { return; }
    }
    ctx->pc = 0x5109ECu;
label_5109ec:
    // 0x5109ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5109ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5109f0:
    // 0x5109f0: 0xc076984  jal         func_1DA610
label_5109f4:
    if (ctx->pc == 0x5109F4u) {
        ctx->pc = 0x5109F4u;
            // 0x5109f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5109F8u;
        goto label_5109f8;
    }
    ctx->pc = 0x5109F0u;
    SET_GPR_U32(ctx, 31, 0x5109F8u);
    ctx->pc = 0x5109F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5109F0u;
            // 0x5109f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109F8u; }
        if (ctx->pc != 0x5109F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5109F8u; }
        if (ctx->pc != 0x5109F8u) { return; }
    }
    ctx->pc = 0x5109F8u;
label_5109f8:
    // 0x5109f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x5109f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5109fc:
    // 0x5109fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x5109fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_510a00:
    // 0x510a00: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x510a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_510a04:
    // 0x510a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x510a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_510a08:
    // 0x510a08: 0xc442cdd0  lwc1        $f2, -0x3230($v0)
    ctx->pc = 0x510a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_510a0c:
    // 0x510a0c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x510a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_510a10:
    // 0x510a10: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x510a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_510a14:
    // 0x510a14: 0xc441cdd8  lwc1        $f1, -0x3228($v0)
    ctx->pc = 0x510a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_510a18:
    // 0x510a18: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x510a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_510a1c:
    // 0x510a1c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x510a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_510a20:
    // 0x510a20: 0xc440cddc  lwc1        $f0, -0x3224($v0)
    ctx->pc = 0x510a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_510a24:
    // 0x510a24: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x510a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_510a28:
    // 0x510a28: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x510a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_510a2c:
    // 0x510a2c: 0x8c42cdd4  lw          $v0, -0x322C($v0)
    ctx->pc = 0x510a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954452)));
label_510a30:
    // 0x510a30: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x510a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_510a34:
    // 0x510a34: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x510a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_510a38:
    // 0x510a38: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x510a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_510a3c:
    // 0x510a3c: 0xc04cca0  jal         func_133280
label_510a40:
    if (ctx->pc == 0x510A40u) {
        ctx->pc = 0x510A40u;
            // 0x510a40: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x510A44u;
        goto label_510a44;
    }
    ctx->pc = 0x510A3Cu;
    SET_GPR_U32(ctx, 31, 0x510A44u);
    ctx->pc = 0x510A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510A3Cu;
            // 0x510a40: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A44u; }
        if (ctx->pc != 0x510A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A44u; }
        if (ctx->pc != 0x510A44u) { return; }
    }
    ctx->pc = 0x510A44u;
label_510a44:
    // 0x510a44: 0xc076980  jal         func_1DA600
label_510a48:
    if (ctx->pc == 0x510A48u) {
        ctx->pc = 0x510A48u;
            // 0x510a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510A4Cu;
        goto label_510a4c;
    }
    ctx->pc = 0x510A44u;
    SET_GPR_U32(ctx, 31, 0x510A4Cu);
    ctx->pc = 0x510A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510A44u;
            // 0x510a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A4Cu; }
        if (ctx->pc != 0x510A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A4Cu; }
        if (ctx->pc != 0x510A4Cu) { return; }
    }
    ctx->pc = 0x510A4Cu;
label_510a4c:
    // 0x510a4c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x510a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_510a50:
    // 0x510a50: 0xc04cc34  jal         func_1330D0
label_510a54:
    if (ctx->pc == 0x510A54u) {
        ctx->pc = 0x510A54u;
            // 0x510a54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510A58u;
        goto label_510a58;
    }
    ctx->pc = 0x510A50u;
    SET_GPR_U32(ctx, 31, 0x510A58u);
    ctx->pc = 0x510A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510A50u;
            // 0x510a54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A58u; }
        if (ctx->pc != 0x510A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A58u; }
        if (ctx->pc != 0x510A58u) { return; }
    }
    ctx->pc = 0x510A58u;
label_510a58:
    // 0x510a58: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x510a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_510a5c:
    // 0x510a5c: 0xc461b710  lwc1        $f1, -0x48F0($v1)
    ctx->pc = 0x510a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_510a60:
    // 0x510a60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x510a60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_510a64:
    // 0x510a64: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_510a68:
    if (ctx->pc == 0x510A68u) {
        ctx->pc = 0x510A68u;
            // 0x510a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510A6Cu;
        goto label_510a6c;
    }
    ctx->pc = 0x510A64u;
    {
        const bool branch_taken_0x510a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x510a64) {
            ctx->pc = 0x510A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510A64u;
            // 0x510a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x510A74u;
            goto label_510a74;
        }
    }
    ctx->pc = 0x510A6Cu;
label_510a6c:
    // 0x510a6c: 0x1000000f  b           . + 4 + (0xF << 2)
label_510a70:
    if (ctx->pc == 0x510A70u) {
        ctx->pc = 0x510A70u;
            // 0x510a70: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x510A74u;
        goto label_510a74;
    }
    ctx->pc = 0x510A6Cu;
    {
        const bool branch_taken_0x510a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510A6Cu;
            // 0x510a70: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510a6c) {
            ctx->pc = 0x510AACu;
            goto label_510aac;
        }
    }
    ctx->pc = 0x510A74u;
label_510a74:
    // 0x510a74: 0xc07697c  jal         func_1DA5F0
label_510a78:
    if (ctx->pc == 0x510A78u) {
        ctx->pc = 0x510A7Cu;
        goto label_510a7c;
    }
    ctx->pc = 0x510A74u;
    SET_GPR_U32(ctx, 31, 0x510A7Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A7Cu; }
        if (ctx->pc != 0x510A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A7Cu; }
        if (ctx->pc != 0x510A7Cu) { return; }
    }
    ctx->pc = 0x510A7Cu;
label_510a7c:
    // 0x510a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x510a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_510a80:
    // 0x510a80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x510a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_510a84:
    // 0x510a84: 0xc04cd60  jal         func_133580
label_510a88:
    if (ctx->pc == 0x510A88u) {
        ctx->pc = 0x510A88u;
            // 0x510a88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510A8Cu;
        goto label_510a8c;
    }
    ctx->pc = 0x510A84u;
    SET_GPR_U32(ctx, 31, 0x510A8Cu);
    ctx->pc = 0x510A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510A84u;
            // 0x510a88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A8Cu; }
        if (ctx->pc != 0x510A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A8Cu; }
        if (ctx->pc != 0x510A8Cu) { return; }
    }
    ctx->pc = 0x510A8Cu;
label_510a8c:
    // 0x510a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x510a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510a90:
    // 0x510a90: 0xc04c650  jal         func_131940
label_510a94:
    if (ctx->pc == 0x510A94u) {
        ctx->pc = 0x510A94u;
            // 0x510a94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x510A98u;
        goto label_510a98;
    }
    ctx->pc = 0x510A90u;
    SET_GPR_U32(ctx, 31, 0x510A98u);
    ctx->pc = 0x510A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510A90u;
            // 0x510a94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A98u; }
        if (ctx->pc != 0x510A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510A98u; }
        if (ctx->pc != 0x510A98u) { return; }
    }
    ctx->pc = 0x510A98u;
label_510a98:
    // 0x510a98: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x510a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_510a9c:
    // 0x510a9c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x510a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_510aa0:
    // 0x510aa0: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x510aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_510aa4:
    // 0x510aa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x510aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_510aa8:
    // 0x510aa8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x510aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_510aac:
    // 0x510aac: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x510aacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_510ab0:
    // 0x510ab0: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
label_510ab4:
    if (ctx->pc == 0x510AB4u) {
        ctx->pc = 0x510AB4u;
            // 0x510ab4: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x510AB8u;
        goto label_510ab8;
    }
    ctx->pc = 0x510AB0u;
    {
        const bool branch_taken_0x510ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x510AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510AB0u;
            // 0x510ab4: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510ab0) {
            ctx->pc = 0x510BD0u;
            goto label_510bd0;
        }
    }
    ctx->pc = 0x510AB8u;
label_510ab8:
    // 0x510ab8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x510ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_510abc:
    // 0x510abc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x510abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_510ac0:
    // 0x510ac0: 0x8c46e3c0  lw          $a2, -0x1C40($v0)
    ctx->pc = 0x510ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_510ac4:
    // 0x510ac4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x510ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_510ac8:
    // 0x510ac8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x510ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_510acc:
    // 0x510acc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x510accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_510ad0:
    // 0x510ad0: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x510ad0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_510ad4:
    // 0x510ad4: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x510ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_510ad8:
    // 0x510ad8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x510ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_510adc:
    // 0x510adc: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x510adcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_510ae0:
    // 0x510ae0: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x510ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_510ae4:
    // 0x510ae4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x510ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_510ae8:
    // 0x510ae8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x510ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_510aec:
    // 0x510aec: 0x66a021  addu        $s4, $v1, $a2
    ctx->pc = 0x510aecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_510af0:
    // 0x510af0: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x510af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_510af4:
    // 0x510af4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x510af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_510af8:
    // 0x510af8: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x510af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_510afc:
    // 0x510afc: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x510afcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
label_510b00:
    // 0x510b00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x510b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_510b04:
    // 0x510b04: 0x8c84e3d8  lw          $a0, -0x1C28($a0)
    ctx->pc = 0x510b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_510b08:
    // 0x510b08: 0x8c49e3b8  lw          $t1, -0x1C48($v0)
    ctx->pc = 0x510b08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_510b0c:
    // 0x510b0c: 0x8c66e378  lw          $a2, -0x1C88($v1)
    ctx->pc = 0x510b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_510b10:
    // 0x510b10: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x510b10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_510b14:
    // 0x510b14: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x510b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_510b18:
    // 0x510b18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x510b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_510b1c:
    // 0x510b1c: 0xca9021  addu        $s2, $a2, $t2
    ctx->pc = 0x510b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_510b20:
    // 0x510b20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x510b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_510b24:
    // 0x510b24: 0xad320000  sw          $s2, 0x0($t1)
    ctx->pc = 0x510b24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 18));
label_510b28:
    // 0x510b28: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x510b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_510b2c:
    // 0x510b2c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x510b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_510b30:
    // 0x510b30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x510b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_510b34:
    // 0x510b34: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x510b34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_510b38:
    // 0x510b38: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x510b38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_510b3c:
    // 0x510b3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x510b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_510b40:
    // 0x510b40: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x510b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_510b44:
    // 0x510b44: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x510b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_510b48:
    // 0x510b48: 0xc04cd60  jal         func_133580
label_510b4c:
    if (ctx->pc == 0x510B4Cu) {
        ctx->pc = 0x510B4Cu;
            // 0x510b4c: 0xace2e3d8  sw          $v0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
        ctx->pc = 0x510B50u;
        goto label_510b50;
    }
    ctx->pc = 0x510B48u;
    SET_GPR_U32(ctx, 31, 0x510B50u);
    ctx->pc = 0x510B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510B48u;
            // 0x510b4c: 0xace2e3d8  sw          $v0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510B50u; }
        if (ctx->pc != 0x510B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510B50u; }
        if (ctx->pc != 0x510B50u) { return; }
    }
    ctx->pc = 0x510B50u;
label_510b50:
    // 0x510b50: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x510b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_510b54:
    // 0x510b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x510b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_510b58:
    // 0x510b58: 0xc04e4a4  jal         func_139290
label_510b5c:
    if (ctx->pc == 0x510B5Cu) {
        ctx->pc = 0x510B5Cu;
            // 0x510b5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510B60u;
        goto label_510b60;
    }
    ctx->pc = 0x510B58u;
    SET_GPR_U32(ctx, 31, 0x510B60u);
    ctx->pc = 0x510B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510B58u;
            // 0x510b5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510B60u; }
        if (ctx->pc != 0x510B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510B60u; }
        if (ctx->pc != 0x510B60u) { return; }
    }
    ctx->pc = 0x510B60u;
label_510b60:
    // 0x510b60: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x510b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_510b64:
    // 0x510b64: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x510b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_510b68:
    // 0x510b68: 0x320f809  jalr        $t9
label_510b6c:
    if (ctx->pc == 0x510B6Cu) {
        ctx->pc = 0x510B6Cu;
            // 0x510b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510B70u;
        goto label_510b70;
    }
    ctx->pc = 0x510B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x510B70u);
        ctx->pc = 0x510B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510B68u;
            // 0x510b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x510B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x510B70u; }
            if (ctx->pc != 0x510B70u) { return; }
        }
        }
    }
    ctx->pc = 0x510B70u;
label_510b70:
    // 0x510b70: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x510b70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_510b74:
    // 0x510b74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x510b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_510b78:
    // 0x510b78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x510b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_510b7c:
    // 0x510b7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x510b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510b80:
    // 0x510b80: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x510b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_510b84:
    // 0x510b84: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x510b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_510b88:
    // 0x510b88: 0xc04cfcc  jal         func_133F30
label_510b8c:
    if (ctx->pc == 0x510B8Cu) {
        ctx->pc = 0x510B8Cu;
            // 0x510b8c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x510B90u;
        goto label_510b90;
    }
    ctx->pc = 0x510B88u;
    SET_GPR_U32(ctx, 31, 0x510B90u);
    ctx->pc = 0x510B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510B88u;
            // 0x510b8c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510B90u; }
        if (ctx->pc != 0x510B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510B90u; }
        if (ctx->pc != 0x510B90u) { return; }
    }
    ctx->pc = 0x510B90u;
label_510b90:
    // 0x510b90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x510b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_510b94:
    // 0x510b94: 0xc04cce8  jal         func_1333A0
label_510b98:
    if (ctx->pc == 0x510B98u) {
        ctx->pc = 0x510B98u;
            // 0x510b98: 0x262400d0  addiu       $a0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x510B9Cu;
        goto label_510b9c;
    }
    ctx->pc = 0x510B94u;
    SET_GPR_U32(ctx, 31, 0x510B9Cu);
    ctx->pc = 0x510B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510B94u;
            // 0x510b98: 0x262400d0  addiu       $a0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510B9Cu; }
        if (ctx->pc != 0x510B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510B9Cu; }
        if (ctx->pc != 0x510B9Cu) { return; }
    }
    ctx->pc = 0x510B9Cu;
label_510b9c:
    // 0x510b9c: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x510b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_510ba0:
    // 0x510ba0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x510ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_510ba4:
    // 0x510ba4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x510ba4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_510ba8:
    // 0x510ba8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_510bac:
    if (ctx->pc == 0x510BACu) {
        ctx->pc = 0x510BB0u;
        goto label_510bb0;
    }
    ctx->pc = 0x510BA8u;
    {
        const bool branch_taken_0x510ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x510ba8) {
            ctx->pc = 0x510BD0u;
            goto label_510bd0;
        }
    }
    ctx->pc = 0x510BB0u;
label_510bb0:
    // 0x510bb0: 0x8e24011c  lw          $a0, 0x11C($s1)
    ctx->pc = 0x510bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_510bb4:
    // 0x510bb4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x510bb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_510bb8:
    // 0x510bb8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x510bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_510bbc:
    // 0x510bbc: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x510bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_510bc0:
    // 0x510bc0: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x510bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_510bc4:
    // 0x510bc4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x510bc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_510bc8:
    // 0x510bc8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x510bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_510bcc:
    // 0x510bcc: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x510bccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_510bd0:
    // 0x510bd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x510bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_510bd4:
    // 0x510bd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x510bd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_510bd8:
    // 0x510bd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x510bd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_510bdc:
    // 0x510bdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x510bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_510be0:
    // 0x510be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x510be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_510be4:
    // 0x510be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x510be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_510be8:
    // 0x510be8: 0x3e00008  jr          $ra
label_510bec:
    if (ctx->pc == 0x510BECu) {
        ctx->pc = 0x510BECu;
            // 0x510bec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x510BF0u;
        goto label_510bf0;
    }
    ctx->pc = 0x510BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510BE8u;
            // 0x510bec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x510BF0u;
label_510bf0:
    // 0x510bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x510bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_510bf4:
    // 0x510bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x510bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_510bf8:
    // 0x510bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x510bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_510bfc:
    // 0x510bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x510bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_510c00:
    // 0x510c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x510c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_510c04:
    // 0x510c04: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_510c08:
    if (ctx->pc == 0x510C08u) {
        ctx->pc = 0x510C08u;
            // 0x510c08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510C0Cu;
        goto label_510c0c;
    }
    ctx->pc = 0x510C04u;
    {
        const bool branch_taken_0x510c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x510C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510C04u;
            // 0x510c08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510c04) {
            ctx->pc = 0x510CB8u;
            goto label_510cb8;
        }
    }
    ctx->pc = 0x510C0Cu;
label_510c0c:
    // 0x510c0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x510c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_510c10:
    // 0x510c10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x510c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_510c14:
    // 0x510c14: 0x246352c0  addiu       $v1, $v1, 0x52C0
    ctx->pc = 0x510c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21184));
label_510c18:
    // 0x510c18: 0x24425300  addiu       $v0, $v0, 0x5300
    ctx->pc = 0x510c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
label_510c1c:
    // 0x510c1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x510c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_510c20:
    // 0x510c20: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_510c24:
    if (ctx->pc == 0x510C24u) {
        ctx->pc = 0x510C24u;
            // 0x510c24: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x510C28u;
        goto label_510c28;
    }
    ctx->pc = 0x510C20u;
    {
        const bool branch_taken_0x510c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x510C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510C20u;
            // 0x510c24: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510c20) {
            ctx->pc = 0x510CA0u;
            goto label_510ca0;
        }
    }
    ctx->pc = 0x510C28u;
label_510c28:
    // 0x510c28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x510c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_510c2c:
    // 0x510c2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x510c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_510c30:
    // 0x510c30: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x510c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_510c34:
    // 0x510c34: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x510c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_510c38:
    // 0x510c38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x510c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_510c3c:
    // 0x510c3c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x510c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_510c40:
    // 0x510c40: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x510c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_510c44:
    // 0x510c44: 0xc0aecc4  jal         func_2BB310
label_510c48:
    if (ctx->pc == 0x510C48u) {
        ctx->pc = 0x510C48u;
            // 0x510c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x510C4Cu;
        goto label_510c4c;
    }
    ctx->pc = 0x510C44u;
    SET_GPR_U32(ctx, 31, 0x510C4Cu);
    ctx->pc = 0x510C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510C44u;
            // 0x510c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510C4Cu; }
        if (ctx->pc != 0x510C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510C4Cu; }
        if (ctx->pc != 0x510C4Cu) { return; }
    }
    ctx->pc = 0x510C4Cu;
label_510c4c:
    // 0x510c4c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x510c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_510c50:
    // 0x510c50: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x510c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_510c54:
    // 0x510c54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_510c58:
    if (ctx->pc == 0x510C58u) {
        ctx->pc = 0x510C58u;
            // 0x510c58: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x510C5Cu;
        goto label_510c5c;
    }
    ctx->pc = 0x510C54u;
    {
        const bool branch_taken_0x510c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x510c54) {
            ctx->pc = 0x510C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510C54u;
            // 0x510c58: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x510C70u;
            goto label_510c70;
        }
    }
    ctx->pc = 0x510C5Cu;
label_510c5c:
    // 0x510c5c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x510c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_510c60:
    // 0x510c60: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x510c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_510c64:
    // 0x510c64: 0x320f809  jalr        $t9
label_510c68:
    if (ctx->pc == 0x510C68u) {
        ctx->pc = 0x510C68u;
            // 0x510c68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x510C6Cu;
        goto label_510c6c;
    }
    ctx->pc = 0x510C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x510C6Cu);
        ctx->pc = 0x510C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510C64u;
            // 0x510c68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x510C6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x510C6Cu; }
            if (ctx->pc != 0x510C6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x510C6Cu;
label_510c6c:
    // 0x510c6c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x510c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_510c70:
    // 0x510c70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x510c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_510c74:
    // 0x510c74: 0xc0aec9c  jal         func_2BB270
label_510c78:
    if (ctx->pc == 0x510C78u) {
        ctx->pc = 0x510C78u;
            // 0x510c78: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x510C7Cu;
        goto label_510c7c;
    }
    ctx->pc = 0x510C74u;
    SET_GPR_U32(ctx, 31, 0x510C7Cu);
    ctx->pc = 0x510C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510C74u;
            // 0x510c78: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510C7Cu; }
        if (ctx->pc != 0x510C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510C7Cu; }
        if (ctx->pc != 0x510C7Cu) { return; }
    }
    ctx->pc = 0x510C7Cu;
label_510c7c:
    // 0x510c7c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x510c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_510c80:
    // 0x510c80: 0xc0aec88  jal         func_2BB220
label_510c84:
    if (ctx->pc == 0x510C84u) {
        ctx->pc = 0x510C84u;
            // 0x510c84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x510C88u;
        goto label_510c88;
    }
    ctx->pc = 0x510C80u;
    SET_GPR_U32(ctx, 31, 0x510C88u);
    ctx->pc = 0x510C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510C80u;
            // 0x510c84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510C88u; }
        if (ctx->pc != 0x510C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510C88u; }
        if (ctx->pc != 0x510C88u) { return; }
    }
    ctx->pc = 0x510C88u;
label_510c88:
    // 0x510c88: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x510c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_510c8c:
    // 0x510c8c: 0xc0aec0c  jal         func_2BB030
label_510c90:
    if (ctx->pc == 0x510C90u) {
        ctx->pc = 0x510C90u;
            // 0x510c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510C94u;
        goto label_510c94;
    }
    ctx->pc = 0x510C8Cu;
    SET_GPR_U32(ctx, 31, 0x510C94u);
    ctx->pc = 0x510C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510C8Cu;
            // 0x510c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510C94u; }
        if (ctx->pc != 0x510C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510C94u; }
        if (ctx->pc != 0x510C94u) { return; }
    }
    ctx->pc = 0x510C94u;
label_510c94:
    // 0x510c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x510c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510c98:
    // 0x510c98: 0xc0aeaa8  jal         func_2BAAA0
label_510c9c:
    if (ctx->pc == 0x510C9Cu) {
        ctx->pc = 0x510C9Cu;
            // 0x510c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510CA0u;
        goto label_510ca0;
    }
    ctx->pc = 0x510C98u;
    SET_GPR_U32(ctx, 31, 0x510CA0u);
    ctx->pc = 0x510C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510C98u;
            // 0x510c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510CA0u; }
        if (ctx->pc != 0x510CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510CA0u; }
        if (ctx->pc != 0x510CA0u) { return; }
    }
    ctx->pc = 0x510CA0u;
label_510ca0:
    // 0x510ca0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x510ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_510ca4:
    // 0x510ca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x510ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_510ca8:
    // 0x510ca8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_510cac:
    if (ctx->pc == 0x510CACu) {
        ctx->pc = 0x510CACu;
            // 0x510cac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510CB0u;
        goto label_510cb0;
    }
    ctx->pc = 0x510CA8u;
    {
        const bool branch_taken_0x510ca8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x510ca8) {
            ctx->pc = 0x510CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510CA8u;
            // 0x510cac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x510CBCu;
            goto label_510cbc;
        }
    }
    ctx->pc = 0x510CB0u;
label_510cb0:
    // 0x510cb0: 0xc0400a8  jal         func_1002A0
label_510cb4:
    if (ctx->pc == 0x510CB4u) {
        ctx->pc = 0x510CB4u;
            // 0x510cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510CB8u;
        goto label_510cb8;
    }
    ctx->pc = 0x510CB0u;
    SET_GPR_U32(ctx, 31, 0x510CB8u);
    ctx->pc = 0x510CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510CB0u;
            // 0x510cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510CB8u; }
        if (ctx->pc != 0x510CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510CB8u; }
        if (ctx->pc != 0x510CB8u) { return; }
    }
    ctx->pc = 0x510CB8u;
label_510cb8:
    // 0x510cb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x510cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510cbc:
    // 0x510cbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x510cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_510cc0:
    // 0x510cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x510cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_510cc4:
    // 0x510cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x510cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_510cc8:
    // 0x510cc8: 0x3e00008  jr          $ra
label_510ccc:
    if (ctx->pc == 0x510CCCu) {
        ctx->pc = 0x510CCCu;
            // 0x510ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x510CD0u;
        goto label_510cd0;
    }
    ctx->pc = 0x510CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510CC8u;
            // 0x510ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x510CD0u;
label_510cd0:
    // 0x510cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x510cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_510cd4:
    // 0x510cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x510cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_510cd8:
    // 0x510cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x510cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_510cdc:
    // 0x510cdc: 0xc0aeebc  jal         func_2BBAF0
label_510ce0:
    if (ctx->pc == 0x510CE0u) {
        ctx->pc = 0x510CE0u;
            // 0x510ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510CE4u;
        goto label_510ce4;
    }
    ctx->pc = 0x510CDCu;
    SET_GPR_U32(ctx, 31, 0x510CE4u);
    ctx->pc = 0x510CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510CDCu;
            // 0x510ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510CE4u; }
        if (ctx->pc != 0x510CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510CE4u; }
        if (ctx->pc != 0x510CE4u) { return; }
    }
    ctx->pc = 0x510CE4u;
label_510ce4:
    // 0x510ce4: 0xc0aeeb4  jal         func_2BBAD0
label_510ce8:
    if (ctx->pc == 0x510CE8u) {
        ctx->pc = 0x510CE8u;
            // 0x510ce8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x510CECu;
        goto label_510cec;
    }
    ctx->pc = 0x510CE4u;
    SET_GPR_U32(ctx, 31, 0x510CECu);
    ctx->pc = 0x510CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510CE4u;
            // 0x510ce8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510CECu; }
        if (ctx->pc != 0x510CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510CECu; }
        if (ctx->pc != 0x510CECu) { return; }
    }
    ctx->pc = 0x510CECu;
label_510cec:
    // 0x510cec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x510cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_510cf0:
    // 0x510cf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x510cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_510cf4:
    // 0x510cf4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x510cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_510cf8:
    // 0x510cf8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x510cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_510cfc:
    // 0x510cfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x510cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_510d00:
    // 0x510d00: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x510d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_510d04:
    // 0x510d04: 0xc0aeea4  jal         func_2BBA90
label_510d08:
    if (ctx->pc == 0x510D08u) {
        ctx->pc = 0x510D08u;
            // 0x510d08: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x510D0Cu;
        goto label_510d0c;
    }
    ctx->pc = 0x510D04u;
    SET_GPR_U32(ctx, 31, 0x510D0Cu);
    ctx->pc = 0x510D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510D04u;
            // 0x510d08: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510D0Cu; }
        if (ctx->pc != 0x510D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510D0Cu; }
        if (ctx->pc != 0x510D0Cu) { return; }
    }
    ctx->pc = 0x510D0Cu;
label_510d0c:
    // 0x510d0c: 0xc0aee8c  jal         func_2BBA30
label_510d10:
    if (ctx->pc == 0x510D10u) {
        ctx->pc = 0x510D10u;
            // 0x510d10: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x510D14u;
        goto label_510d14;
    }
    ctx->pc = 0x510D0Cu;
    SET_GPR_U32(ctx, 31, 0x510D14u);
    ctx->pc = 0x510D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510D0Cu;
            // 0x510d10: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510D14u; }
        if (ctx->pc != 0x510D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510D14u; }
        if (ctx->pc != 0x510D14u) { return; }
    }
    ctx->pc = 0x510D14u;
label_510d14:
    // 0x510d14: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x510d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_510d18:
    // 0x510d18: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x510d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_510d1c:
    // 0x510d1c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x510d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_510d20:
    // 0x510d20: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x510d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_510d24:
    // 0x510d24: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x510d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_510d28:
    // 0x510d28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x510d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_510d2c:
    // 0x510d2c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x510d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_510d30:
    // 0x510d30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x510d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_510d34:
    // 0x510d34: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x510d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_510d38:
    // 0x510d38: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x510d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_510d3c:
    // 0x510d3c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x510d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_510d40:
    // 0x510d40: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x510d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_510d44:
    // 0x510d44: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x510d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_510d48:
    // 0x510d48: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x510d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_510d4c:
    // 0x510d4c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x510d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_510d50:
    // 0x510d50: 0xc0775b8  jal         func_1DD6E0
label_510d54:
    if (ctx->pc == 0x510D54u) {
        ctx->pc = 0x510D54u;
            // 0x510d54: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x510D58u;
        goto label_510d58;
    }
    ctx->pc = 0x510D50u;
    SET_GPR_U32(ctx, 31, 0x510D58u);
    ctx->pc = 0x510D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510D50u;
            // 0x510d54: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510D58u; }
        if (ctx->pc != 0x510D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510D58u; }
        if (ctx->pc != 0x510D58u) { return; }
    }
    ctx->pc = 0x510D58u;
label_510d58:
    // 0x510d58: 0xc077314  jal         func_1DCC50
label_510d5c:
    if (ctx->pc == 0x510D5Cu) {
        ctx->pc = 0x510D5Cu;
            // 0x510d5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x510D60u;
        goto label_510d60;
    }
    ctx->pc = 0x510D58u;
    SET_GPR_U32(ctx, 31, 0x510D60u);
    ctx->pc = 0x510D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510D58u;
            // 0x510d5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510D60u; }
        if (ctx->pc != 0x510D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510D60u; }
        if (ctx->pc != 0x510D60u) { return; }
    }
    ctx->pc = 0x510D60u;
label_510d60:
    // 0x510d60: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x510d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_510d64:
    // 0x510d64: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x510d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_510d68:
    // 0x510d68: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x510d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_510d6c:
    // 0x510d6c: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x510d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_510d70:
    // 0x510d70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x510d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_510d74:
    // 0x510d74: 0x24a552c0  addiu       $a1, $a1, 0x52C0
    ctx->pc = 0x510d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21184));
label_510d78:
    // 0x510d78: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x510d78u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_510d7c:
    // 0x510d7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x510d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_510d80:
    // 0x510d80: 0x24635300  addiu       $v1, $v1, 0x5300
    ctx->pc = 0x510d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21248));
label_510d84:
    // 0x510d84: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x510d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_510d88:
    // 0x510d88: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x510d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_510d8c:
    // 0x510d8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x510d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_510d90:
    // 0x510d90: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x510d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_510d94:
    // 0x510d94: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x510d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_510d98:
    // 0x510d98: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x510d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_510d9c:
    // 0x510d9c: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x510d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
label_510da0:
    // 0x510da0: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x510da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_510da4:
    // 0x510da4: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x510da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_510da8:
    // 0x510da8: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x510da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_510dac:
    // 0x510dac: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x510dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_510db0:
    // 0x510db0: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x510db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_510db4:
    // 0x510db4: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x510db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_510db8:
    // 0x510db8: 0xc04f26c  jal         func_13C9B0
label_510dbc:
    if (ctx->pc == 0x510DBCu) {
        ctx->pc = 0x510DBCu;
            // 0x510dbc: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x510DC0u;
        goto label_510dc0;
    }
    ctx->pc = 0x510DB8u;
    SET_GPR_U32(ctx, 31, 0x510DC0u);
    ctx->pc = 0x510DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510DB8u;
            // 0x510dbc: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510DC0u; }
        if (ctx->pc != 0x510DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510DC0u; }
        if (ctx->pc != 0x510DC0u) { return; }
    }
    ctx->pc = 0x510DC0u;
label_510dc0:
    // 0x510dc0: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x510dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_510dc4:
    // 0x510dc4: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x510dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_510dc8:
    // 0x510dc8: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x510dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_510dcc:
    // 0x510dcc: 0xc040180  jal         func_100600
label_510dd0:
    if (ctx->pc == 0x510DD0u) {
        ctx->pc = 0x510DD0u;
            // 0x510dd0: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x510DD4u;
        goto label_510dd4;
    }
    ctx->pc = 0x510DCCu;
    SET_GPR_U32(ctx, 31, 0x510DD4u);
    ctx->pc = 0x510DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510DCCu;
            // 0x510dd0: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510DD4u; }
        if (ctx->pc != 0x510DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510DD4u; }
        if (ctx->pc != 0x510DD4u) { return; }
    }
    ctx->pc = 0x510DD4u;
label_510dd4:
    // 0x510dd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_510dd8:
    if (ctx->pc == 0x510DD8u) {
        ctx->pc = 0x510DDCu;
        goto label_510ddc;
    }
    ctx->pc = 0x510DD4u;
    {
        const bool branch_taken_0x510dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x510dd4) {
            ctx->pc = 0x510DF4u;
            goto label_510df4;
        }
    }
    ctx->pc = 0x510DDCu;
label_510ddc:
    // 0x510ddc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x510ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_510de0:
    // 0x510de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x510de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_510de4:
    // 0x510de4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x510de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_510de8:
    // 0x510de8: 0x24c6b760  addiu       $a2, $a2, -0x48A0
    ctx->pc = 0x510de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948704));
label_510dec:
    // 0x510dec: 0xc0c3f60  jal         func_30FD80
label_510df0:
    if (ctx->pc == 0x510DF0u) {
        ctx->pc = 0x510DF0u;
            // 0x510df0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510DF4u;
        goto label_510df4;
    }
    ctx->pc = 0x510DECu;
    SET_GPR_U32(ctx, 31, 0x510DF4u);
    ctx->pc = 0x510DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510DECu;
            // 0x510df0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510DF4u; }
        if (ctx->pc != 0x510DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510DF4u; }
        if (ctx->pc != 0x510DF4u) { return; }
    }
    ctx->pc = 0x510DF4u;
label_510df4:
    // 0x510df4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x510df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_510df8:
    // 0x510df8: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x510df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_510dfc:
    // 0x510dfc: 0x2463bc60  addiu       $v1, $v1, -0x43A0
    ctx->pc = 0x510dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949984));
label_510e00:
    // 0x510e00: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x510e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_510e04:
    // 0x510e04: 0xac4300d4  sw          $v1, 0xD4($v0)
    ctx->pc = 0x510e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 3));
label_510e08:
    // 0x510e08: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x510e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_510e0c:
    // 0x510e0c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x510e0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_510e10:
    // 0x510e10: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x510e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_510e14:
    // 0x510e14: 0xc040180  jal         func_100600
label_510e18:
    if (ctx->pc == 0x510E18u) {
        ctx->pc = 0x510E18u;
            // 0x510e18: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x510E1Cu;
        goto label_510e1c;
    }
    ctx->pc = 0x510E14u;
    SET_GPR_U32(ctx, 31, 0x510E1Cu);
    ctx->pc = 0x510E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510E14u;
            // 0x510e18: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510E1Cu; }
        if (ctx->pc != 0x510E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510E1Cu; }
        if (ctx->pc != 0x510E1Cu) { return; }
    }
    ctx->pc = 0x510E1Cu;
label_510e1c:
    // 0x510e1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_510e20:
    if (ctx->pc == 0x510E20u) {
        ctx->pc = 0x510E24u;
        goto label_510e24;
    }
    ctx->pc = 0x510E1Cu;
    {
        const bool branch_taken_0x510e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x510e1c) {
            ctx->pc = 0x510E3Cu;
            goto label_510e3c;
        }
    }
    ctx->pc = 0x510E24u;
label_510e24:
    // 0x510e24: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x510e24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_510e28:
    // 0x510e28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x510e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_510e2c:
    // 0x510e2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x510e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_510e30:
    // 0x510e30: 0x24c6b7a0  addiu       $a2, $a2, -0x4860
    ctx->pc = 0x510e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948768));
label_510e34:
    // 0x510e34: 0xc0c3f60  jal         func_30FD80
label_510e38:
    if (ctx->pc == 0x510E38u) {
        ctx->pc = 0x510E38u;
            // 0x510e38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510E3Cu;
        goto label_510e3c;
    }
    ctx->pc = 0x510E34u;
    SET_GPR_U32(ctx, 31, 0x510E3Cu);
    ctx->pc = 0x510E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510E34u;
            // 0x510e38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510E3Cu; }
        if (ctx->pc != 0x510E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510E3Cu; }
        if (ctx->pc != 0x510E3Cu) { return; }
    }
    ctx->pc = 0x510E3Cu;
label_510e3c:
    // 0x510e3c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x510e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_510e40:
    // 0x510e40: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x510e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_510e44:
    // 0x510e44: 0x2463bc60  addiu       $v1, $v1, -0x43A0
    ctx->pc = 0x510e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949984));
label_510e48:
    // 0x510e48: 0xac4300d4  sw          $v1, 0xD4($v0)
    ctx->pc = 0x510e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 3));
label_510e4c:
    // 0x510e4c: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x510e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_510e50:
    // 0x510e50: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x510e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
label_510e54:
    // 0x510e54: 0x34651aa9  ori         $a1, $v1, 0x1AA9
    ctx->pc = 0x510e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6825);
label_510e58:
    // 0x510e58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x510e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_510e5c:
    // 0x510e5c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x510e5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_510e60:
    // 0x510e60: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x510e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_510e64:
    // 0x510e64: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x510e64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_510e68:
    // 0x510e68: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x510e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_510e6c:
    // 0x510e6c: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x510e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_510e70:
    // 0x510e70: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x510e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_510e74:
    // 0x510e74: 0x320f809  jalr        $t9
label_510e78:
    if (ctx->pc == 0x510E78u) {
        ctx->pc = 0x510E78u;
            // 0x510e78: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x510E7Cu;
        goto label_510e7c;
    }
    ctx->pc = 0x510E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x510E7Cu);
        ctx->pc = 0x510E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510E74u;
            // 0x510e78: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x510E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x510E7Cu; }
            if (ctx->pc != 0x510E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x510E7Cu;
label_510e7c:
    // 0x510e7c: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x510e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_510e80:
    // 0x510e80: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x510e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_510e84:
    // 0x510e84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x510e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_510e88:
    // 0x510e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x510e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_510e8c:
    // 0x510e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x510e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_510e90:
    // 0x510e90: 0x3e00008  jr          $ra
label_510e94:
    if (ctx->pc == 0x510E94u) {
        ctx->pc = 0x510E94u;
            // 0x510e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x510E98u;
        goto label_510e98;
    }
    ctx->pc = 0x510E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510E90u;
            // 0x510e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x510E98u;
label_510e98:
    // 0x510e98: 0x0  nop
    ctx->pc = 0x510e98u;
    // NOP
label_510e9c:
    // 0x510e9c: 0x0  nop
    ctx->pc = 0x510e9cu;
    // NOP
label_510ea0:
    // 0x510ea0: 0x81442fc  j           func_510BF0
label_510ea4:
    if (ctx->pc == 0x510EA4u) {
        ctx->pc = 0x510EA4u;
            // 0x510ea4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x510EA8u;
        goto label_510ea8;
    }
    ctx->pc = 0x510EA0u;
    ctx->pc = 0x510EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510EA0u;
            // 0x510ea4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510BF0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_510bf0;
    ctx->pc = 0x510EA8u;
label_510ea8:
    // 0x510ea8: 0x0  nop
    ctx->pc = 0x510ea8u;
    // NOP
label_510eac:
    // 0x510eac: 0x0  nop
    ctx->pc = 0x510eacu;
    // NOP
}
