#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509950
// Address: 0x509950 - 0x509d80
void sub_00509950_0x509950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509950_0x509950");
#endif

    switch (ctx->pc) {
        case 0x509950u: goto label_509950;
        case 0x509954u: goto label_509954;
        case 0x509958u: goto label_509958;
        case 0x50995cu: goto label_50995c;
        case 0x509960u: goto label_509960;
        case 0x509964u: goto label_509964;
        case 0x509968u: goto label_509968;
        case 0x50996cu: goto label_50996c;
        case 0x509970u: goto label_509970;
        case 0x509974u: goto label_509974;
        case 0x509978u: goto label_509978;
        case 0x50997cu: goto label_50997c;
        case 0x509980u: goto label_509980;
        case 0x509984u: goto label_509984;
        case 0x509988u: goto label_509988;
        case 0x50998cu: goto label_50998c;
        case 0x509990u: goto label_509990;
        case 0x509994u: goto label_509994;
        case 0x509998u: goto label_509998;
        case 0x50999cu: goto label_50999c;
        case 0x5099a0u: goto label_5099a0;
        case 0x5099a4u: goto label_5099a4;
        case 0x5099a8u: goto label_5099a8;
        case 0x5099acu: goto label_5099ac;
        case 0x5099b0u: goto label_5099b0;
        case 0x5099b4u: goto label_5099b4;
        case 0x5099b8u: goto label_5099b8;
        case 0x5099bcu: goto label_5099bc;
        case 0x5099c0u: goto label_5099c0;
        case 0x5099c4u: goto label_5099c4;
        case 0x5099c8u: goto label_5099c8;
        case 0x5099ccu: goto label_5099cc;
        case 0x5099d0u: goto label_5099d0;
        case 0x5099d4u: goto label_5099d4;
        case 0x5099d8u: goto label_5099d8;
        case 0x5099dcu: goto label_5099dc;
        case 0x5099e0u: goto label_5099e0;
        case 0x5099e4u: goto label_5099e4;
        case 0x5099e8u: goto label_5099e8;
        case 0x5099ecu: goto label_5099ec;
        case 0x5099f0u: goto label_5099f0;
        case 0x5099f4u: goto label_5099f4;
        case 0x5099f8u: goto label_5099f8;
        case 0x5099fcu: goto label_5099fc;
        case 0x509a00u: goto label_509a00;
        case 0x509a04u: goto label_509a04;
        case 0x509a08u: goto label_509a08;
        case 0x509a0cu: goto label_509a0c;
        case 0x509a10u: goto label_509a10;
        case 0x509a14u: goto label_509a14;
        case 0x509a18u: goto label_509a18;
        case 0x509a1cu: goto label_509a1c;
        case 0x509a20u: goto label_509a20;
        case 0x509a24u: goto label_509a24;
        case 0x509a28u: goto label_509a28;
        case 0x509a2cu: goto label_509a2c;
        case 0x509a30u: goto label_509a30;
        case 0x509a34u: goto label_509a34;
        case 0x509a38u: goto label_509a38;
        case 0x509a3cu: goto label_509a3c;
        case 0x509a40u: goto label_509a40;
        case 0x509a44u: goto label_509a44;
        case 0x509a48u: goto label_509a48;
        case 0x509a4cu: goto label_509a4c;
        case 0x509a50u: goto label_509a50;
        case 0x509a54u: goto label_509a54;
        case 0x509a58u: goto label_509a58;
        case 0x509a5cu: goto label_509a5c;
        case 0x509a60u: goto label_509a60;
        case 0x509a64u: goto label_509a64;
        case 0x509a68u: goto label_509a68;
        case 0x509a6cu: goto label_509a6c;
        case 0x509a70u: goto label_509a70;
        case 0x509a74u: goto label_509a74;
        case 0x509a78u: goto label_509a78;
        case 0x509a7cu: goto label_509a7c;
        case 0x509a80u: goto label_509a80;
        case 0x509a84u: goto label_509a84;
        case 0x509a88u: goto label_509a88;
        case 0x509a8cu: goto label_509a8c;
        case 0x509a90u: goto label_509a90;
        case 0x509a94u: goto label_509a94;
        case 0x509a98u: goto label_509a98;
        case 0x509a9cu: goto label_509a9c;
        case 0x509aa0u: goto label_509aa0;
        case 0x509aa4u: goto label_509aa4;
        case 0x509aa8u: goto label_509aa8;
        case 0x509aacu: goto label_509aac;
        case 0x509ab0u: goto label_509ab0;
        case 0x509ab4u: goto label_509ab4;
        case 0x509ab8u: goto label_509ab8;
        case 0x509abcu: goto label_509abc;
        case 0x509ac0u: goto label_509ac0;
        case 0x509ac4u: goto label_509ac4;
        case 0x509ac8u: goto label_509ac8;
        case 0x509accu: goto label_509acc;
        case 0x509ad0u: goto label_509ad0;
        case 0x509ad4u: goto label_509ad4;
        case 0x509ad8u: goto label_509ad8;
        case 0x509adcu: goto label_509adc;
        case 0x509ae0u: goto label_509ae0;
        case 0x509ae4u: goto label_509ae4;
        case 0x509ae8u: goto label_509ae8;
        case 0x509aecu: goto label_509aec;
        case 0x509af0u: goto label_509af0;
        case 0x509af4u: goto label_509af4;
        case 0x509af8u: goto label_509af8;
        case 0x509afcu: goto label_509afc;
        case 0x509b00u: goto label_509b00;
        case 0x509b04u: goto label_509b04;
        case 0x509b08u: goto label_509b08;
        case 0x509b0cu: goto label_509b0c;
        case 0x509b10u: goto label_509b10;
        case 0x509b14u: goto label_509b14;
        case 0x509b18u: goto label_509b18;
        case 0x509b1cu: goto label_509b1c;
        case 0x509b20u: goto label_509b20;
        case 0x509b24u: goto label_509b24;
        case 0x509b28u: goto label_509b28;
        case 0x509b2cu: goto label_509b2c;
        case 0x509b30u: goto label_509b30;
        case 0x509b34u: goto label_509b34;
        case 0x509b38u: goto label_509b38;
        case 0x509b3cu: goto label_509b3c;
        case 0x509b40u: goto label_509b40;
        case 0x509b44u: goto label_509b44;
        case 0x509b48u: goto label_509b48;
        case 0x509b4cu: goto label_509b4c;
        case 0x509b50u: goto label_509b50;
        case 0x509b54u: goto label_509b54;
        case 0x509b58u: goto label_509b58;
        case 0x509b5cu: goto label_509b5c;
        case 0x509b60u: goto label_509b60;
        case 0x509b64u: goto label_509b64;
        case 0x509b68u: goto label_509b68;
        case 0x509b6cu: goto label_509b6c;
        case 0x509b70u: goto label_509b70;
        case 0x509b74u: goto label_509b74;
        case 0x509b78u: goto label_509b78;
        case 0x509b7cu: goto label_509b7c;
        case 0x509b80u: goto label_509b80;
        case 0x509b84u: goto label_509b84;
        case 0x509b88u: goto label_509b88;
        case 0x509b8cu: goto label_509b8c;
        case 0x509b90u: goto label_509b90;
        case 0x509b94u: goto label_509b94;
        case 0x509b98u: goto label_509b98;
        case 0x509b9cu: goto label_509b9c;
        case 0x509ba0u: goto label_509ba0;
        case 0x509ba4u: goto label_509ba4;
        case 0x509ba8u: goto label_509ba8;
        case 0x509bacu: goto label_509bac;
        case 0x509bb0u: goto label_509bb0;
        case 0x509bb4u: goto label_509bb4;
        case 0x509bb8u: goto label_509bb8;
        case 0x509bbcu: goto label_509bbc;
        case 0x509bc0u: goto label_509bc0;
        case 0x509bc4u: goto label_509bc4;
        case 0x509bc8u: goto label_509bc8;
        case 0x509bccu: goto label_509bcc;
        case 0x509bd0u: goto label_509bd0;
        case 0x509bd4u: goto label_509bd4;
        case 0x509bd8u: goto label_509bd8;
        case 0x509bdcu: goto label_509bdc;
        case 0x509be0u: goto label_509be0;
        case 0x509be4u: goto label_509be4;
        case 0x509be8u: goto label_509be8;
        case 0x509becu: goto label_509bec;
        case 0x509bf0u: goto label_509bf0;
        case 0x509bf4u: goto label_509bf4;
        case 0x509bf8u: goto label_509bf8;
        case 0x509bfcu: goto label_509bfc;
        case 0x509c00u: goto label_509c00;
        case 0x509c04u: goto label_509c04;
        case 0x509c08u: goto label_509c08;
        case 0x509c0cu: goto label_509c0c;
        case 0x509c10u: goto label_509c10;
        case 0x509c14u: goto label_509c14;
        case 0x509c18u: goto label_509c18;
        case 0x509c1cu: goto label_509c1c;
        case 0x509c20u: goto label_509c20;
        case 0x509c24u: goto label_509c24;
        case 0x509c28u: goto label_509c28;
        case 0x509c2cu: goto label_509c2c;
        case 0x509c30u: goto label_509c30;
        case 0x509c34u: goto label_509c34;
        case 0x509c38u: goto label_509c38;
        case 0x509c3cu: goto label_509c3c;
        case 0x509c40u: goto label_509c40;
        case 0x509c44u: goto label_509c44;
        case 0x509c48u: goto label_509c48;
        case 0x509c4cu: goto label_509c4c;
        case 0x509c50u: goto label_509c50;
        case 0x509c54u: goto label_509c54;
        case 0x509c58u: goto label_509c58;
        case 0x509c5cu: goto label_509c5c;
        case 0x509c60u: goto label_509c60;
        case 0x509c64u: goto label_509c64;
        case 0x509c68u: goto label_509c68;
        case 0x509c6cu: goto label_509c6c;
        case 0x509c70u: goto label_509c70;
        case 0x509c74u: goto label_509c74;
        case 0x509c78u: goto label_509c78;
        case 0x509c7cu: goto label_509c7c;
        case 0x509c80u: goto label_509c80;
        case 0x509c84u: goto label_509c84;
        case 0x509c88u: goto label_509c88;
        case 0x509c8cu: goto label_509c8c;
        case 0x509c90u: goto label_509c90;
        case 0x509c94u: goto label_509c94;
        case 0x509c98u: goto label_509c98;
        case 0x509c9cu: goto label_509c9c;
        case 0x509ca0u: goto label_509ca0;
        case 0x509ca4u: goto label_509ca4;
        case 0x509ca8u: goto label_509ca8;
        case 0x509cacu: goto label_509cac;
        case 0x509cb0u: goto label_509cb0;
        case 0x509cb4u: goto label_509cb4;
        case 0x509cb8u: goto label_509cb8;
        case 0x509cbcu: goto label_509cbc;
        case 0x509cc0u: goto label_509cc0;
        case 0x509cc4u: goto label_509cc4;
        case 0x509cc8u: goto label_509cc8;
        case 0x509cccu: goto label_509ccc;
        case 0x509cd0u: goto label_509cd0;
        case 0x509cd4u: goto label_509cd4;
        case 0x509cd8u: goto label_509cd8;
        case 0x509cdcu: goto label_509cdc;
        case 0x509ce0u: goto label_509ce0;
        case 0x509ce4u: goto label_509ce4;
        case 0x509ce8u: goto label_509ce8;
        case 0x509cecu: goto label_509cec;
        case 0x509cf0u: goto label_509cf0;
        case 0x509cf4u: goto label_509cf4;
        case 0x509cf8u: goto label_509cf8;
        case 0x509cfcu: goto label_509cfc;
        case 0x509d00u: goto label_509d00;
        case 0x509d04u: goto label_509d04;
        case 0x509d08u: goto label_509d08;
        case 0x509d0cu: goto label_509d0c;
        case 0x509d10u: goto label_509d10;
        case 0x509d14u: goto label_509d14;
        case 0x509d18u: goto label_509d18;
        case 0x509d1cu: goto label_509d1c;
        case 0x509d20u: goto label_509d20;
        case 0x509d24u: goto label_509d24;
        case 0x509d28u: goto label_509d28;
        case 0x509d2cu: goto label_509d2c;
        case 0x509d30u: goto label_509d30;
        case 0x509d34u: goto label_509d34;
        case 0x509d38u: goto label_509d38;
        case 0x509d3cu: goto label_509d3c;
        case 0x509d40u: goto label_509d40;
        case 0x509d44u: goto label_509d44;
        case 0x509d48u: goto label_509d48;
        case 0x509d4cu: goto label_509d4c;
        case 0x509d50u: goto label_509d50;
        case 0x509d54u: goto label_509d54;
        case 0x509d58u: goto label_509d58;
        case 0x509d5cu: goto label_509d5c;
        case 0x509d60u: goto label_509d60;
        case 0x509d64u: goto label_509d64;
        case 0x509d68u: goto label_509d68;
        case 0x509d6cu: goto label_509d6c;
        case 0x509d70u: goto label_509d70;
        case 0x509d74u: goto label_509d74;
        case 0x509d78u: goto label_509d78;
        case 0x509d7cu: goto label_509d7c;
        default: break;
    }

    ctx->pc = 0x509950u;

label_509950:
    // 0x509950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x509950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_509954:
    // 0x509954: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x509954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_509958:
    // 0x509958: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x509958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_50995c:
    // 0x50995c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_509960:
    // 0x509960: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x509960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_509964:
    // 0x509964: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x509964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_509968:
    // 0x509968: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x509968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_50996c:
    // 0x50996c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x50996cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_509970:
    // 0x509970: 0x8cb20024  lw          $s2, 0x24($a1)
    ctx->pc = 0x509970u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_509974:
    // 0x509974: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x509974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_509978:
    // 0x509978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x509978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50997c:
    // 0x50997c: 0x8e510550  lw          $s1, 0x550($s2)
    ctx->pc = 0x50997cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_509980:
    // 0x509980: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x509980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_509984:
    // 0x509984: 0x320f809  jalr        $t9
label_509988:
    if (ctx->pc == 0x509988u) {
        ctx->pc = 0x509988u;
            // 0x509988: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x50998Cu;
        goto label_50998c;
    }
    ctx->pc = 0x509984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50998Cu);
        ctx->pc = 0x509988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509984u;
            // 0x509988: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50998Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50998Cu; }
            if (ctx->pc != 0x50998Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50998Cu;
label_50998c:
    // 0x50998c: 0xc0c1590  jal         func_305640
label_509990:
    if (ctx->pc == 0x509990u) {
        ctx->pc = 0x509990u;
            // 0x509990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x509994u;
        goto label_509994;
    }
    ctx->pc = 0x50998Cu;
    SET_GPR_U32(ctx, 31, 0x509994u);
    ctx->pc = 0x509990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50998Cu;
            // 0x509990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509994u; }
        if (ctx->pc != 0x509994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509994u; }
        if (ctx->pc != 0x509994u) { return; }
    }
    ctx->pc = 0x509994u;
label_509994:
    // 0x509994: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x509994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_509998:
    // 0x509998: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x509998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_50999c:
    // 0x50999c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x50999cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_5099a0:
    // 0x5099a0: 0x320f809  jalr        $t9
label_5099a4:
    if (ctx->pc == 0x5099A4u) {
        ctx->pc = 0x5099A4u;
            // 0x5099a4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x5099A8u;
        goto label_5099a8;
    }
    ctx->pc = 0x5099A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5099A8u);
        ctx->pc = 0x5099A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5099A0u;
            // 0x5099a4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5099A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5099A8u; }
            if (ctx->pc != 0x5099A8u) { return; }
        }
        }
    }
    ctx->pc = 0x5099A8u;
label_5099a8:
    // 0x5099a8: 0x8e430d9c  lw          $v1, 0xD9C($s2)
    ctx->pc = 0x5099a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_5099ac:
    // 0x5099ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5099acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5099b0:
    // 0x5099b0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x5099b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_5099b4:
    // 0x5099b4: 0xae430d9c  sw          $v1, 0xD9C($s2)
    ctx->pc = 0x5099b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 3));
label_5099b8:
    // 0x5099b8: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x5099b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_5099bc:
    // 0x5099bc: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_5099c0:
    if (ctx->pc == 0x5099C0u) {
        ctx->pc = 0x5099C0u;
            // 0x5099c0: 0x26440a50  addiu       $a0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->pc = 0x5099C4u;
        goto label_5099c4;
    }
    ctx->pc = 0x5099BCu;
    {
        const bool branch_taken_0x5099bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x5099C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5099BCu;
            // 0x5099c0: 0x26440a50  addiu       $a0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5099bc) {
            ctx->pc = 0x5099D4u;
            goto label_5099d4;
        }
    }
    ctx->pc = 0x5099C4u;
label_5099c4:
    // 0x5099c4: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x5099c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_5099c8:
    // 0x5099c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x5099c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5099cc:
    // 0x5099cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_5099d0:
    if (ctx->pc == 0x5099D0u) {
        ctx->pc = 0x5099D4u;
        goto label_5099d4;
    }
    ctx->pc = 0x5099CCu;
    {
        const bool branch_taken_0x5099cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5099cc) {
            ctx->pc = 0x5099E0u;
            goto label_5099e0;
        }
    }
    ctx->pc = 0x5099D4u;
label_5099d4:
    // 0x5099d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5099d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5099d8:
    // 0x5099d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_5099dc:
    if (ctx->pc == 0x5099DCu) {
        ctx->pc = 0x5099E0u;
        goto label_5099e0;
    }
    ctx->pc = 0x5099D8u;
    {
        const bool branch_taken_0x5099d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5099d8) {
            ctx->pc = 0x5099F4u;
            goto label_5099f4;
        }
    }
    ctx->pc = 0x5099E0u;
label_5099e0:
    // 0x5099e0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5099e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5099e4:
    // 0x5099e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x5099e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5099e8:
    // 0x5099e8: 0x2442b45c  addiu       $v0, $v0, -0x4BA4
    ctx->pc = 0x5099e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947932));
label_5099ec:
    // 0x5099ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5099ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5099f0:
    // 0x5099f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x5099f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5099f4:
    // 0x5099f4: 0xc0eea40  jal         func_3BA900
label_5099f8:
    if (ctx->pc == 0x5099F8u) {
        ctx->pc = 0x5099FCu;
        goto label_5099fc;
    }
    ctx->pc = 0x5099F4u;
    SET_GPR_U32(ctx, 31, 0x5099FCu);
    ctx->pc = 0x3BA900u;
    if (runtime->hasFunction(0x3BA900u)) {
        auto targetFn = runtime->lookupFunction(0x3BA900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5099FCu; }
        if (ctx->pc != 0x5099FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA900_0x3ba900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5099FCu; }
        if (ctx->pc != 0x5099FCu) { return; }
    }
    ctx->pc = 0x5099FCu;
label_5099fc:
    // 0x5099fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x5099fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_509a00:
    // 0x509a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x509a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_509a04:
    // 0x509a04: 0x0  nop
    ctx->pc = 0x509a04u;
    // NOP
label_509a08:
    // 0x509a08: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x509a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_509a0c:
    // 0x509a0c: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_509a10:
    if (ctx->pc == 0x509A10u) {
        ctx->pc = 0x509A10u;
            // 0x509a10: 0x8e420e34  lw          $v0, 0xE34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
        ctx->pc = 0x509A14u;
        goto label_509a14;
    }
    ctx->pc = 0x509A0Cu;
    {
        const bool branch_taken_0x509a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x509a0c) {
            ctx->pc = 0x509A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509A0Cu;
            // 0x509a10: 0x8e420e34  lw          $v0, 0xE34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509A44u;
            goto label_509a44;
        }
    }
    ctx->pc = 0x509A14u;
label_509a14:
    // 0x509a14: 0xc0754b4  jal         func_1D52D0
label_509a18:
    if (ctx->pc == 0x509A18u) {
        ctx->pc = 0x509A18u;
            // 0x509a18: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x509A1Cu;
        goto label_509a1c;
    }
    ctx->pc = 0x509A14u;
    SET_GPR_U32(ctx, 31, 0x509A1Cu);
    ctx->pc = 0x509A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509A14u;
            // 0x509a18: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509A1Cu; }
        if (ctx->pc != 0x509A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509A1Cu; }
        if (ctx->pc != 0x509A1Cu) { return; }
    }
    ctx->pc = 0x509A1Cu;
label_509a1c:
    // 0x509a1c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x509a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_509a20:
    // 0x509a20: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x509a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_509a24:
    // 0x509a24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_509a28:
    if (ctx->pc == 0x509A28u) {
        ctx->pc = 0x509A2Cu;
        goto label_509a2c;
    }
    ctx->pc = 0x509A24u;
    {
        const bool branch_taken_0x509a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x509a24) {
            ctx->pc = 0x509A40u;
            goto label_509a40;
        }
    }
    ctx->pc = 0x509A2Cu;
label_509a2c:
    // 0x509a2c: 0xc6400a7c  lwc1        $f0, 0xA7C($s2)
    ctx->pc = 0x509a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_509a30:
    // 0x509a30: 0x26440a50  addiu       $a0, $s2, 0xA50
    ctx->pc = 0x509a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_509a34:
    // 0x509a34: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x509a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_509a38:
    // 0x509a38: 0xc0eea24  jal         func_3BA890
label_509a3c:
    if (ctx->pc == 0x509A3Cu) {
        ctx->pc = 0x509A3Cu;
            // 0x509a3c: 0xe6400a7c  swc1        $f0, 0xA7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2684), bits); }
        ctx->pc = 0x509A40u;
        goto label_509a40;
    }
    ctx->pc = 0x509A38u;
    SET_GPR_U32(ctx, 31, 0x509A40u);
    ctx->pc = 0x509A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509A38u;
            // 0x509a3c: 0xe6400a7c  swc1        $f0, 0xA7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509A40u; }
        if (ctx->pc != 0x509A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509A40u; }
        if (ctx->pc != 0x509A40u) { return; }
    }
    ctx->pc = 0x509A40u;
label_509a40:
    // 0x509a40: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x509a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_509a44:
    // 0x509a44: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x509a44u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_509a48:
    // 0x509a48: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_509a4c:
    if (ctx->pc == 0x509A4Cu) {
        ctx->pc = 0x509A4Cu;
            // 0x509a4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x509A50u;
        goto label_509a50;
    }
    ctx->pc = 0x509A48u;
    {
        const bool branch_taken_0x509a48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x509A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509A48u;
            // 0x509a4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509a48) {
            ctx->pc = 0x509A60u;
            goto label_509a60;
        }
    }
    ctx->pc = 0x509A50u;
label_509a50:
    // 0x509a50: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x509a50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_509a54:
    // 0x509a54: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_509a58:
    if (ctx->pc == 0x509A58u) {
        ctx->pc = 0x509A5Cu;
        goto label_509a5c;
    }
    ctx->pc = 0x509A54u;
    {
        const bool branch_taken_0x509a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x509a54) {
            ctx->pc = 0x509A60u;
            goto label_509a60;
        }
    }
    ctx->pc = 0x509A5Cu;
label_509a5c:
    // 0x509a5c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x509a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_509a60:
    // 0x509a60: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_509a64:
    if (ctx->pc == 0x509A64u) {
        ctx->pc = 0x509A68u;
        goto label_509a68;
    }
    ctx->pc = 0x509A60u;
    {
        const bool branch_taken_0x509a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x509a60) {
            ctx->pc = 0x509A7Cu;
            goto label_509a7c;
        }
    }
    ctx->pc = 0x509A68u;
label_509a68:
    // 0x509a68: 0xc075eb4  jal         func_1D7AD0
label_509a6c:
    if (ctx->pc == 0x509A6Cu) {
        ctx->pc = 0x509A6Cu;
            // 0x509a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x509A70u;
        goto label_509a70;
    }
    ctx->pc = 0x509A68u;
    SET_GPR_U32(ctx, 31, 0x509A70u);
    ctx->pc = 0x509A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509A68u;
            // 0x509a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509A70u; }
        if (ctx->pc != 0x509A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509A70u; }
        if (ctx->pc != 0x509A70u) { return; }
    }
    ctx->pc = 0x509A70u;
label_509a70:
    // 0x509a70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_509a74:
    if (ctx->pc == 0x509A74u) {
        ctx->pc = 0x509A78u;
        goto label_509a78;
    }
    ctx->pc = 0x509A70u;
    {
        const bool branch_taken_0x509a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x509a70) {
            ctx->pc = 0x509A7Cu;
            goto label_509a7c;
        }
    }
    ctx->pc = 0x509A78u;
label_509a78:
    // 0x509a78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x509a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_509a7c:
    // 0x509a7c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_509a80:
    if (ctx->pc == 0x509A80u) {
        ctx->pc = 0x509A80u;
            // 0x509a80: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x509A84u;
        goto label_509a84;
    }
    ctx->pc = 0x509A7Cu;
    {
        const bool branch_taken_0x509a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x509a7c) {
            ctx->pc = 0x509A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509A7Cu;
            // 0x509a80: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509A98u;
            goto label_509a98;
        }
    }
    ctx->pc = 0x509A84u;
label_509a84:
    // 0x509a84: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x509a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_509a88:
    // 0x509a88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x509a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_509a8c:
    // 0x509a8c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_509a90:
    if (ctx->pc == 0x509A90u) {
        ctx->pc = 0x509A94u;
        goto label_509a94;
    }
    ctx->pc = 0x509A8Cu;
    {
        const bool branch_taken_0x509a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x509a8c) {
            ctx->pc = 0x509B00u;
            goto label_509b00;
        }
    }
    ctx->pc = 0x509A94u;
label_509a94:
    // 0x509a94: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x509a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_509a98:
    // 0x509a98: 0xc040180  jal         func_100600
label_509a9c:
    if (ctx->pc == 0x509A9Cu) {
        ctx->pc = 0x509AA0u;
        goto label_509aa0;
    }
    ctx->pc = 0x509A98u;
    SET_GPR_U32(ctx, 31, 0x509AA0u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509AA0u; }
        if (ctx->pc != 0x509AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509AA0u; }
        if (ctx->pc != 0x509AA0u) { return; }
    }
    ctx->pc = 0x509AA0u;
label_509aa0:
    // 0x509aa0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_509aa4:
    if (ctx->pc == 0x509AA4u) {
        ctx->pc = 0x509AA4u;
            // 0x509aa4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x509AA8u;
        goto label_509aa8;
    }
    ctx->pc = 0x509AA0u;
    {
        const bool branch_taken_0x509aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509aa0) {
            ctx->pc = 0x509AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509AA0u;
            // 0x509aa4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509AC4u;
            goto label_509ac4;
        }
    }
    ctx->pc = 0x509AA8u;
label_509aa8:
    // 0x509aa8: 0x824511aa  lb          $a1, 0x11AA($s2)
    ctx->pc = 0x509aa8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_509aac:
    // 0x509aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x509aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_509ab0:
    // 0x509ab0: 0x8e66006c  lw          $a2, 0x6C($s3)
    ctx->pc = 0x509ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_509ab4:
    // 0x509ab4: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x509ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_509ab8:
    // 0x509ab8: 0xc0f3284  jal         func_3CCA10
label_509abc:
    if (ctx->pc == 0x509ABCu) {
        ctx->pc = 0x509ABCu;
            // 0x509abc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x509AC0u;
        goto label_509ac0;
    }
    ctx->pc = 0x509AB8u;
    SET_GPR_U32(ctx, 31, 0x509AC0u);
    ctx->pc = 0x509ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509AB8u;
            // 0x509abc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CCA10u;
    if (runtime->hasFunction(0x3CCA10u)) {
        auto targetFn = runtime->lookupFunction(0x3CCA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509AC0u; }
        if (ctx->pc != 0x509AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CCA10_0x3cca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509AC0u; }
        if (ctx->pc != 0x509AC0u) { return; }
    }
    ctx->pc = 0x509AC0u;
label_509ac0:
    // 0x509ac0: 0x26440440  addiu       $a0, $s2, 0x440
    ctx->pc = 0x509ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
label_509ac4:
    // 0x509ac4: 0xc0754b4  jal         func_1D52D0
label_509ac8:
    if (ctx->pc == 0x509AC8u) {
        ctx->pc = 0x509ACCu;
        goto label_509acc;
    }
    ctx->pc = 0x509AC4u;
    SET_GPR_U32(ctx, 31, 0x509ACCu);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509ACCu; }
        if (ctx->pc != 0x509ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509ACCu; }
        if (ctx->pc != 0x509ACCu) { return; }
    }
    ctx->pc = 0x509ACCu;
label_509acc:
    // 0x509acc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x509accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_509ad0:
    // 0x509ad0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x509ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_509ad4:
    // 0x509ad4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_509ad8:
    if (ctx->pc == 0x509AD8u) {
        ctx->pc = 0x509ADCu;
        goto label_509adc;
    }
    ctx->pc = 0x509AD4u;
    {
        const bool branch_taken_0x509ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x509ad4) {
            ctx->pc = 0x509B00u;
            goto label_509b00;
        }
    }
    ctx->pc = 0x509ADCu;
label_509adc:
    // 0x509adc: 0xc040180  jal         func_100600
label_509ae0:
    if (ctx->pc == 0x509AE0u) {
        ctx->pc = 0x509AE0u;
            // 0x509ae0: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x509AE4u;
        goto label_509ae4;
    }
    ctx->pc = 0x509ADCu;
    SET_GPR_U32(ctx, 31, 0x509AE4u);
    ctx->pc = 0x509AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509ADCu;
            // 0x509ae0: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509AE4u; }
        if (ctx->pc != 0x509AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509AE4u; }
        if (ctx->pc != 0x509AE4u) { return; }
    }
    ctx->pc = 0x509AE4u;
label_509ae4:
    // 0x509ae4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_509ae8:
    if (ctx->pc == 0x509AE8u) {
        ctx->pc = 0x509AECu;
        goto label_509aec;
    }
    ctx->pc = 0x509AE4u;
    {
        const bool branch_taken_0x509ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x509ae4) {
            ctx->pc = 0x509B00u;
            goto label_509b00;
        }
    }
    ctx->pc = 0x509AECu;
label_509aec:
    // 0x509aec: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x509aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_509af0:
    // 0x509af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x509af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_509af4:
    // 0x509af4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x509af4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_509af8:
    // 0x509af8: 0xc11ebc4  jal         func_47AF10
label_509afc:
    if (ctx->pc == 0x509AFCu) {
        ctx->pc = 0x509AFCu;
            // 0x509afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x509B00u;
        goto label_509b00;
    }
    ctx->pc = 0x509AF8u;
    SET_GPR_U32(ctx, 31, 0x509B00u);
    ctx->pc = 0x509AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509AF8u;
            // 0x509afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509B00u; }
        if (ctx->pc != 0x509B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509B00u; }
        if (ctx->pc != 0x509B00u) { return; }
    }
    ctx->pc = 0x509B00u;
label_509b00:
    // 0x509b00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x509b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_509b04:
    // 0x509b04: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x509b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_509b08:
    // 0x509b08: 0x8202007a  lb          $v0, 0x7A($s0)
    ctx->pc = 0x509b08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 122)));
label_509b0c:
    // 0x509b0c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x509b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_509b10:
    // 0x509b10: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_509b14:
    if (ctx->pc == 0x509B14u) {
        ctx->pc = 0x509B14u;
            // 0x509b14: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x509B18u;
        goto label_509b18;
    }
    ctx->pc = 0x509B10u;
    {
        const bool branch_taken_0x509b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x509b10) {
            ctx->pc = 0x509B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509B10u;
            // 0x509b14: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509BBCu;
            goto label_509bbc;
        }
    }
    ctx->pc = 0x509B18u;
label_509b18:
    // 0x509b18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x509b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_509b1c:
    // 0x509b1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x509b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_509b20:
    // 0x509b20: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x509b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_509b24:
    // 0x509b24: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x509b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_509b28:
    // 0x509b28: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_509b2c:
    if (ctx->pc == 0x509B2Cu) {
        ctx->pc = 0x509B30u;
        goto label_509b30;
    }
    ctx->pc = 0x509B28u;
    {
        const bool branch_taken_0x509b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x509b28) {
            ctx->pc = 0x509B40u;
            goto label_509b40;
        }
    }
    ctx->pc = 0x509B30u;
label_509b30:
    // 0x509b30: 0x2442fff5  addiu       $v0, $v0, -0xB
    ctx->pc = 0x509b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967285));
label_509b34:
    // 0x509b34: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x509b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_509b38:
    // 0x509b38: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_509b3c:
    if (ctx->pc == 0x509B3Cu) {
        ctx->pc = 0x509B40u;
        goto label_509b40;
    }
    ctx->pc = 0x509B38u;
    {
        const bool branch_taken_0x509b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x509b38) {
            ctx->pc = 0x509BB8u;
            goto label_509bb8;
        }
    }
    ctx->pc = 0x509B40u;
label_509b40:
    // 0x509b40: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x509b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_509b44:
    // 0x509b44: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x509b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_509b48:
    // 0x509b48: 0x8c44ab00  lw          $a0, -0x5500($v0)
    ctx->pc = 0x509b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945536)));
label_509b4c:
    // 0x509b4c: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x509b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_509b50:
    // 0x509b50: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x509b50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_509b54:
    // 0x509b54: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_509b58:
    if (ctx->pc == 0x509B58u) {
        ctx->pc = 0x509B58u;
            // 0x509b58: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x509B5Cu;
        goto label_509b5c;
    }
    ctx->pc = 0x509B54u;
    {
        const bool branch_taken_0x509b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x509b54) {
            ctx->pc = 0x509B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509B54u;
            // 0x509b58: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509B68u;
            goto label_509b68;
        }
    }
    ctx->pc = 0x509B5Cu;
label_509b5c:
    // 0x509b5c: 0x54800028  bnel        $a0, $zero, . + 4 + (0x28 << 2)
label_509b60:
    if (ctx->pc == 0x509B60u) {
        ctx->pc = 0x509B60u;
            // 0x509b60: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x509B64u;
        goto label_509b64;
    }
    ctx->pc = 0x509B5Cu;
    {
        const bool branch_taken_0x509b5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x509b5c) {
            ctx->pc = 0x509B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509B5Cu;
            // 0x509b60: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509C00u;
            goto label_509c00;
        }
    }
    ctx->pc = 0x509B64u;
label_509b64:
    // 0x509b64: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x509b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_509b68:
    // 0x509b68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x509b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_509b6c:
    // 0x509b6c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_509b70:
    if (ctx->pc == 0x509B70u) {
        ctx->pc = 0x509B70u;
            // 0x509b70: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x509B74u;
        goto label_509b74;
    }
    ctx->pc = 0x509B6Cu;
    {
        const bool branch_taken_0x509b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x509b6c) {
            ctx->pc = 0x509B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509B6Cu;
            // 0x509b70: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509B94u;
            goto label_509b94;
        }
    }
    ctx->pc = 0x509B74u;
label_509b74:
    // 0x509b74: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x509b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_509b78:
    // 0x509b78: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x509b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_509b7c:
    // 0x509b7c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x509b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_509b80:
    // 0x509b80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x509b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_509b84:
    // 0x509b84: 0x320f809  jalr        $t9
label_509b88:
    if (ctx->pc == 0x509B88u) {
        ctx->pc = 0x509B88u;
            // 0x509b88: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x509B8Cu;
        goto label_509b8c;
    }
    ctx->pc = 0x509B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509B8Cu);
        ctx->pc = 0x509B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509B84u;
            // 0x509b88: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509B8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509B8Cu; }
            if (ctx->pc != 0x509B8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x509B8Cu;
label_509b8c:
    // 0x509b8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_509b90:
    if (ctx->pc == 0x509B90u) {
        ctx->pc = 0x509B90u;
            // 0x509b90: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x509B94u;
        goto label_509b94;
    }
    ctx->pc = 0x509B8Cu;
    {
        const bool branch_taken_0x509b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509B8Cu;
            // 0x509b90: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509b8c) {
            ctx->pc = 0x509BACu;
            goto label_509bac;
        }
    }
    ctx->pc = 0x509B94u;
label_509b94:
    // 0x509b94: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x509b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_509b98:
    // 0x509b98: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x509b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_509b9c:
    // 0x509b9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x509b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_509ba0:
    // 0x509ba0: 0x320f809  jalr        $t9
label_509ba4:
    if (ctx->pc == 0x509BA4u) {
        ctx->pc = 0x509BA4u;
            // 0x509ba4: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x509BA8u;
        goto label_509ba8;
    }
    ctx->pc = 0x509BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509BA8u);
        ctx->pc = 0x509BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509BA0u;
            // 0x509ba4: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509BA8u; }
            if (ctx->pc != 0x509BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x509BA8u;
label_509ba8:
    // 0x509ba8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x509ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_509bac:
    // 0x509bac: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x509bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_509bb0:
    // 0x509bb0: 0x10000012  b           . + 4 + (0x12 << 2)
label_509bb4:
    if (ctx->pc == 0x509BB4u) {
        ctx->pc = 0x509BB4u;
            // 0x509bb4: 0xac43ab00  sw          $v1, -0x5500($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945536), GPR_U32(ctx, 3));
        ctx->pc = 0x509BB8u;
        goto label_509bb8;
    }
    ctx->pc = 0x509BB0u;
    {
        const bool branch_taken_0x509bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509BB0u;
            // 0x509bb4: 0xac43ab00  sw          $v1, -0x5500($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509bb0) {
            ctx->pc = 0x509BFCu;
            goto label_509bfc;
        }
    }
    ctx->pc = 0x509BB8u;
label_509bb8:
    // 0x509bb8: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x509bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_509bbc:
    // 0x509bbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x509bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_509bc0:
    // 0x509bc0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_509bc4:
    if (ctx->pc == 0x509BC4u) {
        ctx->pc = 0x509BC4u;
            // 0x509bc4: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x509BC8u;
        goto label_509bc8;
    }
    ctx->pc = 0x509BC0u;
    {
        const bool branch_taken_0x509bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x509bc0) {
            ctx->pc = 0x509BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509BC0u;
            // 0x509bc4: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509BE8u;
            goto label_509be8;
        }
    }
    ctx->pc = 0x509BC8u;
label_509bc8:
    // 0x509bc8: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x509bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_509bcc:
    // 0x509bcc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x509bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_509bd0:
    // 0x509bd0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x509bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_509bd4:
    // 0x509bd4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x509bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_509bd8:
    // 0x509bd8: 0x320f809  jalr        $t9
label_509bdc:
    if (ctx->pc == 0x509BDCu) {
        ctx->pc = 0x509BDCu;
            // 0x509bdc: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x509BE0u;
        goto label_509be0;
    }
    ctx->pc = 0x509BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509BE0u);
        ctx->pc = 0x509BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509BD8u;
            // 0x509bdc: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509BE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509BE0u; }
            if (ctx->pc != 0x509BE0u) { return; }
        }
        }
    }
    ctx->pc = 0x509BE0u;
label_509be0:
    // 0x509be0: 0x10000006  b           . + 4 + (0x6 << 2)
label_509be4:
    if (ctx->pc == 0x509BE4u) {
        ctx->pc = 0x509BE8u;
        goto label_509be8;
    }
    ctx->pc = 0x509BE0u;
    {
        const bool branch_taken_0x509be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x509be0) {
            ctx->pc = 0x509BFCu;
            goto label_509bfc;
        }
    }
    ctx->pc = 0x509BE8u;
label_509be8:
    // 0x509be8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x509be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_509bec:
    // 0x509bec: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x509becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_509bf0:
    // 0x509bf0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x509bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_509bf4:
    // 0x509bf4: 0x320f809  jalr        $t9
label_509bf8:
    if (ctx->pc == 0x509BF8u) {
        ctx->pc = 0x509BF8u;
            // 0x509bf8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x509BFCu;
        goto label_509bfc;
    }
    ctx->pc = 0x509BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509BFCu);
        ctx->pc = 0x509BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509BF4u;
            // 0x509bf8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509BFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509BFCu; }
            if (ctx->pc != 0x509BFCu) { return; }
        }
        }
    }
    ctx->pc = 0x509BFCu;
label_509bfc:
    // 0x509bfc: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x509bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_509c00:
    // 0x509c00: 0x3c02000d  lui         $v0, 0xD
    ctx->pc = 0x509c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13 << 16));
label_509c04:
    // 0x509c04: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x509c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_509c08:
    // 0x509c08: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x509c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_509c0c:
    // 0x509c0c: 0x320f809  jalr        $t9
label_509c10:
    if (ctx->pc == 0x509C10u) {
        ctx->pc = 0x509C10u;
            // 0x509c10: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x509C14u;
        goto label_509c14;
    }
    ctx->pc = 0x509C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509C14u);
        ctx->pc = 0x509C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509C0Cu;
            // 0x509c10: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509C14u; }
            if (ctx->pc != 0x509C14u) { return; }
        }
        }
    }
    ctx->pc = 0x509C14u;
label_509c14:
    // 0x509c14: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x509c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_509c18:
    // 0x509c18: 0x58400029  blezl       $v0, . + 4 + (0x29 << 2)
label_509c1c:
    if (ctx->pc == 0x509C1Cu) {
        ctx->pc = 0x509C1Cu;
            // 0x509c1c: 0x26441150  addiu       $a0, $s2, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
        ctx->pc = 0x509C20u;
        goto label_509c20;
    }
    ctx->pc = 0x509C18u;
    {
        const bool branch_taken_0x509c18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x509c18) {
            ctx->pc = 0x509C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509C18u;
            // 0x509c1c: 0x26441150  addiu       $a0, $s2, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509CC0u;
            goto label_509cc0;
        }
    }
    ctx->pc = 0x509C20u;
label_509c20:
    // 0x509c20: 0x26441150  addiu       $a0, $s2, 0x1150
    ctx->pc = 0x509c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
label_509c24:
    // 0x509c24: 0xc12ca3c  jal         func_4B28F0
label_509c28:
    if (ctx->pc == 0x509C28u) {
        ctx->pc = 0x509C28u;
            // 0x509c28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x509C2Cu;
        goto label_509c2c;
    }
    ctx->pc = 0x509C24u;
    SET_GPR_U32(ctx, 31, 0x509C2Cu);
    ctx->pc = 0x509C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509C24u;
            // 0x509c28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509C2Cu; }
        if (ctx->pc != 0x509C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509C2Cu; }
        if (ctx->pc != 0x509C2Cu) { return; }
    }
    ctx->pc = 0x509C2Cu;
label_509c2c:
    // 0x509c2c: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x509c2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_509c30:
    // 0x509c30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x509c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_509c34:
    // 0x509c34: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x509c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_509c38:
    // 0x509c38: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x509c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_509c3c:
    // 0x509c3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x509c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_509c40:
    // 0x509c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_509c44:
    // 0x509c44: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x509c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_509c48:
    // 0x509c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x509c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_509c4c:
    // 0x509c4c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x509c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_509c50:
    // 0x509c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x509c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_509c54:
    // 0x509c54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x509c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_509c58:
    // 0x509c58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x509c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_509c5c:
    // 0x509c5c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x509c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_509c60:
    // 0x509c60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x509c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_509c64:
    // 0x509c64: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x509c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_509c68:
    // 0x509c68: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x509c68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_509c6c:
    // 0x509c6c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x509c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_509c70:
    // 0x509c70: 0x320f809  jalr        $t9
label_509c74:
    if (ctx->pc == 0x509C74u) {
        ctx->pc = 0x509C74u;
            // 0x509c74: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x509C78u;
        goto label_509c78;
    }
    ctx->pc = 0x509C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509C78u);
        ctx->pc = 0x509C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509C70u;
            // 0x509c74: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509C78u; }
            if (ctx->pc != 0x509C78u) { return; }
        }
        }
    }
    ctx->pc = 0x509C78u;
label_509c78:
    // 0x509c78: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x509c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_509c7c:
    // 0x509c7c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x509c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_509c80:
    // 0x509c80: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x509c80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_509c84:
    // 0x509c84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x509c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_509c88:
    // 0x509c88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x509c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_509c8c:
    // 0x509c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_509c90:
    // 0x509c90: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x509c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_509c94:
    // 0x509c94: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x509c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_509c98:
    // 0x509c98: 0x320f809  jalr        $t9
label_509c9c:
    if (ctx->pc == 0x509C9Cu) {
        ctx->pc = 0x509C9Cu;
            // 0x509c9c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x509CA0u;
        goto label_509ca0;
    }
    ctx->pc = 0x509C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509CA0u);
        ctx->pc = 0x509C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509C98u;
            // 0x509c9c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509CA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509CA0u; }
            if (ctx->pc != 0x509CA0u) { return; }
        }
        }
    }
    ctx->pc = 0x509CA0u;
label_509ca0:
    // 0x509ca0: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x509ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_509ca4:
    // 0x509ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_509ca8:
    // 0x509ca8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x509ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_509cac:
    // 0x509cac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x509cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_509cb0:
    // 0x509cb0: 0x320f809  jalr        $t9
label_509cb4:
    if (ctx->pc == 0x509CB4u) {
        ctx->pc = 0x509CB4u;
            // 0x509cb4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x509CB8u;
        goto label_509cb8;
    }
    ctx->pc = 0x509CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509CB8u);
        ctx->pc = 0x509CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509CB0u;
            // 0x509cb4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509CB8u; }
            if (ctx->pc != 0x509CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x509CB8u;
label_509cb8:
    // 0x509cb8: 0x10000027  b           . + 4 + (0x27 << 2)
label_509cbc:
    if (ctx->pc == 0x509CBCu) {
        ctx->pc = 0x509CBCu;
            // 0x509cbc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x509CC0u;
        goto label_509cc0;
    }
    ctx->pc = 0x509CB8u;
    {
        const bool branch_taken_0x509cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509CB8u;
            // 0x509cbc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509cb8) {
            ctx->pc = 0x509D58u;
            goto label_509d58;
        }
    }
    ctx->pc = 0x509CC0u;
label_509cc0:
    // 0x509cc0: 0xc12ca3c  jal         func_4B28F0
label_509cc4:
    if (ctx->pc == 0x509CC4u) {
        ctx->pc = 0x509CC4u;
            // 0x509cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x509CC8u;
        goto label_509cc8;
    }
    ctx->pc = 0x509CC0u;
    SET_GPR_U32(ctx, 31, 0x509CC8u);
    ctx->pc = 0x509CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509CC0u;
            // 0x509cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509CC8u; }
        if (ctx->pc != 0x509CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509CC8u; }
        if (ctx->pc != 0x509CC8u) { return; }
    }
    ctx->pc = 0x509CC8u;
label_509cc8:
    // 0x509cc8: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x509cc8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_509ccc:
    // 0x509ccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x509cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_509cd0:
    // 0x509cd0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x509cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_509cd4:
    // 0x509cd4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x509cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_509cd8:
    // 0x509cd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x509cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_509cdc:
    // 0x509cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_509ce0:
    // 0x509ce0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x509ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_509ce4:
    // 0x509ce4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x509ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_509ce8:
    // 0x509ce8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x509ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_509cec:
    // 0x509cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x509cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_509cf0:
    // 0x509cf0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x509cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_509cf4:
    // 0x509cf4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x509cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_509cf8:
    // 0x509cf8: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x509cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_509cfc:
    // 0x509cfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x509cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_509d00:
    // 0x509d00: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x509d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_509d04:
    // 0x509d04: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x509d04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_509d08:
    // 0x509d08: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x509d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_509d0c:
    // 0x509d0c: 0x320f809  jalr        $t9
label_509d10:
    if (ctx->pc == 0x509D10u) {
        ctx->pc = 0x509D10u;
            // 0x509d10: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x509D14u;
        goto label_509d14;
    }
    ctx->pc = 0x509D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509D14u);
        ctx->pc = 0x509D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509D0Cu;
            // 0x509d10: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509D14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509D14u; }
            if (ctx->pc != 0x509D14u) { return; }
        }
        }
    }
    ctx->pc = 0x509D14u;
label_509d14:
    // 0x509d14: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x509d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_509d18:
    // 0x509d18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x509d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_509d1c:
    // 0x509d1c: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x509d1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_509d20:
    // 0x509d20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x509d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_509d24:
    // 0x509d24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x509d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_509d28:
    // 0x509d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_509d2c:
    // 0x509d2c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x509d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_509d30:
    // 0x509d30: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x509d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_509d34:
    // 0x509d34: 0x320f809  jalr        $t9
label_509d38:
    if (ctx->pc == 0x509D38u) {
        ctx->pc = 0x509D38u;
            // 0x509d38: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x509D3Cu;
        goto label_509d3c;
    }
    ctx->pc = 0x509D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509D3Cu);
        ctx->pc = 0x509D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509D34u;
            // 0x509d38: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509D3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509D3Cu; }
            if (ctx->pc != 0x509D3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x509D3Cu;
label_509d3c:
    // 0x509d3c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x509d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_509d40:
    // 0x509d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_509d44:
    // 0x509d44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x509d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_509d48:
    // 0x509d48: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x509d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_509d4c:
    // 0x509d4c: 0x320f809  jalr        $t9
label_509d50:
    if (ctx->pc == 0x509D50u) {
        ctx->pc = 0x509D50u;
            // 0x509d50: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x509D54u;
        goto label_509d54;
    }
    ctx->pc = 0x509D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509D54u);
        ctx->pc = 0x509D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509D4Cu;
            // 0x509d50: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509D54u; }
            if (ctx->pc != 0x509D54u) { return; }
        }
        }
    }
    ctx->pc = 0x509D54u;
label_509d54:
    // 0x509d54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x509d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_509d58:
    // 0x509d58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x509d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_509d5c:
    // 0x509d5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x509d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_509d60:
    // 0x509d60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x509d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_509d64:
    // 0x509d64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x509d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_509d68:
    // 0x509d68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x509d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_509d6c:
    // 0x509d6c: 0x3e00008  jr          $ra
label_509d70:
    if (ctx->pc == 0x509D70u) {
        ctx->pc = 0x509D70u;
            // 0x509d70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x509D74u;
        goto label_509d74;
    }
    ctx->pc = 0x509D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509D6Cu;
            // 0x509d70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x509D74u;
label_509d74:
    // 0x509d74: 0x0  nop
    ctx->pc = 0x509d74u;
    // NOP
label_509d78:
    // 0x509d78: 0x0  nop
    ctx->pc = 0x509d78u;
    // NOP
label_509d7c:
    // 0x509d7c: 0x0  nop
    ctx->pc = 0x509d7cu;
    // NOP
}
