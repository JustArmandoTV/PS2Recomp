#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271950
// Address: 0x271950 - 0x271e00
void sub_00271950_0x271950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271950_0x271950");
#endif

    switch (ctx->pc) {
        case 0x271950u: goto label_271950;
        case 0x271954u: goto label_271954;
        case 0x271958u: goto label_271958;
        case 0x27195cu: goto label_27195c;
        case 0x271960u: goto label_271960;
        case 0x271964u: goto label_271964;
        case 0x271968u: goto label_271968;
        case 0x27196cu: goto label_27196c;
        case 0x271970u: goto label_271970;
        case 0x271974u: goto label_271974;
        case 0x271978u: goto label_271978;
        case 0x27197cu: goto label_27197c;
        case 0x271980u: goto label_271980;
        case 0x271984u: goto label_271984;
        case 0x271988u: goto label_271988;
        case 0x27198cu: goto label_27198c;
        case 0x271990u: goto label_271990;
        case 0x271994u: goto label_271994;
        case 0x271998u: goto label_271998;
        case 0x27199cu: goto label_27199c;
        case 0x2719a0u: goto label_2719a0;
        case 0x2719a4u: goto label_2719a4;
        case 0x2719a8u: goto label_2719a8;
        case 0x2719acu: goto label_2719ac;
        case 0x2719b0u: goto label_2719b0;
        case 0x2719b4u: goto label_2719b4;
        case 0x2719b8u: goto label_2719b8;
        case 0x2719bcu: goto label_2719bc;
        case 0x2719c0u: goto label_2719c0;
        case 0x2719c4u: goto label_2719c4;
        case 0x2719c8u: goto label_2719c8;
        case 0x2719ccu: goto label_2719cc;
        case 0x2719d0u: goto label_2719d0;
        case 0x2719d4u: goto label_2719d4;
        case 0x2719d8u: goto label_2719d8;
        case 0x2719dcu: goto label_2719dc;
        case 0x2719e0u: goto label_2719e0;
        case 0x2719e4u: goto label_2719e4;
        case 0x2719e8u: goto label_2719e8;
        case 0x2719ecu: goto label_2719ec;
        case 0x2719f0u: goto label_2719f0;
        case 0x2719f4u: goto label_2719f4;
        case 0x2719f8u: goto label_2719f8;
        case 0x2719fcu: goto label_2719fc;
        case 0x271a00u: goto label_271a00;
        case 0x271a04u: goto label_271a04;
        case 0x271a08u: goto label_271a08;
        case 0x271a0cu: goto label_271a0c;
        case 0x271a10u: goto label_271a10;
        case 0x271a14u: goto label_271a14;
        case 0x271a18u: goto label_271a18;
        case 0x271a1cu: goto label_271a1c;
        case 0x271a20u: goto label_271a20;
        case 0x271a24u: goto label_271a24;
        case 0x271a28u: goto label_271a28;
        case 0x271a2cu: goto label_271a2c;
        case 0x271a30u: goto label_271a30;
        case 0x271a34u: goto label_271a34;
        case 0x271a38u: goto label_271a38;
        case 0x271a3cu: goto label_271a3c;
        case 0x271a40u: goto label_271a40;
        case 0x271a44u: goto label_271a44;
        case 0x271a48u: goto label_271a48;
        case 0x271a4cu: goto label_271a4c;
        case 0x271a50u: goto label_271a50;
        case 0x271a54u: goto label_271a54;
        case 0x271a58u: goto label_271a58;
        case 0x271a5cu: goto label_271a5c;
        case 0x271a60u: goto label_271a60;
        case 0x271a64u: goto label_271a64;
        case 0x271a68u: goto label_271a68;
        case 0x271a6cu: goto label_271a6c;
        case 0x271a70u: goto label_271a70;
        case 0x271a74u: goto label_271a74;
        case 0x271a78u: goto label_271a78;
        case 0x271a7cu: goto label_271a7c;
        case 0x271a80u: goto label_271a80;
        case 0x271a84u: goto label_271a84;
        case 0x271a88u: goto label_271a88;
        case 0x271a8cu: goto label_271a8c;
        case 0x271a90u: goto label_271a90;
        case 0x271a94u: goto label_271a94;
        case 0x271a98u: goto label_271a98;
        case 0x271a9cu: goto label_271a9c;
        case 0x271aa0u: goto label_271aa0;
        case 0x271aa4u: goto label_271aa4;
        case 0x271aa8u: goto label_271aa8;
        case 0x271aacu: goto label_271aac;
        case 0x271ab0u: goto label_271ab0;
        case 0x271ab4u: goto label_271ab4;
        case 0x271ab8u: goto label_271ab8;
        case 0x271abcu: goto label_271abc;
        case 0x271ac0u: goto label_271ac0;
        case 0x271ac4u: goto label_271ac4;
        case 0x271ac8u: goto label_271ac8;
        case 0x271accu: goto label_271acc;
        case 0x271ad0u: goto label_271ad0;
        case 0x271ad4u: goto label_271ad4;
        case 0x271ad8u: goto label_271ad8;
        case 0x271adcu: goto label_271adc;
        case 0x271ae0u: goto label_271ae0;
        case 0x271ae4u: goto label_271ae4;
        case 0x271ae8u: goto label_271ae8;
        case 0x271aecu: goto label_271aec;
        case 0x271af0u: goto label_271af0;
        case 0x271af4u: goto label_271af4;
        case 0x271af8u: goto label_271af8;
        case 0x271afcu: goto label_271afc;
        case 0x271b00u: goto label_271b00;
        case 0x271b04u: goto label_271b04;
        case 0x271b08u: goto label_271b08;
        case 0x271b0cu: goto label_271b0c;
        case 0x271b10u: goto label_271b10;
        case 0x271b14u: goto label_271b14;
        case 0x271b18u: goto label_271b18;
        case 0x271b1cu: goto label_271b1c;
        case 0x271b20u: goto label_271b20;
        case 0x271b24u: goto label_271b24;
        case 0x271b28u: goto label_271b28;
        case 0x271b2cu: goto label_271b2c;
        case 0x271b30u: goto label_271b30;
        case 0x271b34u: goto label_271b34;
        case 0x271b38u: goto label_271b38;
        case 0x271b3cu: goto label_271b3c;
        case 0x271b40u: goto label_271b40;
        case 0x271b44u: goto label_271b44;
        case 0x271b48u: goto label_271b48;
        case 0x271b4cu: goto label_271b4c;
        case 0x271b50u: goto label_271b50;
        case 0x271b54u: goto label_271b54;
        case 0x271b58u: goto label_271b58;
        case 0x271b5cu: goto label_271b5c;
        case 0x271b60u: goto label_271b60;
        case 0x271b64u: goto label_271b64;
        case 0x271b68u: goto label_271b68;
        case 0x271b6cu: goto label_271b6c;
        case 0x271b70u: goto label_271b70;
        case 0x271b74u: goto label_271b74;
        case 0x271b78u: goto label_271b78;
        case 0x271b7cu: goto label_271b7c;
        case 0x271b80u: goto label_271b80;
        case 0x271b84u: goto label_271b84;
        case 0x271b88u: goto label_271b88;
        case 0x271b8cu: goto label_271b8c;
        case 0x271b90u: goto label_271b90;
        case 0x271b94u: goto label_271b94;
        case 0x271b98u: goto label_271b98;
        case 0x271b9cu: goto label_271b9c;
        case 0x271ba0u: goto label_271ba0;
        case 0x271ba4u: goto label_271ba4;
        case 0x271ba8u: goto label_271ba8;
        case 0x271bacu: goto label_271bac;
        case 0x271bb0u: goto label_271bb0;
        case 0x271bb4u: goto label_271bb4;
        case 0x271bb8u: goto label_271bb8;
        case 0x271bbcu: goto label_271bbc;
        case 0x271bc0u: goto label_271bc0;
        case 0x271bc4u: goto label_271bc4;
        case 0x271bc8u: goto label_271bc8;
        case 0x271bccu: goto label_271bcc;
        case 0x271bd0u: goto label_271bd0;
        case 0x271bd4u: goto label_271bd4;
        case 0x271bd8u: goto label_271bd8;
        case 0x271bdcu: goto label_271bdc;
        case 0x271be0u: goto label_271be0;
        case 0x271be4u: goto label_271be4;
        case 0x271be8u: goto label_271be8;
        case 0x271becu: goto label_271bec;
        case 0x271bf0u: goto label_271bf0;
        case 0x271bf4u: goto label_271bf4;
        case 0x271bf8u: goto label_271bf8;
        case 0x271bfcu: goto label_271bfc;
        case 0x271c00u: goto label_271c00;
        case 0x271c04u: goto label_271c04;
        case 0x271c08u: goto label_271c08;
        case 0x271c0cu: goto label_271c0c;
        case 0x271c10u: goto label_271c10;
        case 0x271c14u: goto label_271c14;
        case 0x271c18u: goto label_271c18;
        case 0x271c1cu: goto label_271c1c;
        case 0x271c20u: goto label_271c20;
        case 0x271c24u: goto label_271c24;
        case 0x271c28u: goto label_271c28;
        case 0x271c2cu: goto label_271c2c;
        case 0x271c30u: goto label_271c30;
        case 0x271c34u: goto label_271c34;
        case 0x271c38u: goto label_271c38;
        case 0x271c3cu: goto label_271c3c;
        case 0x271c40u: goto label_271c40;
        case 0x271c44u: goto label_271c44;
        case 0x271c48u: goto label_271c48;
        case 0x271c4cu: goto label_271c4c;
        case 0x271c50u: goto label_271c50;
        case 0x271c54u: goto label_271c54;
        case 0x271c58u: goto label_271c58;
        case 0x271c5cu: goto label_271c5c;
        case 0x271c60u: goto label_271c60;
        case 0x271c64u: goto label_271c64;
        case 0x271c68u: goto label_271c68;
        case 0x271c6cu: goto label_271c6c;
        case 0x271c70u: goto label_271c70;
        case 0x271c74u: goto label_271c74;
        case 0x271c78u: goto label_271c78;
        case 0x271c7cu: goto label_271c7c;
        case 0x271c80u: goto label_271c80;
        case 0x271c84u: goto label_271c84;
        case 0x271c88u: goto label_271c88;
        case 0x271c8cu: goto label_271c8c;
        case 0x271c90u: goto label_271c90;
        case 0x271c94u: goto label_271c94;
        case 0x271c98u: goto label_271c98;
        case 0x271c9cu: goto label_271c9c;
        case 0x271ca0u: goto label_271ca0;
        case 0x271ca4u: goto label_271ca4;
        case 0x271ca8u: goto label_271ca8;
        case 0x271cacu: goto label_271cac;
        case 0x271cb0u: goto label_271cb0;
        case 0x271cb4u: goto label_271cb4;
        case 0x271cb8u: goto label_271cb8;
        case 0x271cbcu: goto label_271cbc;
        case 0x271cc0u: goto label_271cc0;
        case 0x271cc4u: goto label_271cc4;
        case 0x271cc8u: goto label_271cc8;
        case 0x271cccu: goto label_271ccc;
        case 0x271cd0u: goto label_271cd0;
        case 0x271cd4u: goto label_271cd4;
        case 0x271cd8u: goto label_271cd8;
        case 0x271cdcu: goto label_271cdc;
        case 0x271ce0u: goto label_271ce0;
        case 0x271ce4u: goto label_271ce4;
        case 0x271ce8u: goto label_271ce8;
        case 0x271cecu: goto label_271cec;
        case 0x271cf0u: goto label_271cf0;
        case 0x271cf4u: goto label_271cf4;
        case 0x271cf8u: goto label_271cf8;
        case 0x271cfcu: goto label_271cfc;
        case 0x271d00u: goto label_271d00;
        case 0x271d04u: goto label_271d04;
        case 0x271d08u: goto label_271d08;
        case 0x271d0cu: goto label_271d0c;
        case 0x271d10u: goto label_271d10;
        case 0x271d14u: goto label_271d14;
        case 0x271d18u: goto label_271d18;
        case 0x271d1cu: goto label_271d1c;
        case 0x271d20u: goto label_271d20;
        case 0x271d24u: goto label_271d24;
        case 0x271d28u: goto label_271d28;
        case 0x271d2cu: goto label_271d2c;
        case 0x271d30u: goto label_271d30;
        case 0x271d34u: goto label_271d34;
        case 0x271d38u: goto label_271d38;
        case 0x271d3cu: goto label_271d3c;
        case 0x271d40u: goto label_271d40;
        case 0x271d44u: goto label_271d44;
        case 0x271d48u: goto label_271d48;
        case 0x271d4cu: goto label_271d4c;
        case 0x271d50u: goto label_271d50;
        case 0x271d54u: goto label_271d54;
        case 0x271d58u: goto label_271d58;
        case 0x271d5cu: goto label_271d5c;
        case 0x271d60u: goto label_271d60;
        case 0x271d64u: goto label_271d64;
        case 0x271d68u: goto label_271d68;
        case 0x271d6cu: goto label_271d6c;
        case 0x271d70u: goto label_271d70;
        case 0x271d74u: goto label_271d74;
        case 0x271d78u: goto label_271d78;
        case 0x271d7cu: goto label_271d7c;
        case 0x271d80u: goto label_271d80;
        case 0x271d84u: goto label_271d84;
        case 0x271d88u: goto label_271d88;
        case 0x271d8cu: goto label_271d8c;
        case 0x271d90u: goto label_271d90;
        case 0x271d94u: goto label_271d94;
        case 0x271d98u: goto label_271d98;
        case 0x271d9cu: goto label_271d9c;
        case 0x271da0u: goto label_271da0;
        case 0x271da4u: goto label_271da4;
        case 0x271da8u: goto label_271da8;
        case 0x271dacu: goto label_271dac;
        case 0x271db0u: goto label_271db0;
        case 0x271db4u: goto label_271db4;
        case 0x271db8u: goto label_271db8;
        case 0x271dbcu: goto label_271dbc;
        case 0x271dc0u: goto label_271dc0;
        case 0x271dc4u: goto label_271dc4;
        case 0x271dc8u: goto label_271dc8;
        case 0x271dccu: goto label_271dcc;
        case 0x271dd0u: goto label_271dd0;
        case 0x271dd4u: goto label_271dd4;
        case 0x271dd8u: goto label_271dd8;
        case 0x271ddcu: goto label_271ddc;
        case 0x271de0u: goto label_271de0;
        case 0x271de4u: goto label_271de4;
        case 0x271de8u: goto label_271de8;
        case 0x271decu: goto label_271dec;
        case 0x271df0u: goto label_271df0;
        case 0x271df4u: goto label_271df4;
        case 0x271df8u: goto label_271df8;
        case 0x271dfcu: goto label_271dfc;
        default: break;
    }

    ctx->pc = 0x271950u;

label_271950:
    // 0x271950: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x271950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_271954:
    // 0x271954: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x271954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_271958:
    // 0x271958: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x271958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27195c:
    // 0x27195c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_271960:
    // 0x271960: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x271960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_271964:
    // 0x271964: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x271964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271968:
    // 0x271968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27196c:
    // 0x27196c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_271970:
    // 0x271970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_271974:
    // 0x271974: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x271974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_271978:
    // 0x271978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27197c:
    // 0x27197c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27197cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271980:
    // 0x271980: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x271980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_271984:
    // 0x271984: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x271984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_271988:
    // 0x271988: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x271988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_27198c:
    // 0x27198c: 0x320f809  jalr        $t9
label_271990:
    if (ctx->pc == 0x271990u) {
        ctx->pc = 0x271990u;
            // 0x271990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271994u;
        goto label_271994;
    }
    ctx->pc = 0x27198Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271994u);
        ctx->pc = 0x271990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27198Cu;
            // 0x271990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271994u; }
            if (ctx->pc != 0x271994u) { return; }
        }
        }
    }
    ctx->pc = 0x271994u;
label_271994:
    // 0x271994: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x271994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_271998:
    // 0x271998: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x271998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27199c:
    // 0x27199c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x27199cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2719a0:
    // 0x2719a0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2719a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2719a4:
    // 0x2719a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2719a8:
    // 0x2719a8: 0xc09a868  jal         func_26A1A0
label_2719ac:
    if (ctx->pc == 0x2719ACu) {
        ctx->pc = 0x2719ACu;
            // 0x2719ac: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2719B0u;
        goto label_2719b0;
    }
    ctx->pc = 0x2719A8u;
    SET_GPR_U32(ctx, 31, 0x2719B0u);
    ctx->pc = 0x2719ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2719A8u;
            // 0x2719ac: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A1A0u;
    if (runtime->hasFunction(0x26A1A0u)) {
        auto targetFn = runtime->lookupFunction(0x26A1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719B0u; }
        if (ctx->pc != 0x2719B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A1A0_0x26a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719B0u; }
        if (ctx->pc != 0x2719B0u) { return; }
    }
    ctx->pc = 0x2719B0u;
label_2719b0:
    // 0x2719b0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2719b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2719b4:
    // 0x2719b4: 0xc09cc74  jal         func_2731D0
label_2719b8:
    if (ctx->pc == 0x2719B8u) {
        ctx->pc = 0x2719B8u;
            // 0x2719b8: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2719BCu;
        goto label_2719bc;
    }
    ctx->pc = 0x2719B4u;
    SET_GPR_U32(ctx, 31, 0x2719BCu);
    ctx->pc = 0x2719B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2719B4u;
            // 0x2719b8: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2731D0u;
    if (runtime->hasFunction(0x2731D0u)) {
        auto targetFn = runtime->lookupFunction(0x2731D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719BCu; }
        if (ctx->pc != 0x2719BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002731D0_0x2731d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719BCu; }
        if (ctx->pc != 0x2719BCu) { return; }
    }
    ctx->pc = 0x2719BCu;
label_2719bc:
    // 0x2719bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2719bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2719c0:
    // 0x2719c0: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x2719c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_2719c4:
    // 0x2719c4: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2719c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2719c8:
    // 0x2719c8: 0xc09a96c  jal         func_26A5B0
label_2719cc:
    if (ctx->pc == 0x2719CCu) {
        ctx->pc = 0x2719CCu;
            // 0x2719cc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2719D0u;
        goto label_2719d0;
    }
    ctx->pc = 0x2719C8u;
    SET_GPR_U32(ctx, 31, 0x2719D0u);
    ctx->pc = 0x2719CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2719C8u;
            // 0x2719cc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A5B0u;
    if (runtime->hasFunction(0x26A5B0u)) {
        auto targetFn = runtime->lookupFunction(0x26A5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719D0u; }
        if (ctx->pc != 0x2719D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A5B0_0x26a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2719D0u; }
        if (ctx->pc != 0x2719D0u) { return; }
    }
    ctx->pc = 0x2719D0u;
label_2719d0:
    // 0x2719d0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2719d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2719d4:
    // 0x2719d4: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x2719d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2719d8:
    // 0x2719d8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x2719d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_2719dc:
    // 0x2719dc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2719dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2719e0:
    // 0x2719e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2719e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2719e4:
    // 0x2719e4: 0x320f809  jalr        $t9
label_2719e8:
    if (ctx->pc == 0x2719E8u) {
        ctx->pc = 0x2719E8u;
            // 0x2719e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2719ECu;
        goto label_2719ec;
    }
    ctx->pc = 0x2719E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2719ECu);
        ctx->pc = 0x2719E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719E4u;
            // 0x2719e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2719ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2719ECu; }
            if (ctx->pc != 0x2719ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2719ECu;
label_2719ec:
    // 0x2719ec: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2719ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2719f0:
    // 0x2719f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2719f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2719f4:
    // 0x2719f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2719f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2719f8:
    // 0x2719f8: 0x320f809  jalr        $t9
label_2719fc:
    if (ctx->pc == 0x2719FCu) {
        ctx->pc = 0x2719FCu;
            // 0x2719fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271A00u;
        goto label_271a00;
    }
    ctx->pc = 0x2719F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271A00u);
        ctx->pc = 0x2719FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719F8u;
            // 0x2719fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271A00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271A00u; }
            if (ctx->pc != 0x271A00u) { return; }
        }
        }
    }
    ctx->pc = 0x271A00u;
label_271a00:
    // 0x271a00: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x271a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271a04:
    // 0x271a04: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x271a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271a08:
    // 0x271a08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x271a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271a0c:
    // 0x271a0c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x271a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_271a10:
    // 0x271a10: 0x320f809  jalr        $t9
label_271a14:
    if (ctx->pc == 0x271A14u) {
        ctx->pc = 0x271A14u;
            // 0x271a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271A18u;
        goto label_271a18;
    }
    ctx->pc = 0x271A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271A18u);
        ctx->pc = 0x271A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A10u;
            // 0x271a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271A18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271A18u; }
            if (ctx->pc != 0x271A18u) { return; }
        }
        }
    }
    ctx->pc = 0x271A18u;
label_271a18:
    // 0x271a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271a1c:
    // 0x271a1c: 0xc09c638  jal         func_2718E0
label_271a20:
    if (ctx->pc == 0x271A20u) {
        ctx->pc = 0x271A20u;
            // 0x271a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271A24u;
        goto label_271a24;
    }
    ctx->pc = 0x271A1Cu;
    SET_GPR_U32(ctx, 31, 0x271A24u);
    ctx->pc = 0x271A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271A1Cu;
            // 0x271a20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2718E0u;
    if (runtime->hasFunction(0x2718E0u)) {
        auto targetFn = runtime->lookupFunction(0x2718E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A24u; }
        if (ctx->pc != 0x271A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002718E0_0x2718e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A24u; }
        if (ctx->pc != 0x271A24u) { return; }
    }
    ctx->pc = 0x271A24u;
label_271a24:
    // 0x271a24: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_271a28:
    if (ctx->pc == 0x271A28u) {
        ctx->pc = 0x271A2Cu;
        goto label_271a2c;
    }
    ctx->pc = 0x271A24u;
    {
        const bool branch_taken_0x271a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x271a24) {
            ctx->pc = 0x271A40u;
            goto label_271a40;
        }
    }
    ctx->pc = 0x271A2Cu;
label_271a2c:
    // 0x271a2c: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x271a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_271a30:
    // 0x271a30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_271a34:
    if (ctx->pc == 0x271A34u) {
        ctx->pc = 0x271A38u;
        goto label_271a38;
    }
    ctx->pc = 0x271A30u;
    {
        const bool branch_taken_0x271a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271a30) {
            ctx->pc = 0x271A40u;
            goto label_271a40;
        }
    }
    ctx->pc = 0x271A38u;
label_271a38:
    // 0x271a38: 0x10000007  b           . + 4 + (0x7 << 2)
label_271a3c:
    if (ctx->pc == 0x271A3Cu) {
        ctx->pc = 0x271A3Cu;
            // 0x271a3c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271A40u;
        goto label_271a40;
    }
    ctx->pc = 0x271A38u;
    {
        const bool branch_taken_0x271a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A38u;
            // 0x271a3c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a38) {
            ctx->pc = 0x271A58u;
            goto label_271a58;
        }
    }
    ctx->pc = 0x271A40u;
label_271a40:
    // 0x271a40: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x271a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_271a44:
    // 0x271a44: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x271a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_271a48:
    // 0x271a48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271a4c:
    // 0x271a4c: 0xc0a7a34  jal         func_29E8D0
label_271a50:
    if (ctx->pc == 0x271A50u) {
        ctx->pc = 0x271A50u;
            // 0x271a50: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x271A54u;
        goto label_271a54;
    }
    ctx->pc = 0x271A4Cu;
    SET_GPR_U32(ctx, 31, 0x271A54u);
    ctx->pc = 0x271A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271A4Cu;
            // 0x271a50: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E8D0u;
    if (runtime->hasFunction(0x29E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x29E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A54u; }
        if (ctx->pc != 0x271A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E8D0_0x29e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A54u; }
        if (ctx->pc != 0x271A54u) { return; }
    }
    ctx->pc = 0x271A54u;
label_271a54:
    // 0x271a54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x271a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271a58:
    // 0x271a58: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x271a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_271a5c:
    // 0x271a5c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x271a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_271a60:
    // 0x271a60: 0xafb20170  sw          $s2, 0x170($sp)
    ctx->pc = 0x271a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 18));
label_271a64:
    // 0x271a64: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x271a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_271a68:
    // 0x271a68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x271a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_271a6c:
    // 0x271a6c: 0x27a40174  addiu       $a0, $sp, 0x174
    ctx->pc = 0x271a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_271a70:
    // 0x271a70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_271a74:
    // 0x271a74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x271a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_271a78:
    // 0x271a78: 0x82a2001c  lb          $v0, 0x1C($s5)
    ctx->pc = 0x271a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_271a7c:
    // 0x271a7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_271a80:
    if (ctx->pc == 0x271A80u) {
        ctx->pc = 0x271A84u;
        goto label_271a84;
    }
    ctx->pc = 0x271A7Cu;
    {
        const bool branch_taken_0x271a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271a7c) {
            ctx->pc = 0x271A88u;
            goto label_271a88;
        }
    }
    ctx->pc = 0x271A84u;
label_271a84:
    // 0x271a84: 0x24131000  addiu       $s3, $zero, 0x1000
    ctx->pc = 0x271a84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_271a88:
    // 0x271a88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x271a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_271a8c:
    // 0x271a8c: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x271a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_271a90:
    // 0x271a90: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x271a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_271a94:
    // 0x271a94: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x271a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_271a98:
    // 0x271a98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x271a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_271a9c:
    // 0x271a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_271aa0:
    // 0x271aa0: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x271aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_271aa4:
    // 0x271aa4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x271aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271aa8:
    // 0x271aa8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x271aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_271aac:
    // 0x271aac: 0x320f809  jalr        $t9
label_271ab0:
    if (ctx->pc == 0x271AB0u) {
        ctx->pc = 0x271AB0u;
            // 0x271ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271AB4u;
        goto label_271ab4;
    }
    ctx->pc = 0x271AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271AB4u);
        ctx->pc = 0x271AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271AACu;
            // 0x271ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271AB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271AB4u; }
            if (ctx->pc != 0x271AB4u) { return; }
        }
        }
    }
    ctx->pc = 0x271AB4u;
label_271ab4:
    // 0x271ab4: 0xc09cc94  jal         func_273250
label_271ab8:
    if (ctx->pc == 0x271AB8u) {
        ctx->pc = 0x271AB8u;
            // 0x271ab8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x271ABCu;
        goto label_271abc;
    }
    ctx->pc = 0x271AB4u;
    SET_GPR_U32(ctx, 31, 0x271ABCu);
    ctx->pc = 0x271AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AB4u;
            // 0x271ab8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273250u;
    if (runtime->hasFunction(0x273250u)) {
        auto targetFn = runtime->lookupFunction(0x273250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271ABCu; }
        if (ctx->pc != 0x271ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273250_0x273250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271ABCu; }
        if (ctx->pc != 0x271ABCu) { return; }
    }
    ctx->pc = 0x271ABCu;
label_271abc:
    // 0x271abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271ac0:
    // 0x271ac0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x271ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_271ac4:
    // 0x271ac4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x271ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_271ac8:
    // 0x271ac8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x271ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271acc:
    // 0x271acc: 0x26a80008  addiu       $t0, $s5, 0x8
    ctx->pc = 0x271accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_271ad0:
    // 0x271ad0: 0xc09d2f4  jal         func_274BD0
label_271ad4:
    if (ctx->pc == 0x271AD4u) {
        ctx->pc = 0x271AD4u;
            // 0x271ad4: 0x27a90170  addiu       $t1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x271AD8u;
        goto label_271ad8;
    }
    ctx->pc = 0x271AD0u;
    SET_GPR_U32(ctx, 31, 0x271AD8u);
    ctx->pc = 0x271AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AD0u;
            // 0x271ad4: 0x27a90170  addiu       $t1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274BD0u;
    if (runtime->hasFunction(0x274BD0u)) {
        auto targetFn = runtime->lookupFunction(0x274BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AD8u; }
        if (ctx->pc != 0x271AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274BD0_0x274bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AD8u; }
        if (ctx->pc != 0x271AD8u) { return; }
    }
    ctx->pc = 0x271AD8u;
label_271ad8:
    // 0x271ad8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x271ad8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271adc:
    // 0x271adc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x271adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_271ae0:
    // 0x271ae0: 0xc09ccf4  jal         func_2733D0
label_271ae4:
    if (ctx->pc == 0x271AE4u) {
        ctx->pc = 0x271AE4u;
            // 0x271ae4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x271AE8u;
        goto label_271ae8;
    }
    ctx->pc = 0x271AE0u;
    SET_GPR_U32(ctx, 31, 0x271AE8u);
    ctx->pc = 0x271AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AE0u;
            // 0x271ae4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2733D0u;
    if (runtime->hasFunction(0x2733D0u)) {
        auto targetFn = runtime->lookupFunction(0x2733D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AE8u; }
        if (ctx->pc != 0x271AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002733D0_0x2733d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AE8u; }
        if (ctx->pc != 0x271AE8u) { return; }
    }
    ctx->pc = 0x271AE8u;
label_271ae8:
    // 0x271ae8: 0x12500005  beq         $s2, $s0, . + 4 + (0x5 << 2)
label_271aec:
    if (ctx->pc == 0x271AECu) {
        ctx->pc = 0x271AF0u;
        goto label_271af0;
    }
    ctx->pc = 0x271AE8u;
    {
        const bool branch_taken_0x271ae8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x271ae8) {
            ctx->pc = 0x271B00u;
            goto label_271b00;
        }
    }
    ctx->pc = 0x271AF0u;
label_271af0:
    // 0x271af0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x271af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_271af4:
    // 0x271af4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x271af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_271af8:
    // 0x271af8: 0xc0a7a48  jal         func_29E920
label_271afc:
    if (ctx->pc == 0x271AFCu) {
        ctx->pc = 0x271AFCu;
            // 0x271afc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271B00u;
        goto label_271b00;
    }
    ctx->pc = 0x271AF8u;
    SET_GPR_U32(ctx, 31, 0x271B00u);
    ctx->pc = 0x271AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AF8u;
            // 0x271afc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B00u; }
        if (ctx->pc != 0x271B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B00u; }
        if (ctx->pc != 0x271B00u) { return; }
    }
    ctx->pc = 0x271B00u;
label_271b00:
    // 0x271b00: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x271b00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
label_271b04:
    // 0x271b04: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x271b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_271b08:
    // 0x271b08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_271b0c:
    if (ctx->pc == 0x271B0Cu) {
        ctx->pc = 0x271B10u;
        goto label_271b10;
    }
    ctx->pc = 0x271B08u;
    {
        const bool branch_taken_0x271b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271b08) {
            ctx->pc = 0x271B20u;
            goto label_271b20;
        }
    }
    ctx->pc = 0x271B10u;
label_271b10:
    // 0x271b10: 0xc09a8d0  jal         func_26A340
label_271b14:
    if (ctx->pc == 0x271B14u) {
        ctx->pc = 0x271B14u;
            // 0x271b14: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x271B18u;
        goto label_271b18;
    }
    ctx->pc = 0x271B10u;
    SET_GPR_U32(ctx, 31, 0x271B18u);
    ctx->pc = 0x271B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271B10u;
            // 0x271b14: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A340u;
    if (runtime->hasFunction(0x26A340u)) {
        auto targetFn = runtime->lookupFunction(0x26A340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B18u; }
        if (ctx->pc != 0x271B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A340_0x26a340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B18u; }
        if (ctx->pc != 0x271B18u) { return; }
    }
    ctx->pc = 0x271B18u;
label_271b18:
    // 0x271b18: 0x1000007f  b           . + 4 + (0x7F << 2)
label_271b1c:
    if (ctx->pc == 0x271B1Cu) {
        ctx->pc = 0x271B1Cu;
            // 0x271b1c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271B20u;
        goto label_271b20;
    }
    ctx->pc = 0x271B18u;
    {
        const bool branch_taken_0x271b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B18u;
            // 0x271b1c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b18) {
            ctx->pc = 0x271D18u;
            goto label_271d18;
        }
    }
    ctx->pc = 0x271B20u;
label_271b20:
    // 0x271b20: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x271b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_271b24:
    // 0x271b24: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x271b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_271b28:
    // 0x271b28: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x271b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_271b2c:
    // 0x271b2c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x271b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_271b30:
    // 0x271b30: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x271b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_271b34:
    // 0x271b34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x271b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271b38:
    // 0x271b38: 0xc0a7a88  jal         func_29EA20
label_271b3c:
    if (ctx->pc == 0x271B3Cu) {
        ctx->pc = 0x271B3Cu;
            // 0x271b3c: 0x438818  mult        $s1, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->pc = 0x271B40u;
        goto label_271b40;
    }
    ctx->pc = 0x271B38u;
    SET_GPR_U32(ctx, 31, 0x271B40u);
    ctx->pc = 0x271B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271B38u;
            // 0x271b3c: 0x438818  mult        $s1, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B40u; }
        if (ctx->pc != 0x271B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B40u; }
        if (ctx->pc != 0x271B40u) { return; }
    }
    ctx->pc = 0x271B40u;
label_271b40:
    // 0x271b40: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x271b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_271b44:
    // 0x271b44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x271b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271b48:
    // 0x271b48: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_271b4c:
    if (ctx->pc == 0x271B4Cu) {
        ctx->pc = 0x271B4Cu;
            // 0x271b4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x271B50u;
        goto label_271b50;
    }
    ctx->pc = 0x271B48u;
    {
        const bool branch_taken_0x271b48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B48u;
            // 0x271b4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b48) {
            ctx->pc = 0x271BA0u;
            goto label_271ba0;
        }
    }
    ctx->pc = 0x271B50u;
label_271b50:
    // 0x271b50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x271b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_271b54:
    // 0x271b54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x271b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_271b58:
    // 0x271b58: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x271b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_271b5c:
    // 0x271b5c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x271b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_271b60:
    // 0x271b60: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x271b60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_271b64:
    // 0x271b64: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x271b64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_271b68:
    // 0x271b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271b6c:
    // 0x271b6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x271b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_271b70:
    // 0x271b70: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x271b70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
label_271b74:
    // 0x271b74: 0x2463f2c0  addiu       $v1, $v1, -0xD40
    ctx->pc = 0x271b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963904));
label_271b78:
    // 0x271b78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x271b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_271b7c:
    // 0x271b7c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x271b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_271b80:
    // 0x271b80: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x271b80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_271b84:
    // 0x271b84: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x271b84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_271b88:
    // 0x271b88: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x271b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_271b8c:
    // 0x271b8c: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x271b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_271b90:
    // 0x271b90: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x271b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_271b94:
    // 0x271b94: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x271b94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_271b98:
    // 0x271b98: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x271b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_271b9c:
    // 0x271b9c: 0x0  nop
    ctx->pc = 0x271b9cu;
    // NOP
label_271ba0:
    // 0x271ba0: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x271ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_271ba4:
    // 0x271ba4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x271ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_271ba8:
    // 0x271ba8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x271ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_271bac:
    // 0x271bac: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x271bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_271bb0:
    // 0x271bb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_271bb4:
    if (ctx->pc == 0x271BB4u) {
        ctx->pc = 0x271BB8u;
        goto label_271bb8;
    }
    ctx->pc = 0x271BB0u;
    {
        const bool branch_taken_0x271bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x271bb0) {
            ctx->pc = 0x271BC8u;
            goto label_271bc8;
        }
    }
    ctx->pc = 0x271BB8u;
label_271bb8:
    // 0x271bb8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x271bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_271bbc:
    // 0x271bbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271bc0:
    // 0x271bc0: 0xc0a725c  jal         func_29C970
label_271bc4:
    if (ctx->pc == 0x271BC4u) {
        ctx->pc = 0x271BC4u;
            // 0x271bc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x271BC8u;
        goto label_271bc8;
    }
    ctx->pc = 0x271BC0u;
    SET_GPR_U32(ctx, 31, 0x271BC8u);
    ctx->pc = 0x271BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271BC0u;
            // 0x271bc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271BC8u; }
        if (ctx->pc != 0x271BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271BC8u; }
        if (ctx->pc != 0x271BC8u) { return; }
    }
    ctx->pc = 0x271BC8u;
label_271bc8:
    // 0x271bc8: 0x8e700024  lw          $s0, 0x24($s3)
    ctx->pc = 0x271bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_271bcc:
    // 0x271bcc: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x271bccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_271bd0:
    // 0x271bd0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_271bd4:
    if (ctx->pc == 0x271BD4u) {
        ctx->pc = 0x271BD8u;
        goto label_271bd8;
    }
    ctx->pc = 0x271BD0u;
    {
        const bool branch_taken_0x271bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x271bd0) {
            ctx->pc = 0x271C40u;
            goto label_271c40;
        }
    }
    ctx->pc = 0x271BD8u;
label_271bd8:
    // 0x271bd8: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x271bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_271bdc:
    // 0x271bdc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x271bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_271be0:
    // 0x271be0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x271be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_271be4:
    // 0x271be4: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x271be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_271be8:
    // 0x271be8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_271bec:
    if (ctx->pc == 0x271BECu) {
        ctx->pc = 0x271BF0u;
        goto label_271bf0;
    }
    ctx->pc = 0x271BE8u;
    {
        const bool branch_taken_0x271be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x271be8) {
            ctx->pc = 0x271C08u;
            goto label_271c08;
        }
    }
    ctx->pc = 0x271BF0u;
label_271bf0:
    // 0x271bf0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x271bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_271bf4:
    // 0x271bf4: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x271bf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_271bf8:
    // 0x271bf8: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x271bf8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_271bfc:
    // 0x271bfc: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x271bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_271c00:
    // 0x271c00: 0xc0a725c  jal         func_29C970
label_271c04:
    if (ctx->pc == 0x271C04u) {
        ctx->pc = 0x271C04u;
            // 0x271c04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x271C08u;
        goto label_271c08;
    }
    ctx->pc = 0x271C00u;
    SET_GPR_U32(ctx, 31, 0x271C08u);
    ctx->pc = 0x271C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271C00u;
            // 0x271c04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C08u; }
        if (ctx->pc != 0x271C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C08u; }
        if (ctx->pc != 0x271C08u) { return; }
    }
    ctx->pc = 0x271C08u;
label_271c08:
    // 0x271c08: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x271c08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_271c0c:
    // 0x271c0c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_271c10:
    if (ctx->pc == 0x271C10u) {
        ctx->pc = 0x271C14u;
        goto label_271c14;
    }
    ctx->pc = 0x271C0Cu;
    {
        const bool branch_taken_0x271c0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c0c) {
            ctx->pc = 0x271C40u;
            goto label_271c40;
        }
    }
    ctx->pc = 0x271C14u;
label_271c14:
    // 0x271c14: 0x0  nop
    ctx->pc = 0x271c14u;
    // NOP
label_271c18:
    // 0x271c18: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x271c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_271c1c:
    // 0x271c1c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x271c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_271c20:
    // 0x271c20: 0x9023d060  lbu         $v1, -0x2FA0($at)
    ctx->pc = 0x271c20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294955104)));
label_271c24:
    // 0x271c24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x271c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_271c28:
    // 0x271c28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x271c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_271c2c:
    // 0x271c2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x271c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_271c30:
    // 0x271c30: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x271c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_271c34:
    // 0x271c34: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_271c38:
    if (ctx->pc == 0x271C38u) {
        ctx->pc = 0x271C3Cu;
        goto label_271c3c;
    }
    ctx->pc = 0x271C34u;
    {
        const bool branch_taken_0x271c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271c34) {
            ctx->pc = 0x271C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271c18;
        }
    }
    ctx->pc = 0x271C3Cu;
label_271c3c:
    // 0x271c3c: 0x0  nop
    ctx->pc = 0x271c3cu;
    // NOP
label_271c40:
    // 0x271c40: 0xae710024  sw          $s1, 0x24($s3)
    ctx->pc = 0x271c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 17));
label_271c44:
    // 0x271c44: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x271c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_271c48:
    // 0x271c48: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x271c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_271c4c:
    // 0x271c4c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x271c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_271c50:
    // 0x271c50: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_271c54:
    if (ctx->pc == 0x271C54u) {
        ctx->pc = 0x271C54u;
            // 0x271c54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271C58u;
        goto label_271c58;
    }
    ctx->pc = 0x271C50u;
    {
        const bool branch_taken_0x271c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C50u;
            // 0x271c54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c50) {
            ctx->pc = 0x271D18u;
            goto label_271d18;
        }
    }
    ctx->pc = 0x271C58u;
label_271c58:
    // 0x271c58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x271c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271c5c:
    // 0x271c5c: 0x0  nop
    ctx->pc = 0x271c5cu;
    // NOP
label_271c60:
    // 0x271c60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_271c64:
    // 0x271c64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x271c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_271c68:
    // 0x271c68: 0x922818  mult        $a1, $a0, $s2
    ctx->pc = 0x271c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_271c6c:
    // 0x271c6c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x271c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_271c70:
    // 0x271c70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x271c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_271c74:
    // 0x271c74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x271c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271c78:
    // 0x271c78: 0xc09a8d0  jal         func_26A340
label_271c7c:
    if (ctx->pc == 0x271C7Cu) {
        ctx->pc = 0x271C7Cu;
            // 0x271c7c: 0x658821  addu        $s1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x271C80u;
        goto label_271c80;
    }
    ctx->pc = 0x271C78u;
    SET_GPR_U32(ctx, 31, 0x271C80u);
    ctx->pc = 0x271C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271C78u;
            // 0x271c7c: 0x658821  addu        $s1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A340u;
    if (runtime->hasFunction(0x26A340u)) {
        auto targetFn = runtime->lookupFunction(0x26A340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C80u; }
        if (ctx->pc != 0x271C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A340_0x26a340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C80u; }
        if (ctx->pc != 0x271C80u) { return; }
    }
    ctx->pc = 0x271C80u;
label_271c80:
    // 0x271c80: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x271c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_271c84:
    // 0x271c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271c88:
    // 0x271c88: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x271c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_271c8c:
    // 0x271c8c: 0xc0a8448  jal         func_2A1120
label_271c90:
    if (ctx->pc == 0x271C90u) {
        ctx->pc = 0x271C90u;
            // 0x271c90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271C94u;
        goto label_271c94;
    }
    ctx->pc = 0x271C8Cu;
    SET_GPR_U32(ctx, 31, 0x271C94u);
    ctx->pc = 0x271C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271C8Cu;
            // 0x271c90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C94u; }
        if (ctx->pc != 0x271C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C94u; }
        if (ctx->pc != 0x271C94u) { return; }
    }
    ctx->pc = 0x271C94u;
label_271c94:
    // 0x271c94: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_271c98:
    if (ctx->pc == 0x271C98u) {
        ctx->pc = 0x271C9Cu;
        goto label_271c9c;
    }
    ctx->pc = 0x271C94u;
    {
        const bool branch_taken_0x271c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c94) {
            ctx->pc = 0x271CB0u;
            goto label_271cb0;
        }
    }
    ctx->pc = 0x271C9Cu;
label_271c9c:
    // 0x271c9c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x271c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_271ca0:
    // 0x271ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271ca4:
    // 0x271ca4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x271ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_271ca8:
    // 0x271ca8: 0x320f809  jalr        $t9
label_271cac:
    if (ctx->pc == 0x271CACu) {
        ctx->pc = 0x271CACu;
            // 0x271cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x271CB0u;
        goto label_271cb0;
    }
    ctx->pc = 0x271CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271CB0u);
        ctx->pc = 0x271CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CA8u;
            // 0x271cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271CB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271CB0u; }
            if (ctx->pc != 0x271CB0u) { return; }
        }
        }
    }
    ctx->pc = 0x271CB0u;
label_271cb0:
    // 0x271cb0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x271cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_271cb4:
    // 0x271cb4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x271cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_271cb8:
    // 0x271cb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x271cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_271cbc:
    // 0x271cbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x271cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271cc0:
    // 0x271cc0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x271cc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_271cc4:
    // 0x271cc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_271cc8:
    if (ctx->pc == 0x271CC8u) {
        ctx->pc = 0x271CCCu;
        goto label_271ccc;
    }
    ctx->pc = 0x271CC4u;
    {
        const bool branch_taken_0x271cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271cc4) {
            ctx->pc = 0x271D00u;
            goto label_271d00;
        }
    }
    ctx->pc = 0x271CCCu;
label_271ccc:
    // 0x271ccc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x271cccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_271cd0:
    // 0x271cd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x271cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_271cd4:
    // 0x271cd4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x271cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_271cd8:
    // 0x271cd8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x271cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_271cdc:
    // 0x271cdc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_271ce0:
    if (ctx->pc == 0x271CE0u) {
        ctx->pc = 0x271CE4u;
        goto label_271ce4;
    }
    ctx->pc = 0x271CDCu;
    {
        const bool branch_taken_0x271cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271cdc) {
            ctx->pc = 0x271D00u;
            goto label_271d00;
        }
    }
    ctx->pc = 0x271CE4u;
label_271ce4:
    // 0x271ce4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_271ce8:
    if (ctx->pc == 0x271CE8u) {
        ctx->pc = 0x271CECu;
        goto label_271cec;
    }
    ctx->pc = 0x271CE4u;
    {
        const bool branch_taken_0x271ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ce4) {
            ctx->pc = 0x271D00u;
            goto label_271d00;
        }
    }
    ctx->pc = 0x271CECu;
label_271cec:
    // 0x271cec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x271cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_271cf0:
    // 0x271cf0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x271cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_271cf4:
    // 0x271cf4: 0x320f809  jalr        $t9
label_271cf8:
    if (ctx->pc == 0x271CF8u) {
        ctx->pc = 0x271CF8u;
            // 0x271cf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x271CFCu;
        goto label_271cfc;
    }
    ctx->pc = 0x271CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271CFCu);
        ctx->pc = 0x271CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CF4u;
            // 0x271cf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271CFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271CFCu; }
            if (ctx->pc != 0x271CFCu) { return; }
        }
        }
    }
    ctx->pc = 0x271CFCu;
label_271cfc:
    // 0x271cfc: 0x0  nop
    ctx->pc = 0x271cfcu;
    // NOP
label_271d00:
    // 0x271d00: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x271d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_271d04:
    // 0x271d04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x271d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_271d08:
    // 0x271d08: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x271d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_271d0c:
    // 0x271d0c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x271d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_271d10:
    // 0x271d10: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_271d14:
    if (ctx->pc == 0x271D14u) {
        ctx->pc = 0x271D14u;
            // 0x271d14: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x271D18u;
        goto label_271d18;
    }
    ctx->pc = 0x271D10u;
    {
        const bool branch_taken_0x271d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D10u;
            // 0x271d14: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d10) {
            ctx->pc = 0x271C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271c60;
        }
    }
    ctx->pc = 0x271D18u;
label_271d18:
    // 0x271d18: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x271d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_271d1c:
    // 0x271d1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x271d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271d20:
    // 0x271d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271d24:
    // 0x271d24: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x271d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_271d28:
    // 0x271d28: 0x320f809  jalr        $t9
label_271d2c:
    if (ctx->pc == 0x271D2Cu) {
        ctx->pc = 0x271D2Cu;
            // 0x271d2c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x271D30u;
        goto label_271d30;
    }
    ctx->pc = 0x271D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271D30u);
        ctx->pc = 0x271D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D28u;
            // 0x271d2c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271D30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271D30u; }
            if (ctx->pc != 0x271D30u) { return; }
        }
        }
    }
    ctx->pc = 0x271D30u;
label_271d30:
    // 0x271d30: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x271d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_271d34:
    // 0x271d34: 0xc09aa74  jal         func_26A9D0
label_271d38:
    if (ctx->pc == 0x271D38u) {
        ctx->pc = 0x271D38u;
            // 0x271d38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x271D3Cu;
        goto label_271d3c;
    }
    ctx->pc = 0x271D34u;
    SET_GPR_U32(ctx, 31, 0x271D3Cu);
    ctx->pc = 0x271D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271D34u;
            // 0x271d38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A9D0u;
    if (runtime->hasFunction(0x26A9D0u)) {
        auto targetFn = runtime->lookupFunction(0x26A9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D3Cu; }
        if (ctx->pc != 0x271D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A9D0_0x26a9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D3Cu; }
        if (ctx->pc != 0x271D3Cu) { return; }
    }
    ctx->pc = 0x271D3Cu;
label_271d3c:
    // 0x271d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x271d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_271d40:
    // 0x271d40: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x271d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_271d44:
    // 0x271d44: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x271d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_271d48:
    // 0x271d48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x271d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_271d4c:
    // 0x271d4c: 0xc09a888  jal         func_26A220
label_271d50:
    if (ctx->pc == 0x271D50u) {
        ctx->pc = 0x271D50u;
            // 0x271d50: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->pc = 0x271D54u;
        goto label_271d54;
    }
    ctx->pc = 0x271D4Cu;
    SET_GPR_U32(ctx, 31, 0x271D54u);
    ctx->pc = 0x271D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271D4Cu;
            // 0x271d50: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A220u;
    if (runtime->hasFunction(0x26A220u)) {
        auto targetFn = runtime->lookupFunction(0x26A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D54u; }
        if (ctx->pc != 0x271D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A220_0x26a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D54u; }
        if (ctx->pc != 0x271D54u) { return; }
    }
    ctx->pc = 0x271D54u;
label_271d54:
    // 0x271d54: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x271d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271d58:
    // 0x271d58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x271d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_271d5c:
    // 0x271d5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x271d5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_271d60:
    // 0x271d60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x271d60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_271d64:
    // 0x271d64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x271d64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_271d68:
    // 0x271d68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x271d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_271d6c:
    // 0x271d6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_271d70:
    // 0x271d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_271d74:
    // 0x271d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_271d78:
    // 0x271d78: 0x3e00008  jr          $ra
label_271d7c:
    if (ctx->pc == 0x271D7Cu) {
        ctx->pc = 0x271D7Cu;
            // 0x271d7c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x271D80u;
        goto label_271d80;
    }
    ctx->pc = 0x271D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D78u;
            // 0x271d7c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271D80u;
label_271d80:
    // 0x271d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_271d84:
    // 0x271d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_271d88:
    // 0x271d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_271d8c:
    // 0x271d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x271d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271d90:
    // 0x271d90: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_271d94:
    if (ctx->pc == 0x271D94u) {
        ctx->pc = 0x271D94u;
            // 0x271d94: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->pc = 0x271D98u;
        goto label_271d98;
    }
    ctx->pc = 0x271D90u;
    {
        const bool branch_taken_0x271d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D90u;
            // 0x271d94: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d90) {
            ctx->pc = 0x271DE8u;
            goto label_271de8;
        }
    }
    ctx->pc = 0x271D98u;
label_271d98:
    // 0x271d98: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x271d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
label_271d9c:
    // 0x271d9c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_271da0:
    if (ctx->pc == 0x271DA0u) {
        ctx->pc = 0x271DA0u;
            // 0x271da0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x271DA4u;
        goto label_271da4;
    }
    ctx->pc = 0x271D9Cu;
    {
        const bool branch_taken_0x271d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D9Cu;
            // 0x271da0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d9c) {
            ctx->pc = 0x271DC0u;
            goto label_271dc0;
        }
    }
    ctx->pc = 0x271DA4u;
label_271da4:
    // 0x271da4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x271da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_271da8:
    // 0x271da8: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x271da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_271dac:
    // 0x271dac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_271db0:
    if (ctx->pc == 0x271DB0u) {
        ctx->pc = 0x271DB0u;
            // 0x271db0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x271DB4u;
        goto label_271db4;
    }
    ctx->pc = 0x271DACu;
    {
        const bool branch_taken_0x271dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271DACu;
            // 0x271db0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dac) {
            ctx->pc = 0x271DC0u;
            goto label_271dc0;
        }
    }
    ctx->pc = 0x271DB4u;
label_271db4:
    // 0x271db4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x271db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_271db8:
    // 0x271db8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x271db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_271dbc:
    // 0x271dbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x271dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_271dc0:
    // 0x271dc0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x271dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_271dc4:
    // 0x271dc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x271dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_271dc8:
    // 0x271dc8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_271dcc:
    if (ctx->pc == 0x271DCCu) {
        ctx->pc = 0x271DCCu;
            // 0x271dcc: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x271DD0u;
        goto label_271dd0;
    }
    ctx->pc = 0x271DC8u;
    {
        const bool branch_taken_0x271dc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x271DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271DC8u;
            // 0x271dcc: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dc8) {
            ctx->pc = 0x271DE8u;
            goto label_271de8;
        }
    }
    ctx->pc = 0x271DD0u;
label_271dd0:
    // 0x271dd0: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x271dd0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_271dd4:
    // 0x271dd4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_271dd8:
    // 0x271dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x271dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271ddc:
    // 0x271ddc: 0xc0a7ab4  jal         func_29EAD0
label_271de0:
    if (ctx->pc == 0x271DE0u) {
        ctx->pc = 0x271DE0u;
            // 0x271de0: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x271DE4u;
        goto label_271de4;
    }
    ctx->pc = 0x271DDCu;
    SET_GPR_U32(ctx, 31, 0x271DE4u);
    ctx->pc = 0x271DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271DDCu;
            // 0x271de0: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DE4u; }
        if (ctx->pc != 0x271DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DE4u; }
        if (ctx->pc != 0x271DE4u) { return; }
    }
    ctx->pc = 0x271DE4u;
label_271de4:
    // 0x271de4: 0x0  nop
    ctx->pc = 0x271de4u;
    // NOP
label_271de8:
    // 0x271de8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x271de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271dec:
    // 0x271dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_271df0:
    // 0x271df0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_271df4:
    // 0x271df4: 0x3e00008  jr          $ra
label_271df8:
    if (ctx->pc == 0x271DF8u) {
        ctx->pc = 0x271DF8u;
            // 0x271df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x271DFCu;
        goto label_271dfc;
    }
    ctx->pc = 0x271DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271DF4u;
            // 0x271df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271DFCu;
label_271dfc:
    // 0x271dfc: 0x0  nop
    ctx->pc = 0x271dfcu;
    // NOP
}
