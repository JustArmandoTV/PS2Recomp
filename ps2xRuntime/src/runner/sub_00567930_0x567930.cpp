#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00567930
// Address: 0x567930 - 0x567da0
void sub_00567930_0x567930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00567930_0x567930");
#endif

    switch (ctx->pc) {
        case 0x567930u: goto label_567930;
        case 0x567934u: goto label_567934;
        case 0x567938u: goto label_567938;
        case 0x56793cu: goto label_56793c;
        case 0x567940u: goto label_567940;
        case 0x567944u: goto label_567944;
        case 0x567948u: goto label_567948;
        case 0x56794cu: goto label_56794c;
        case 0x567950u: goto label_567950;
        case 0x567954u: goto label_567954;
        case 0x567958u: goto label_567958;
        case 0x56795cu: goto label_56795c;
        case 0x567960u: goto label_567960;
        case 0x567964u: goto label_567964;
        case 0x567968u: goto label_567968;
        case 0x56796cu: goto label_56796c;
        case 0x567970u: goto label_567970;
        case 0x567974u: goto label_567974;
        case 0x567978u: goto label_567978;
        case 0x56797cu: goto label_56797c;
        case 0x567980u: goto label_567980;
        case 0x567984u: goto label_567984;
        case 0x567988u: goto label_567988;
        case 0x56798cu: goto label_56798c;
        case 0x567990u: goto label_567990;
        case 0x567994u: goto label_567994;
        case 0x567998u: goto label_567998;
        case 0x56799cu: goto label_56799c;
        case 0x5679a0u: goto label_5679a0;
        case 0x5679a4u: goto label_5679a4;
        case 0x5679a8u: goto label_5679a8;
        case 0x5679acu: goto label_5679ac;
        case 0x5679b0u: goto label_5679b0;
        case 0x5679b4u: goto label_5679b4;
        case 0x5679b8u: goto label_5679b8;
        case 0x5679bcu: goto label_5679bc;
        case 0x5679c0u: goto label_5679c0;
        case 0x5679c4u: goto label_5679c4;
        case 0x5679c8u: goto label_5679c8;
        case 0x5679ccu: goto label_5679cc;
        case 0x5679d0u: goto label_5679d0;
        case 0x5679d4u: goto label_5679d4;
        case 0x5679d8u: goto label_5679d8;
        case 0x5679dcu: goto label_5679dc;
        case 0x5679e0u: goto label_5679e0;
        case 0x5679e4u: goto label_5679e4;
        case 0x5679e8u: goto label_5679e8;
        case 0x5679ecu: goto label_5679ec;
        case 0x5679f0u: goto label_5679f0;
        case 0x5679f4u: goto label_5679f4;
        case 0x5679f8u: goto label_5679f8;
        case 0x5679fcu: goto label_5679fc;
        case 0x567a00u: goto label_567a00;
        case 0x567a04u: goto label_567a04;
        case 0x567a08u: goto label_567a08;
        case 0x567a0cu: goto label_567a0c;
        case 0x567a10u: goto label_567a10;
        case 0x567a14u: goto label_567a14;
        case 0x567a18u: goto label_567a18;
        case 0x567a1cu: goto label_567a1c;
        case 0x567a20u: goto label_567a20;
        case 0x567a24u: goto label_567a24;
        case 0x567a28u: goto label_567a28;
        case 0x567a2cu: goto label_567a2c;
        case 0x567a30u: goto label_567a30;
        case 0x567a34u: goto label_567a34;
        case 0x567a38u: goto label_567a38;
        case 0x567a3cu: goto label_567a3c;
        case 0x567a40u: goto label_567a40;
        case 0x567a44u: goto label_567a44;
        case 0x567a48u: goto label_567a48;
        case 0x567a4cu: goto label_567a4c;
        case 0x567a50u: goto label_567a50;
        case 0x567a54u: goto label_567a54;
        case 0x567a58u: goto label_567a58;
        case 0x567a5cu: goto label_567a5c;
        case 0x567a60u: goto label_567a60;
        case 0x567a64u: goto label_567a64;
        case 0x567a68u: goto label_567a68;
        case 0x567a6cu: goto label_567a6c;
        case 0x567a70u: goto label_567a70;
        case 0x567a74u: goto label_567a74;
        case 0x567a78u: goto label_567a78;
        case 0x567a7cu: goto label_567a7c;
        case 0x567a80u: goto label_567a80;
        case 0x567a84u: goto label_567a84;
        case 0x567a88u: goto label_567a88;
        case 0x567a8cu: goto label_567a8c;
        case 0x567a90u: goto label_567a90;
        case 0x567a94u: goto label_567a94;
        case 0x567a98u: goto label_567a98;
        case 0x567a9cu: goto label_567a9c;
        case 0x567aa0u: goto label_567aa0;
        case 0x567aa4u: goto label_567aa4;
        case 0x567aa8u: goto label_567aa8;
        case 0x567aacu: goto label_567aac;
        case 0x567ab0u: goto label_567ab0;
        case 0x567ab4u: goto label_567ab4;
        case 0x567ab8u: goto label_567ab8;
        case 0x567abcu: goto label_567abc;
        case 0x567ac0u: goto label_567ac0;
        case 0x567ac4u: goto label_567ac4;
        case 0x567ac8u: goto label_567ac8;
        case 0x567accu: goto label_567acc;
        case 0x567ad0u: goto label_567ad0;
        case 0x567ad4u: goto label_567ad4;
        case 0x567ad8u: goto label_567ad8;
        case 0x567adcu: goto label_567adc;
        case 0x567ae0u: goto label_567ae0;
        case 0x567ae4u: goto label_567ae4;
        case 0x567ae8u: goto label_567ae8;
        case 0x567aecu: goto label_567aec;
        case 0x567af0u: goto label_567af0;
        case 0x567af4u: goto label_567af4;
        case 0x567af8u: goto label_567af8;
        case 0x567afcu: goto label_567afc;
        case 0x567b00u: goto label_567b00;
        case 0x567b04u: goto label_567b04;
        case 0x567b08u: goto label_567b08;
        case 0x567b0cu: goto label_567b0c;
        case 0x567b10u: goto label_567b10;
        case 0x567b14u: goto label_567b14;
        case 0x567b18u: goto label_567b18;
        case 0x567b1cu: goto label_567b1c;
        case 0x567b20u: goto label_567b20;
        case 0x567b24u: goto label_567b24;
        case 0x567b28u: goto label_567b28;
        case 0x567b2cu: goto label_567b2c;
        case 0x567b30u: goto label_567b30;
        case 0x567b34u: goto label_567b34;
        case 0x567b38u: goto label_567b38;
        case 0x567b3cu: goto label_567b3c;
        case 0x567b40u: goto label_567b40;
        case 0x567b44u: goto label_567b44;
        case 0x567b48u: goto label_567b48;
        case 0x567b4cu: goto label_567b4c;
        case 0x567b50u: goto label_567b50;
        case 0x567b54u: goto label_567b54;
        case 0x567b58u: goto label_567b58;
        case 0x567b5cu: goto label_567b5c;
        case 0x567b60u: goto label_567b60;
        case 0x567b64u: goto label_567b64;
        case 0x567b68u: goto label_567b68;
        case 0x567b6cu: goto label_567b6c;
        case 0x567b70u: goto label_567b70;
        case 0x567b74u: goto label_567b74;
        case 0x567b78u: goto label_567b78;
        case 0x567b7cu: goto label_567b7c;
        case 0x567b80u: goto label_567b80;
        case 0x567b84u: goto label_567b84;
        case 0x567b88u: goto label_567b88;
        case 0x567b8cu: goto label_567b8c;
        case 0x567b90u: goto label_567b90;
        case 0x567b94u: goto label_567b94;
        case 0x567b98u: goto label_567b98;
        case 0x567b9cu: goto label_567b9c;
        case 0x567ba0u: goto label_567ba0;
        case 0x567ba4u: goto label_567ba4;
        case 0x567ba8u: goto label_567ba8;
        case 0x567bacu: goto label_567bac;
        case 0x567bb0u: goto label_567bb0;
        case 0x567bb4u: goto label_567bb4;
        case 0x567bb8u: goto label_567bb8;
        case 0x567bbcu: goto label_567bbc;
        case 0x567bc0u: goto label_567bc0;
        case 0x567bc4u: goto label_567bc4;
        case 0x567bc8u: goto label_567bc8;
        case 0x567bccu: goto label_567bcc;
        case 0x567bd0u: goto label_567bd0;
        case 0x567bd4u: goto label_567bd4;
        case 0x567bd8u: goto label_567bd8;
        case 0x567bdcu: goto label_567bdc;
        case 0x567be0u: goto label_567be0;
        case 0x567be4u: goto label_567be4;
        case 0x567be8u: goto label_567be8;
        case 0x567becu: goto label_567bec;
        case 0x567bf0u: goto label_567bf0;
        case 0x567bf4u: goto label_567bf4;
        case 0x567bf8u: goto label_567bf8;
        case 0x567bfcu: goto label_567bfc;
        case 0x567c00u: goto label_567c00;
        case 0x567c04u: goto label_567c04;
        case 0x567c08u: goto label_567c08;
        case 0x567c0cu: goto label_567c0c;
        case 0x567c10u: goto label_567c10;
        case 0x567c14u: goto label_567c14;
        case 0x567c18u: goto label_567c18;
        case 0x567c1cu: goto label_567c1c;
        case 0x567c20u: goto label_567c20;
        case 0x567c24u: goto label_567c24;
        case 0x567c28u: goto label_567c28;
        case 0x567c2cu: goto label_567c2c;
        case 0x567c30u: goto label_567c30;
        case 0x567c34u: goto label_567c34;
        case 0x567c38u: goto label_567c38;
        case 0x567c3cu: goto label_567c3c;
        case 0x567c40u: goto label_567c40;
        case 0x567c44u: goto label_567c44;
        case 0x567c48u: goto label_567c48;
        case 0x567c4cu: goto label_567c4c;
        case 0x567c50u: goto label_567c50;
        case 0x567c54u: goto label_567c54;
        case 0x567c58u: goto label_567c58;
        case 0x567c5cu: goto label_567c5c;
        case 0x567c60u: goto label_567c60;
        case 0x567c64u: goto label_567c64;
        case 0x567c68u: goto label_567c68;
        case 0x567c6cu: goto label_567c6c;
        case 0x567c70u: goto label_567c70;
        case 0x567c74u: goto label_567c74;
        case 0x567c78u: goto label_567c78;
        case 0x567c7cu: goto label_567c7c;
        case 0x567c80u: goto label_567c80;
        case 0x567c84u: goto label_567c84;
        case 0x567c88u: goto label_567c88;
        case 0x567c8cu: goto label_567c8c;
        case 0x567c90u: goto label_567c90;
        case 0x567c94u: goto label_567c94;
        case 0x567c98u: goto label_567c98;
        case 0x567c9cu: goto label_567c9c;
        case 0x567ca0u: goto label_567ca0;
        case 0x567ca4u: goto label_567ca4;
        case 0x567ca8u: goto label_567ca8;
        case 0x567cacu: goto label_567cac;
        case 0x567cb0u: goto label_567cb0;
        case 0x567cb4u: goto label_567cb4;
        case 0x567cb8u: goto label_567cb8;
        case 0x567cbcu: goto label_567cbc;
        case 0x567cc0u: goto label_567cc0;
        case 0x567cc4u: goto label_567cc4;
        case 0x567cc8u: goto label_567cc8;
        case 0x567cccu: goto label_567ccc;
        case 0x567cd0u: goto label_567cd0;
        case 0x567cd4u: goto label_567cd4;
        case 0x567cd8u: goto label_567cd8;
        case 0x567cdcu: goto label_567cdc;
        case 0x567ce0u: goto label_567ce0;
        case 0x567ce4u: goto label_567ce4;
        case 0x567ce8u: goto label_567ce8;
        case 0x567cecu: goto label_567cec;
        case 0x567cf0u: goto label_567cf0;
        case 0x567cf4u: goto label_567cf4;
        case 0x567cf8u: goto label_567cf8;
        case 0x567cfcu: goto label_567cfc;
        case 0x567d00u: goto label_567d00;
        case 0x567d04u: goto label_567d04;
        case 0x567d08u: goto label_567d08;
        case 0x567d0cu: goto label_567d0c;
        case 0x567d10u: goto label_567d10;
        case 0x567d14u: goto label_567d14;
        case 0x567d18u: goto label_567d18;
        case 0x567d1cu: goto label_567d1c;
        case 0x567d20u: goto label_567d20;
        case 0x567d24u: goto label_567d24;
        case 0x567d28u: goto label_567d28;
        case 0x567d2cu: goto label_567d2c;
        case 0x567d30u: goto label_567d30;
        case 0x567d34u: goto label_567d34;
        case 0x567d38u: goto label_567d38;
        case 0x567d3cu: goto label_567d3c;
        case 0x567d40u: goto label_567d40;
        case 0x567d44u: goto label_567d44;
        case 0x567d48u: goto label_567d48;
        case 0x567d4cu: goto label_567d4c;
        case 0x567d50u: goto label_567d50;
        case 0x567d54u: goto label_567d54;
        case 0x567d58u: goto label_567d58;
        case 0x567d5cu: goto label_567d5c;
        case 0x567d60u: goto label_567d60;
        case 0x567d64u: goto label_567d64;
        case 0x567d68u: goto label_567d68;
        case 0x567d6cu: goto label_567d6c;
        case 0x567d70u: goto label_567d70;
        case 0x567d74u: goto label_567d74;
        case 0x567d78u: goto label_567d78;
        case 0x567d7cu: goto label_567d7c;
        case 0x567d80u: goto label_567d80;
        case 0x567d84u: goto label_567d84;
        case 0x567d88u: goto label_567d88;
        case 0x567d8cu: goto label_567d8c;
        case 0x567d90u: goto label_567d90;
        case 0x567d94u: goto label_567d94;
        case 0x567d98u: goto label_567d98;
        case 0x567d9cu: goto label_567d9c;
        default: break;
    }

    ctx->pc = 0x567930u;

label_567930:
    // 0x567930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x567930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_567934:
    // 0x567934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x567934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_567938:
    // 0x567938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x567938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56793c:
    // 0x56793c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_567940:
    // 0x567940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x567940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_567944:
    // 0x567944: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_567948:
    if (ctx->pc == 0x567948u) {
        ctx->pc = 0x567948u;
            // 0x567948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56794Cu;
        goto label_56794c;
    }
    ctx->pc = 0x567944u;
    {
        const bool branch_taken_0x567944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x567948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567944u;
            // 0x567948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567944) {
            ctx->pc = 0x567A78u;
            goto label_567a78;
        }
    }
    ctx->pc = 0x56794Cu;
label_56794c:
    // 0x56794c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56794cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_567950:
    // 0x567950: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x567950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_567954:
    // 0x567954: 0x24638110  addiu       $v1, $v1, -0x7EF0
    ctx->pc = 0x567954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934800));
label_567958:
    // 0x567958: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x567958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_56795c:
    // 0x56795c: 0x24428148  addiu       $v0, $v0, -0x7EB8
    ctx->pc = 0x56795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934856));
label_567960:
    // 0x567960: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x567960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_567964:
    // 0x567964: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x567964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_567968:
    // 0x567968: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x567968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_56796c:
    // 0x56796c: 0xc0407c0  jal         func_101F00
label_567970:
    if (ctx->pc == 0x567970u) {
        ctx->pc = 0x567970u;
            // 0x567970: 0x24a55b00  addiu       $a1, $a1, 0x5B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
        ctx->pc = 0x567974u;
        goto label_567974;
    }
    ctx->pc = 0x56796Cu;
    SET_GPR_U32(ctx, 31, 0x567974u);
    ctx->pc = 0x567970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56796Cu;
            // 0x567970: 0x24a55b00  addiu       $a1, $a1, 0x5B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567974u; }
        if (ctx->pc != 0x567974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567974u; }
        if (ctx->pc != 0x567974u) { return; }
    }
    ctx->pc = 0x567974u;
label_567974:
    // 0x567974: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x567974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_567978:
    // 0x567978: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_56797c:
    if (ctx->pc == 0x56797Cu) {
        ctx->pc = 0x56797Cu;
            // 0x56797c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x567980u;
        goto label_567980;
    }
    ctx->pc = 0x567978u;
    {
        const bool branch_taken_0x567978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x567978) {
            ctx->pc = 0x56797Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567978u;
            // 0x56797c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56798Cu;
            goto label_56798c;
        }
    }
    ctx->pc = 0x567980u;
label_567980:
    // 0x567980: 0xc07507c  jal         func_1D41F0
label_567984:
    if (ctx->pc == 0x567984u) {
        ctx->pc = 0x567984u;
            // 0x567984: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x567988u;
        goto label_567988;
    }
    ctx->pc = 0x567980u;
    SET_GPR_U32(ctx, 31, 0x567988u);
    ctx->pc = 0x567984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567980u;
            // 0x567984: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567988u; }
        if (ctx->pc != 0x567988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567988u; }
        if (ctx->pc != 0x567988u) { return; }
    }
    ctx->pc = 0x567988u;
label_567988:
    // 0x567988: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x567988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_56798c:
    // 0x56798c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_567990:
    if (ctx->pc == 0x567990u) {
        ctx->pc = 0x567990u;
            // 0x567990: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x567994u;
        goto label_567994;
    }
    ctx->pc = 0x56798Cu;
    {
        const bool branch_taken_0x56798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x56798c) {
            ctx->pc = 0x567990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56798Cu;
            // 0x567990: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5679BCu;
            goto label_5679bc;
        }
    }
    ctx->pc = 0x567994u;
label_567994:
    // 0x567994: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_567998:
    if (ctx->pc == 0x567998u) {
        ctx->pc = 0x56799Cu;
        goto label_56799c;
    }
    ctx->pc = 0x567994u;
    {
        const bool branch_taken_0x567994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x567994) {
            ctx->pc = 0x5679B8u;
            goto label_5679b8;
        }
    }
    ctx->pc = 0x56799Cu;
label_56799c:
    // 0x56799c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5679a0:
    if (ctx->pc == 0x5679A0u) {
        ctx->pc = 0x5679A4u;
        goto label_5679a4;
    }
    ctx->pc = 0x56799Cu;
    {
        const bool branch_taken_0x56799c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x56799c) {
            ctx->pc = 0x5679B8u;
            goto label_5679b8;
        }
    }
    ctx->pc = 0x5679A4u;
label_5679a4:
    // 0x5679a4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x5679a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_5679a8:
    // 0x5679a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_5679ac:
    if (ctx->pc == 0x5679ACu) {
        ctx->pc = 0x5679B0u;
        goto label_5679b0;
    }
    ctx->pc = 0x5679A8u;
    {
        const bool branch_taken_0x5679a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5679a8) {
            ctx->pc = 0x5679B8u;
            goto label_5679b8;
        }
    }
    ctx->pc = 0x5679B0u;
label_5679b0:
    // 0x5679b0: 0xc0400a8  jal         func_1002A0
label_5679b4:
    if (ctx->pc == 0x5679B4u) {
        ctx->pc = 0x5679B8u;
        goto label_5679b8;
    }
    ctx->pc = 0x5679B0u;
    SET_GPR_U32(ctx, 31, 0x5679B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5679B8u; }
        if (ctx->pc != 0x5679B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5679B8u; }
        if (ctx->pc != 0x5679B8u) { return; }
    }
    ctx->pc = 0x5679B8u;
label_5679b8:
    // 0x5679b8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x5679b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_5679bc:
    // 0x5679bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_5679c0:
    if (ctx->pc == 0x5679C0u) {
        ctx->pc = 0x5679C0u;
            // 0x5679c0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x5679C4u;
        goto label_5679c4;
    }
    ctx->pc = 0x5679BCu;
    {
        const bool branch_taken_0x5679bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5679bc) {
            ctx->pc = 0x5679C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5679BCu;
            // 0x5679c0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5679ECu;
            goto label_5679ec;
        }
    }
    ctx->pc = 0x5679C4u;
label_5679c4:
    // 0x5679c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_5679c8:
    if (ctx->pc == 0x5679C8u) {
        ctx->pc = 0x5679CCu;
        goto label_5679cc;
    }
    ctx->pc = 0x5679C4u;
    {
        const bool branch_taken_0x5679c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5679c4) {
            ctx->pc = 0x5679E8u;
            goto label_5679e8;
        }
    }
    ctx->pc = 0x5679CCu;
label_5679cc:
    // 0x5679cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5679d0:
    if (ctx->pc == 0x5679D0u) {
        ctx->pc = 0x5679D4u;
        goto label_5679d4;
    }
    ctx->pc = 0x5679CCu;
    {
        const bool branch_taken_0x5679cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5679cc) {
            ctx->pc = 0x5679E8u;
            goto label_5679e8;
        }
    }
    ctx->pc = 0x5679D4u;
label_5679d4:
    // 0x5679d4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x5679d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_5679d8:
    // 0x5679d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_5679dc:
    if (ctx->pc == 0x5679DCu) {
        ctx->pc = 0x5679E0u;
        goto label_5679e0;
    }
    ctx->pc = 0x5679D8u;
    {
        const bool branch_taken_0x5679d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5679d8) {
            ctx->pc = 0x5679E8u;
            goto label_5679e8;
        }
    }
    ctx->pc = 0x5679E0u;
label_5679e0:
    // 0x5679e0: 0xc0400a8  jal         func_1002A0
label_5679e4:
    if (ctx->pc == 0x5679E4u) {
        ctx->pc = 0x5679E8u;
        goto label_5679e8;
    }
    ctx->pc = 0x5679E0u;
    SET_GPR_U32(ctx, 31, 0x5679E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5679E8u; }
        if (ctx->pc != 0x5679E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5679E8u; }
        if (ctx->pc != 0x5679E8u) { return; }
    }
    ctx->pc = 0x5679E8u;
label_5679e8:
    // 0x5679e8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x5679e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_5679ec:
    // 0x5679ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5679f0:
    if (ctx->pc == 0x5679F0u) {
        ctx->pc = 0x5679F4u;
        goto label_5679f4;
    }
    ctx->pc = 0x5679ECu;
    {
        const bool branch_taken_0x5679ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5679ec) {
            ctx->pc = 0x567A08u;
            goto label_567a08;
        }
    }
    ctx->pc = 0x5679F4u;
label_5679f4:
    // 0x5679f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5679f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5679f8:
    // 0x5679f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5679f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5679fc:
    // 0x5679fc: 0x246380f8  addiu       $v1, $v1, -0x7F08
    ctx->pc = 0x5679fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934776));
label_567a00:
    // 0x567a00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x567a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_567a04:
    // 0x567a04: 0xac403e98  sw          $zero, 0x3E98($v0)
    ctx->pc = 0x567a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16024), GPR_U32(ctx, 0));
label_567a08:
    // 0x567a08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_567a0c:
    if (ctx->pc == 0x567A0Cu) {
        ctx->pc = 0x567A0Cu;
            // 0x567a0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x567A10u;
        goto label_567a10;
    }
    ctx->pc = 0x567A08u;
    {
        const bool branch_taken_0x567a08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x567a08) {
            ctx->pc = 0x567A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567A08u;
            // 0x567a0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567A64u;
            goto label_567a64;
        }
    }
    ctx->pc = 0x567A10u;
label_567a10:
    // 0x567a10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x567a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_567a14:
    // 0x567a14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x567a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_567a18:
    // 0x567a18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x567a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_567a1c:
    // 0x567a1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x567a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_567a20:
    // 0x567a20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_567a24:
    if (ctx->pc == 0x567A24u) {
        ctx->pc = 0x567A24u;
            // 0x567a24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x567A28u;
        goto label_567a28;
    }
    ctx->pc = 0x567A20u;
    {
        const bool branch_taken_0x567a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x567a20) {
            ctx->pc = 0x567A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567A20u;
            // 0x567a24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567A3Cu;
            goto label_567a3c;
        }
    }
    ctx->pc = 0x567A28u;
label_567a28:
    // 0x567a28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x567a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_567a2c:
    // 0x567a2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x567a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_567a30:
    // 0x567a30: 0x320f809  jalr        $t9
label_567a34:
    if (ctx->pc == 0x567A34u) {
        ctx->pc = 0x567A34u;
            // 0x567a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x567A38u;
        goto label_567a38;
    }
    ctx->pc = 0x567A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x567A38u);
        ctx->pc = 0x567A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567A30u;
            // 0x567a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x567A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x567A38u; }
            if (ctx->pc != 0x567A38u) { return; }
        }
        }
    }
    ctx->pc = 0x567A38u;
label_567a38:
    // 0x567a38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x567a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_567a3c:
    // 0x567a3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_567a40:
    if (ctx->pc == 0x567A40u) {
        ctx->pc = 0x567A40u;
            // 0x567a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567A44u;
        goto label_567a44;
    }
    ctx->pc = 0x567A3Cu;
    {
        const bool branch_taken_0x567a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x567a3c) {
            ctx->pc = 0x567A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567A3Cu;
            // 0x567a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567A58u;
            goto label_567a58;
        }
    }
    ctx->pc = 0x567A44u;
label_567a44:
    // 0x567a44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x567a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_567a48:
    // 0x567a48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x567a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_567a4c:
    // 0x567a4c: 0x320f809  jalr        $t9
label_567a50:
    if (ctx->pc == 0x567A50u) {
        ctx->pc = 0x567A50u;
            // 0x567a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x567A54u;
        goto label_567a54;
    }
    ctx->pc = 0x567A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x567A54u);
        ctx->pc = 0x567A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567A4Cu;
            // 0x567a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x567A54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x567A54u; }
            if (ctx->pc != 0x567A54u) { return; }
        }
        }
    }
    ctx->pc = 0x567A54u;
label_567a54:
    // 0x567a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x567a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_567a58:
    // 0x567a58: 0xc075bf8  jal         func_1D6FE0
label_567a5c:
    if (ctx->pc == 0x567A5Cu) {
        ctx->pc = 0x567A5Cu;
            // 0x567a5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567A60u;
        goto label_567a60;
    }
    ctx->pc = 0x567A58u;
    SET_GPR_U32(ctx, 31, 0x567A60u);
    ctx->pc = 0x567A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567A58u;
            // 0x567a5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567A60u; }
        if (ctx->pc != 0x567A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567A60u; }
        if (ctx->pc != 0x567A60u) { return; }
    }
    ctx->pc = 0x567A60u;
label_567a60:
    // 0x567a60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x567a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_567a64:
    // 0x567a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x567a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_567a68:
    // 0x567a68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_567a6c:
    if (ctx->pc == 0x567A6Cu) {
        ctx->pc = 0x567A6Cu;
            // 0x567a6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567A70u;
        goto label_567a70;
    }
    ctx->pc = 0x567A68u;
    {
        const bool branch_taken_0x567a68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x567a68) {
            ctx->pc = 0x567A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567A68u;
            // 0x567a6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567A7Cu;
            goto label_567a7c;
        }
    }
    ctx->pc = 0x567A70u;
label_567a70:
    // 0x567a70: 0xc0400a8  jal         func_1002A0
label_567a74:
    if (ctx->pc == 0x567A74u) {
        ctx->pc = 0x567A74u;
            // 0x567a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567A78u;
        goto label_567a78;
    }
    ctx->pc = 0x567A70u;
    SET_GPR_U32(ctx, 31, 0x567A78u);
    ctx->pc = 0x567A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567A70u;
            // 0x567a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567A78u; }
        if (ctx->pc != 0x567A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567A78u; }
        if (ctx->pc != 0x567A78u) { return; }
    }
    ctx->pc = 0x567A78u;
label_567a78:
    // 0x567a78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x567a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_567a7c:
    // 0x567a7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x567a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_567a80:
    // 0x567a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x567a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_567a84:
    // 0x567a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_567a88:
    // 0x567a88: 0x3e00008  jr          $ra
label_567a8c:
    if (ctx->pc == 0x567A8Cu) {
        ctx->pc = 0x567A8Cu;
            // 0x567a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x567A90u;
        goto label_567a90;
    }
    ctx->pc = 0x567A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567A88u;
            // 0x567a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567A90u;
label_567a90:
    // 0x567a90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x567a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_567a94:
    // 0x567a94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x567a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_567a98:
    // 0x567a98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x567a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_567a9c:
    // 0x567a9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x567a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_567aa0:
    // 0x567aa0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x567aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_567aa4:
    // 0x567aa4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x567aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_567aa8:
    // 0x567aa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x567aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_567aac:
    // 0x567aac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x567aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_567ab0:
    // 0x567ab0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x567ab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_567ab4:
    // 0x567ab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x567ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_567ab8:
    // 0x567ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x567ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_567abc:
    // 0x567abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x567abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_567ac0:
    // 0x567ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x567ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_567ac4:
    // 0x567ac4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x567ac4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_567ac8:
    // 0x567ac8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_567acc:
    if (ctx->pc == 0x567ACCu) {
        ctx->pc = 0x567ACCu;
            // 0x567acc: 0x8eb00070  lw          $s0, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x567AD0u;
        goto label_567ad0;
    }
    ctx->pc = 0x567AC8u;
    {
        const bool branch_taken_0x567ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x567ac8) {
            ctx->pc = 0x567ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567AC8u;
            // 0x567acc: 0x8eb00070  lw          $s0, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567AE4u;
            goto label_567ae4;
        }
    }
    ctx->pc = 0x567AD0u;
label_567ad0:
    // 0x567ad0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x567ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_567ad4:
    // 0x567ad4: 0x50830039  beql        $a0, $v1, . + 4 + (0x39 << 2)
label_567ad8:
    if (ctx->pc == 0x567AD8u) {
        ctx->pc = 0x567AD8u;
            // 0x567ad8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x567ADCu;
        goto label_567adc;
    }
    ctx->pc = 0x567AD4u;
    {
        const bool branch_taken_0x567ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x567ad4) {
            ctx->pc = 0x567AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567AD4u;
            // 0x567ad8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567BBCu;
            goto label_567bbc;
        }
    }
    ctx->pc = 0x567ADCu;
label_567adc:
    // 0x567adc: 0x10000036  b           . + 4 + (0x36 << 2)
label_567ae0:
    if (ctx->pc == 0x567AE0u) {
        ctx->pc = 0x567AE4u;
        goto label_567ae4;
    }
    ctx->pc = 0x567ADCu;
    {
        const bool branch_taken_0x567adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x567adc) {
            ctx->pc = 0x567BB8u;
            goto label_567bb8;
        }
    }
    ctx->pc = 0x567AE4u;
label_567ae4:
    // 0x567ae4: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_567ae8:
    if (ctx->pc == 0x567AE8u) {
        ctx->pc = 0x567AECu;
        goto label_567aec;
    }
    ctx->pc = 0x567AE4u;
    {
        const bool branch_taken_0x567ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x567ae4) {
            ctx->pc = 0x567BB8u;
            goto label_567bb8;
        }
    }
    ctx->pc = 0x567AECu;
label_567aec:
    // 0x567aec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x567aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_567af0:
    // 0x567af0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x567af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_567af4:
    // 0x567af4: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x567af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_567af8:
    // 0x567af8: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x567af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_567afc:
    // 0x567afc: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x567afcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_567b00:
    // 0x567b00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x567b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_567b04:
    // 0x567b04: 0x8c940130  lw          $s4, 0x130($a0)
    ctx->pc = 0x567b04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_567b08:
    // 0x567b08: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x567b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_567b0c:
    // 0x567b0c: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x567b0cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_567b10:
    // 0x567b10: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x567b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_567b14:
    // 0x567b14: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x567b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_567b18:
    // 0x567b18: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x567b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_567b1c:
    // 0x567b1c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x567b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_567b20:
    // 0x567b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x567b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_567b24:
    // 0x567b24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x567b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_567b28:
    // 0x567b28: 0xc04e738  jal         func_139CE0
label_567b2c:
    if (ctx->pc == 0x567B2Cu) {
        ctx->pc = 0x567B2Cu;
            // 0x567b2c: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x567B30u;
        goto label_567b30;
    }
    ctx->pc = 0x567B28u;
    SET_GPR_U32(ctx, 31, 0x567B30u);
    ctx->pc = 0x567B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567B28u;
            // 0x567b2c: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567B30u; }
        if (ctx->pc != 0x567B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567B30u; }
        if (ctx->pc != 0x567B30u) { return; }
    }
    ctx->pc = 0x567B30u;
label_567b30:
    // 0x567b30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x567b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_567b34:
    // 0x567b34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x567b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_567b38:
    // 0x567b38: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x567b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_567b3c:
    // 0x567b3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x567b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567b40:
    // 0x567b40: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x567b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_567b44:
    // 0x567b44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x567b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567b48:
    // 0x567b48: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x567b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_567b4c:
    // 0x567b4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x567b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_567b50:
    // 0x567b50: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x567b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_567b54:
    // 0x567b54: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x567b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_567b58:
    // 0x567b58: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x567b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_567b5c:
    // 0x567b5c: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x567b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_567b60:
    // 0x567b60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x567b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_567b64:
    // 0x567b64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x567b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_567b68:
    // 0x567b68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x567b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_567b6c:
    // 0x567b6c: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x567b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_567b70:
    // 0x567b70: 0x320f809  jalr        $t9
label_567b74:
    if (ctx->pc == 0x567B74u) {
        ctx->pc = 0x567B74u;
            // 0x567b74: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567B78u;
        goto label_567b78;
    }
    ctx->pc = 0x567B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x567B78u);
        ctx->pc = 0x567B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567B70u;
            // 0x567b74: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x567B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x567B78u; }
            if (ctx->pc != 0x567B78u) { return; }
        }
        }
    }
    ctx->pc = 0x567B78u;
label_567b78:
    // 0x567b78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x567b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_567b7c:
    // 0x567b7c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x567b7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_567b80:
    // 0x567b80: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_567b84:
    if (ctx->pc == 0x567B84u) {
        ctx->pc = 0x567B84u;
            // 0x567b84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x567B88u;
        goto label_567b88;
    }
    ctx->pc = 0x567B80u;
    {
        const bool branch_taken_0x567b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x567B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567B80u;
            // 0x567b84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567b80) {
            ctx->pc = 0x567B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_567b48;
        }
    }
    ctx->pc = 0x567B88u;
label_567b88:
    // 0x567b88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x567b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_567b8c:
    // 0x567b8c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x567b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_567b90:
    // 0x567b90: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_567b94:
    if (ctx->pc == 0x567B94u) {
        ctx->pc = 0x567B94u;
            // 0x567b94: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x567B98u;
        goto label_567b98;
    }
    ctx->pc = 0x567B90u;
    {
        const bool branch_taken_0x567b90 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x567B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567B90u;
            // 0x567b94: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567b90) {
            ctx->pc = 0x567BB8u;
            goto label_567bb8;
        }
    }
    ctx->pc = 0x567B98u;
label_567b98:
    // 0x567b98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x567b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_567b9c:
    // 0x567b9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x567b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_567ba0:
    // 0x567ba0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x567ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_567ba4:
    // 0x567ba4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x567ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_567ba8:
    // 0x567ba8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x567ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_567bac:
    // 0x567bac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x567bacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567bb0:
    // 0x567bb0: 0xc055d28  jal         func_1574A0
label_567bb4:
    if (ctx->pc == 0x567BB4u) {
        ctx->pc = 0x567BB4u;
            // 0x567bb4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567BB8u;
        goto label_567bb8;
    }
    ctx->pc = 0x567BB0u;
    SET_GPR_U32(ctx, 31, 0x567BB8u);
    ctx->pc = 0x567BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567BB0u;
            // 0x567bb4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567BB8u; }
        if (ctx->pc != 0x567BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567BB8u; }
        if (ctx->pc != 0x567BB8u) { return; }
    }
    ctx->pc = 0x567BB8u;
label_567bb8:
    // 0x567bb8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x567bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_567bbc:
    // 0x567bbc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x567bbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_567bc0:
    // 0x567bc0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x567bc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_567bc4:
    // 0x567bc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x567bc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_567bc8:
    // 0x567bc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x567bc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_567bcc:
    // 0x567bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x567bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_567bd0:
    // 0x567bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x567bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_567bd4:
    // 0x567bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x567bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_567bd8:
    // 0x567bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x567bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_567bdc:
    // 0x567bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_567be0:
    // 0x567be0: 0x3e00008  jr          $ra
label_567be4:
    if (ctx->pc == 0x567BE4u) {
        ctx->pc = 0x567BE4u;
            // 0x567be4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x567BE8u;
        goto label_567be8;
    }
    ctx->pc = 0x567BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567BE0u;
            // 0x567be4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567BE8u;
label_567be8:
    // 0x567be8: 0x0  nop
    ctx->pc = 0x567be8u;
    // NOP
label_567bec:
    // 0x567bec: 0x0  nop
    ctx->pc = 0x567becu;
    // NOP
label_567bf0:
    // 0x567bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x567bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_567bf4:
    // 0x567bf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x567bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_567bf8:
    // 0x567bf8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x567bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_567bfc:
    // 0x567bfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x567bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_567c00:
    // 0x567c00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x567c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_567c04:
    // 0x567c04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x567c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_567c08:
    // 0x567c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x567c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_567c0c:
    // 0x567c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x567c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_567c10:
    // 0x567c10: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x567c10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_567c14:
    // 0x567c14: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_567c18:
    if (ctx->pc == 0x567C18u) {
        ctx->pc = 0x567C18u;
            // 0x567c18: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567C1Cu;
        goto label_567c1c;
    }
    ctx->pc = 0x567C14u;
    {
        const bool branch_taken_0x567c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x567C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567C14u;
            // 0x567c18: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567c14) {
            ctx->pc = 0x567C7Cu;
            goto label_567c7c;
        }
    }
    ctx->pc = 0x567C1Cu;
label_567c1c:
    // 0x567c1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x567c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_567c20:
    // 0x567c20: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
label_567c24:
    if (ctx->pc == 0x567C24u) {
        ctx->pc = 0x567C24u;
            // 0x567c24: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x567C28u;
        goto label_567c28;
    }
    ctx->pc = 0x567C20u;
    {
        const bool branch_taken_0x567c20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x567c20) {
            ctx->pc = 0x567C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567C20u;
            // 0x567c24: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567C70u;
            goto label_567c70;
        }
    }
    ctx->pc = 0x567C28u;
label_567c28:
    // 0x567c28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x567c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_567c2c:
    // 0x567c2c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_567c30:
    if (ctx->pc == 0x567C30u) {
        ctx->pc = 0x567C30u;
            // 0x567c30: 0x8e850070  lw          $a1, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->pc = 0x567C34u;
        goto label_567c34;
    }
    ctx->pc = 0x567C2Cu;
    {
        const bool branch_taken_0x567c2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x567c2c) {
            ctx->pc = 0x567C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567C2Cu;
            // 0x567c30: 0x8e850070  lw          $a1, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567C3Cu;
            goto label_567c3c;
        }
    }
    ctx->pc = 0x567C34u;
label_567c34:
    // 0x567c34: 0x10000030  b           . + 4 + (0x30 << 2)
label_567c38:
    if (ctx->pc == 0x567C38u) {
        ctx->pc = 0x567C3Cu;
        goto label_567c3c;
    }
    ctx->pc = 0x567C34u;
    {
        const bool branch_taken_0x567c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x567c34) {
            ctx->pc = 0x567CF8u;
            goto label_567cf8;
        }
    }
    ctx->pc = 0x567C3Cu;
label_567c3c:
    // 0x567c3c: 0xc0db62c  jal         func_36D8B0
label_567c40:
    if (ctx->pc == 0x567C40u) {
        ctx->pc = 0x567C40u;
            // 0x567c40: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x567C44u;
        goto label_567c44;
    }
    ctx->pc = 0x567C3Cu;
    SET_GPR_U32(ctx, 31, 0x567C44u);
    ctx->pc = 0x567C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567C3Cu;
            // 0x567c40: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D8B0u;
    if (runtime->hasFunction(0x36D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x36D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567C44u; }
        if (ctx->pc != 0x567C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D8B0_0x36d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567C44u; }
        if (ctx->pc != 0x567C44u) { return; }
    }
    ctx->pc = 0x567C44u;
label_567c44:
    // 0x567c44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x567c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_567c48:
    // 0x567c48: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x567c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_567c4c:
    // 0x567c4c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x567c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_567c50:
    // 0x567c50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x567c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_567c54:
    // 0x567c54: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x567c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_567c58:
    // 0x567c58: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x567c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_567c5c:
    // 0x567c5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x567c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_567c60:
    // 0x567c60: 0x320f809  jalr        $t9
label_567c64:
    if (ctx->pc == 0x567C64u) {
        ctx->pc = 0x567C64u;
            // 0x567c64: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x567C68u;
        goto label_567c68;
    }
    ctx->pc = 0x567C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x567C68u);
        ctx->pc = 0x567C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567C60u;
            // 0x567c64: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x567C68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x567C68u; }
            if (ctx->pc != 0x567C68u) { return; }
        }
        }
    }
    ctx->pc = 0x567C68u;
label_567c68:
    // 0x567c68: 0x10000023  b           . + 4 + (0x23 << 2)
label_567c6c:
    if (ctx->pc == 0x567C6Cu) {
        ctx->pc = 0x567C70u;
        goto label_567c70;
    }
    ctx->pc = 0x567C68u;
    {
        const bool branch_taken_0x567c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x567c68) {
            ctx->pc = 0x567CF8u;
            goto label_567cf8;
        }
    }
    ctx->pc = 0x567C70u;
label_567c70:
    // 0x567c70: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x567c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_567c74:
    // 0x567c74: 0x320f809  jalr        $t9
label_567c78:
    if (ctx->pc == 0x567C78u) {
        ctx->pc = 0x567C7Cu;
        goto label_567c7c;
    }
    ctx->pc = 0x567C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x567C7Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x567C7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x567C7Cu; }
            if (ctx->pc != 0x567C7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x567C7Cu;
label_567c7c:
    // 0x567c7c: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x567c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_567c80:
    // 0x567c80: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_567c84:
    if (ctx->pc == 0x567C84u) {
        ctx->pc = 0x567C88u;
        goto label_567c88;
    }
    ctx->pc = 0x567C80u;
    {
        const bool branch_taken_0x567c80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x567c80) {
            ctx->pc = 0x567CF8u;
            goto label_567cf8;
        }
    }
    ctx->pc = 0x567C88u;
label_567c88:
    // 0x567c88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x567c88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567c8c:
    // 0x567c8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x567c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567c90:
    // 0x567c90: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x567c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_567c94:
    // 0x567c94: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x567c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_567c98:
    // 0x567c98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x567c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_567c9c:
    // 0x567c9c: 0xc0f4cb0  jal         func_3D32C0
label_567ca0:
    if (ctx->pc == 0x567CA0u) {
        ctx->pc = 0x567CA0u;
            // 0x567ca0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x567CA4u;
        goto label_567ca4;
    }
    ctx->pc = 0x567C9Cu;
    SET_GPR_U32(ctx, 31, 0x567CA4u);
    ctx->pc = 0x567CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567C9Cu;
            // 0x567ca0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D32C0u;
    if (runtime->hasFunction(0x3D32C0u)) {
        auto targetFn = runtime->lookupFunction(0x3D32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CA4u; }
        if (ctx->pc != 0x567CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D32C0_0x3d32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CA4u; }
        if (ctx->pc != 0x567CA4u) { return; }
    }
    ctx->pc = 0x567CA4u;
label_567ca4:
    // 0x567ca4: 0xc0e3658  jal         func_38D960
label_567ca8:
    if (ctx->pc == 0x567CA8u) {
        ctx->pc = 0x567CA8u;
            // 0x567ca8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x567CACu;
        goto label_567cac;
    }
    ctx->pc = 0x567CA4u;
    SET_GPR_U32(ctx, 31, 0x567CACu);
    ctx->pc = 0x567CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567CA4u;
            // 0x567ca8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CACu; }
        if (ctx->pc != 0x567CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CACu; }
        if (ctx->pc != 0x567CACu) { return; }
    }
    ctx->pc = 0x567CACu;
label_567cac:
    // 0x567cac: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x567cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_567cb0:
    // 0x567cb0: 0xc0db608  jal         func_36D820
label_567cb4:
    if (ctx->pc == 0x567CB4u) {
        ctx->pc = 0x567CB4u;
            // 0x567cb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567CB8u;
        goto label_567cb8;
    }
    ctx->pc = 0x567CB0u;
    SET_GPR_U32(ctx, 31, 0x567CB8u);
    ctx->pc = 0x567CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567CB0u;
            // 0x567cb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D820u;
    if (runtime->hasFunction(0x36D820u)) {
        auto targetFn = runtime->lookupFunction(0x36D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CB8u; }
        if (ctx->pc != 0x567CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D820_0x36d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CB8u; }
        if (ctx->pc != 0x567CB8u) { return; }
    }
    ctx->pc = 0x567CB8u;
label_567cb8:
    // 0x567cb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_567cbc:
    if (ctx->pc == 0x567CBCu) {
        ctx->pc = 0x567CC0u;
        goto label_567cc0;
    }
    ctx->pc = 0x567CB8u;
    {
        const bool branch_taken_0x567cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x567cb8) {
            ctx->pc = 0x567CE0u;
            goto label_567ce0;
        }
    }
    ctx->pc = 0x567CC0u;
label_567cc0:
    // 0x567cc0: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x567cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_567cc4:
    // 0x567cc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x567cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_567cc8:
    // 0x567cc8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_567ccc:
    if (ctx->pc == 0x567CCCu) {
        ctx->pc = 0x567CD0u;
        goto label_567cd0;
    }
    ctx->pc = 0x567CC8u;
    {
        const bool branch_taken_0x567cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x567cc8) {
            ctx->pc = 0x567CE0u;
            goto label_567ce0;
        }
    }
    ctx->pc = 0x567CD0u;
label_567cd0:
    // 0x567cd0: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x567cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_567cd4:
    // 0x567cd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x567cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_567cd8:
    // 0x567cd8: 0xc0db628  jal         func_36D8A0
label_567cdc:
    if (ctx->pc == 0x567CDCu) {
        ctx->pc = 0x567CDCu;
            // 0x567cdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x567CE0u;
        goto label_567ce0;
    }
    ctx->pc = 0x567CD8u;
    SET_GPR_U32(ctx, 31, 0x567CE0u);
    ctx->pc = 0x567CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567CD8u;
            // 0x567cdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D8A0u;
    if (runtime->hasFunction(0x36D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x36D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CE0u; }
        if (ctx->pc != 0x567CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D8A0_0x36d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CE0u; }
        if (ctx->pc != 0x567CE0u) { return; }
    }
    ctx->pc = 0x567CE0u;
label_567ce0:
    // 0x567ce0: 0xc0f4ac4  jal         func_3D2B10
label_567ce4:
    if (ctx->pc == 0x567CE4u) {
        ctx->pc = 0x567CE4u;
            // 0x567ce4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x567CE8u;
        goto label_567ce8;
    }
    ctx->pc = 0x567CE0u;
    SET_GPR_U32(ctx, 31, 0x567CE8u);
    ctx->pc = 0x567CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567CE0u;
            // 0x567ce4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2B10u;
    if (runtime->hasFunction(0x3D2B10u)) {
        auto targetFn = runtime->lookupFunction(0x3D2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CE8u; }
        if (ctx->pc != 0x567CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2B10_0x3d2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567CE8u; }
        if (ctx->pc != 0x567CE8u) { return; }
    }
    ctx->pc = 0x567CE8u;
label_567ce8:
    // 0x567ce8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x567ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_567cec:
    // 0x567cec: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x567cecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_567cf0:
    // 0x567cf0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_567cf4:
    if (ctx->pc == 0x567CF4u) {
        ctx->pc = 0x567CF4u;
            // 0x567cf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x567CF8u;
        goto label_567cf8;
    }
    ctx->pc = 0x567CF0u;
    {
        const bool branch_taken_0x567cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x567CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567CF0u;
            // 0x567cf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567cf0) {
            ctx->pc = 0x567C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_567c90;
        }
    }
    ctx->pc = 0x567CF8u;
label_567cf8:
    // 0x567cf8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x567cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_567cfc:
    // 0x567cfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x567cfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_567d00:
    // 0x567d00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x567d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_567d04:
    // 0x567d04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x567d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_567d08:
    // 0x567d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x567d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_567d0c:
    // 0x567d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_567d10:
    // 0x567d10: 0x3e00008  jr          $ra
label_567d14:
    if (ctx->pc == 0x567D14u) {
        ctx->pc = 0x567D14u;
            // 0x567d14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x567D18u;
        goto label_567d18;
    }
    ctx->pc = 0x567D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567D10u;
            // 0x567d14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567D18u;
label_567d18:
    // 0x567d18: 0x0  nop
    ctx->pc = 0x567d18u;
    // NOP
label_567d1c:
    // 0x567d1c: 0x0  nop
    ctx->pc = 0x567d1cu;
    // NOP
label_567d20:
    // 0x567d20: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x567d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_567d24:
    // 0x567d24: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_567d28:
    if (ctx->pc == 0x567D28u) {
        ctx->pc = 0x567D2Cu;
        goto label_567d2c;
    }
    ctx->pc = 0x567D24u;
    {
        const bool branch_taken_0x567d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x567d24) {
            ctx->pc = 0x567D58u;
            goto label_567d58;
        }
    }
    ctx->pc = 0x567D2Cu;
label_567d2c:
    // 0x567d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x567d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567d30:
    // 0x567d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x567d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567d34:
    // 0x567d34: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x567d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_567d38:
    // 0x567d38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x567d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_567d3c:
    // 0x567d3c: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x567d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_567d40:
    // 0x567d40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x567d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_567d44:
    // 0x567d44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x567d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_567d48:
    // 0x567d48: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x567d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_567d4c:
    // 0x567d4c: 0xac600110  sw          $zero, 0x110($v1)
    ctx->pc = 0x567d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
label_567d50:
    // 0x567d50: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_567d54:
    if (ctx->pc == 0x567D54u) {
        ctx->pc = 0x567D54u;
            // 0x567d54: 0xac60023c  sw          $zero, 0x23C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 572), GPR_U32(ctx, 0));
        ctx->pc = 0x567D58u;
        goto label_567d58;
    }
    ctx->pc = 0x567D50u;
    {
        const bool branch_taken_0x567d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x567D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567D50u;
            // 0x567d54: 0xac60023c  sw          $zero, 0x23C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567d50) {
            ctx->pc = 0x567D34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_567d34;
        }
    }
    ctx->pc = 0x567D58u;
label_567d58:
    // 0x567d58: 0x80db61c  j           func_36D870
label_567d5c:
    if (ctx->pc == 0x567D5Cu) {
        ctx->pc = 0x567D5Cu;
            // 0x567d5c: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->pc = 0x567D60u;
        goto label_567d60;
    }
    ctx->pc = 0x567D58u;
    ctx->pc = 0x567D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567D58u;
            // 0x567d5c: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D870u;
    if (runtime->hasFunction(0x36D870u)) {
        auto targetFn = runtime->lookupFunction(0x36D870u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0036D870_0x36d870(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x567D60u;
label_567d60:
    // 0x567d60: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x567d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_567d64:
    // 0x567d64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_567d68:
    if (ctx->pc == 0x567D68u) {
        ctx->pc = 0x567D68u;
            // 0x567d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567D6Cu;
        goto label_567d6c;
    }
    ctx->pc = 0x567D64u;
    {
        const bool branch_taken_0x567d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x567d64) {
            ctx->pc = 0x567D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567D64u;
            // 0x567d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567D78u;
            goto label_567d78;
        }
    }
    ctx->pc = 0x567D6Cu;
label_567d6c:
    // 0x567d6c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x567d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_567d70:
    // 0x567d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x567d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_567d74:
    // 0x567d74: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x567d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_567d78:
    // 0x567d78: 0x3e00008  jr          $ra
label_567d7c:
    if (ctx->pc == 0x567D7Cu) {
        ctx->pc = 0x567D80u;
        goto label_567d80;
    }
    ctx->pc = 0x567D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567D80u;
label_567d80:
    // 0x567d80: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x567d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_567d84:
    // 0x567d84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_567d88:
    if (ctx->pc == 0x567D88u) {
        ctx->pc = 0x567D88u;
            // 0x567d88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x567D8Cu;
        goto label_567d8c;
    }
    ctx->pc = 0x567D84u;
    {
        const bool branch_taken_0x567d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x567d84) {
            ctx->pc = 0x567D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567D84u;
            // 0x567d88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567D98u;
            goto label_567d98;
        }
    }
    ctx->pc = 0x567D8Cu;
label_567d8c:
    // 0x567d8c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x567d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_567d90:
    // 0x567d90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x567d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_567d94:
    // 0x567d94: 0x94420016  lhu         $v0, 0x16($v0)
    ctx->pc = 0x567d94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
label_567d98:
    // 0x567d98: 0x3e00008  jr          $ra
label_567d9c:
    if (ctx->pc == 0x567D9Cu) {
        ctx->pc = 0x567DA0u;
        goto label_fallthrough_0x567d98;
    }
    ctx->pc = 0x567D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x567d98:
    ctx->pc = 0x567DA0u;
}
