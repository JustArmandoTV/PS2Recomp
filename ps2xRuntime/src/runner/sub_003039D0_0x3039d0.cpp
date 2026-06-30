#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003039D0
// Address: 0x3039d0 - 0x303d90
void sub_003039D0_0x3039d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003039D0_0x3039d0");
#endif

    switch (ctx->pc) {
        case 0x3039d0u: goto label_3039d0;
        case 0x3039d4u: goto label_3039d4;
        case 0x3039d8u: goto label_3039d8;
        case 0x3039dcu: goto label_3039dc;
        case 0x3039e0u: goto label_3039e0;
        case 0x3039e4u: goto label_3039e4;
        case 0x3039e8u: goto label_3039e8;
        case 0x3039ecu: goto label_3039ec;
        case 0x3039f0u: goto label_3039f0;
        case 0x3039f4u: goto label_3039f4;
        case 0x3039f8u: goto label_3039f8;
        case 0x3039fcu: goto label_3039fc;
        case 0x303a00u: goto label_303a00;
        case 0x303a04u: goto label_303a04;
        case 0x303a08u: goto label_303a08;
        case 0x303a0cu: goto label_303a0c;
        case 0x303a10u: goto label_303a10;
        case 0x303a14u: goto label_303a14;
        case 0x303a18u: goto label_303a18;
        case 0x303a1cu: goto label_303a1c;
        case 0x303a20u: goto label_303a20;
        case 0x303a24u: goto label_303a24;
        case 0x303a28u: goto label_303a28;
        case 0x303a2cu: goto label_303a2c;
        case 0x303a30u: goto label_303a30;
        case 0x303a34u: goto label_303a34;
        case 0x303a38u: goto label_303a38;
        case 0x303a3cu: goto label_303a3c;
        case 0x303a40u: goto label_303a40;
        case 0x303a44u: goto label_303a44;
        case 0x303a48u: goto label_303a48;
        case 0x303a4cu: goto label_303a4c;
        case 0x303a50u: goto label_303a50;
        case 0x303a54u: goto label_303a54;
        case 0x303a58u: goto label_303a58;
        case 0x303a5cu: goto label_303a5c;
        case 0x303a60u: goto label_303a60;
        case 0x303a64u: goto label_303a64;
        case 0x303a68u: goto label_303a68;
        case 0x303a6cu: goto label_303a6c;
        case 0x303a70u: goto label_303a70;
        case 0x303a74u: goto label_303a74;
        case 0x303a78u: goto label_303a78;
        case 0x303a7cu: goto label_303a7c;
        case 0x303a80u: goto label_303a80;
        case 0x303a84u: goto label_303a84;
        case 0x303a88u: goto label_303a88;
        case 0x303a8cu: goto label_303a8c;
        case 0x303a90u: goto label_303a90;
        case 0x303a94u: goto label_303a94;
        case 0x303a98u: goto label_303a98;
        case 0x303a9cu: goto label_303a9c;
        case 0x303aa0u: goto label_303aa0;
        case 0x303aa4u: goto label_303aa4;
        case 0x303aa8u: goto label_303aa8;
        case 0x303aacu: goto label_303aac;
        case 0x303ab0u: goto label_303ab0;
        case 0x303ab4u: goto label_303ab4;
        case 0x303ab8u: goto label_303ab8;
        case 0x303abcu: goto label_303abc;
        case 0x303ac0u: goto label_303ac0;
        case 0x303ac4u: goto label_303ac4;
        case 0x303ac8u: goto label_303ac8;
        case 0x303accu: goto label_303acc;
        case 0x303ad0u: goto label_303ad0;
        case 0x303ad4u: goto label_303ad4;
        case 0x303ad8u: goto label_303ad8;
        case 0x303adcu: goto label_303adc;
        case 0x303ae0u: goto label_303ae0;
        case 0x303ae4u: goto label_303ae4;
        case 0x303ae8u: goto label_303ae8;
        case 0x303aecu: goto label_303aec;
        case 0x303af0u: goto label_303af0;
        case 0x303af4u: goto label_303af4;
        case 0x303af8u: goto label_303af8;
        case 0x303afcu: goto label_303afc;
        case 0x303b00u: goto label_303b00;
        case 0x303b04u: goto label_303b04;
        case 0x303b08u: goto label_303b08;
        case 0x303b0cu: goto label_303b0c;
        case 0x303b10u: goto label_303b10;
        case 0x303b14u: goto label_303b14;
        case 0x303b18u: goto label_303b18;
        case 0x303b1cu: goto label_303b1c;
        case 0x303b20u: goto label_303b20;
        case 0x303b24u: goto label_303b24;
        case 0x303b28u: goto label_303b28;
        case 0x303b2cu: goto label_303b2c;
        case 0x303b30u: goto label_303b30;
        case 0x303b34u: goto label_303b34;
        case 0x303b38u: goto label_303b38;
        case 0x303b3cu: goto label_303b3c;
        case 0x303b40u: goto label_303b40;
        case 0x303b44u: goto label_303b44;
        case 0x303b48u: goto label_303b48;
        case 0x303b4cu: goto label_303b4c;
        case 0x303b50u: goto label_303b50;
        case 0x303b54u: goto label_303b54;
        case 0x303b58u: goto label_303b58;
        case 0x303b5cu: goto label_303b5c;
        case 0x303b60u: goto label_303b60;
        case 0x303b64u: goto label_303b64;
        case 0x303b68u: goto label_303b68;
        case 0x303b6cu: goto label_303b6c;
        case 0x303b70u: goto label_303b70;
        case 0x303b74u: goto label_303b74;
        case 0x303b78u: goto label_303b78;
        case 0x303b7cu: goto label_303b7c;
        case 0x303b80u: goto label_303b80;
        case 0x303b84u: goto label_303b84;
        case 0x303b88u: goto label_303b88;
        case 0x303b8cu: goto label_303b8c;
        case 0x303b90u: goto label_303b90;
        case 0x303b94u: goto label_303b94;
        case 0x303b98u: goto label_303b98;
        case 0x303b9cu: goto label_303b9c;
        case 0x303ba0u: goto label_303ba0;
        case 0x303ba4u: goto label_303ba4;
        case 0x303ba8u: goto label_303ba8;
        case 0x303bacu: goto label_303bac;
        case 0x303bb0u: goto label_303bb0;
        case 0x303bb4u: goto label_303bb4;
        case 0x303bb8u: goto label_303bb8;
        case 0x303bbcu: goto label_303bbc;
        case 0x303bc0u: goto label_303bc0;
        case 0x303bc4u: goto label_303bc4;
        case 0x303bc8u: goto label_303bc8;
        case 0x303bccu: goto label_303bcc;
        case 0x303bd0u: goto label_303bd0;
        case 0x303bd4u: goto label_303bd4;
        case 0x303bd8u: goto label_303bd8;
        case 0x303bdcu: goto label_303bdc;
        case 0x303be0u: goto label_303be0;
        case 0x303be4u: goto label_303be4;
        case 0x303be8u: goto label_303be8;
        case 0x303becu: goto label_303bec;
        case 0x303bf0u: goto label_303bf0;
        case 0x303bf4u: goto label_303bf4;
        case 0x303bf8u: goto label_303bf8;
        case 0x303bfcu: goto label_303bfc;
        case 0x303c00u: goto label_303c00;
        case 0x303c04u: goto label_303c04;
        case 0x303c08u: goto label_303c08;
        case 0x303c0cu: goto label_303c0c;
        case 0x303c10u: goto label_303c10;
        case 0x303c14u: goto label_303c14;
        case 0x303c18u: goto label_303c18;
        case 0x303c1cu: goto label_303c1c;
        case 0x303c20u: goto label_303c20;
        case 0x303c24u: goto label_303c24;
        case 0x303c28u: goto label_303c28;
        case 0x303c2cu: goto label_303c2c;
        case 0x303c30u: goto label_303c30;
        case 0x303c34u: goto label_303c34;
        case 0x303c38u: goto label_303c38;
        case 0x303c3cu: goto label_303c3c;
        case 0x303c40u: goto label_303c40;
        case 0x303c44u: goto label_303c44;
        case 0x303c48u: goto label_303c48;
        case 0x303c4cu: goto label_303c4c;
        case 0x303c50u: goto label_303c50;
        case 0x303c54u: goto label_303c54;
        case 0x303c58u: goto label_303c58;
        case 0x303c5cu: goto label_303c5c;
        case 0x303c60u: goto label_303c60;
        case 0x303c64u: goto label_303c64;
        case 0x303c68u: goto label_303c68;
        case 0x303c6cu: goto label_303c6c;
        case 0x303c70u: goto label_303c70;
        case 0x303c74u: goto label_303c74;
        case 0x303c78u: goto label_303c78;
        case 0x303c7cu: goto label_303c7c;
        case 0x303c80u: goto label_303c80;
        case 0x303c84u: goto label_303c84;
        case 0x303c88u: goto label_303c88;
        case 0x303c8cu: goto label_303c8c;
        case 0x303c90u: goto label_303c90;
        case 0x303c94u: goto label_303c94;
        case 0x303c98u: goto label_303c98;
        case 0x303c9cu: goto label_303c9c;
        case 0x303ca0u: goto label_303ca0;
        case 0x303ca4u: goto label_303ca4;
        case 0x303ca8u: goto label_303ca8;
        case 0x303cacu: goto label_303cac;
        case 0x303cb0u: goto label_303cb0;
        case 0x303cb4u: goto label_303cb4;
        case 0x303cb8u: goto label_303cb8;
        case 0x303cbcu: goto label_303cbc;
        case 0x303cc0u: goto label_303cc0;
        case 0x303cc4u: goto label_303cc4;
        case 0x303cc8u: goto label_303cc8;
        case 0x303cccu: goto label_303ccc;
        case 0x303cd0u: goto label_303cd0;
        case 0x303cd4u: goto label_303cd4;
        case 0x303cd8u: goto label_303cd8;
        case 0x303cdcu: goto label_303cdc;
        case 0x303ce0u: goto label_303ce0;
        case 0x303ce4u: goto label_303ce4;
        case 0x303ce8u: goto label_303ce8;
        case 0x303cecu: goto label_303cec;
        case 0x303cf0u: goto label_303cf0;
        case 0x303cf4u: goto label_303cf4;
        case 0x303cf8u: goto label_303cf8;
        case 0x303cfcu: goto label_303cfc;
        case 0x303d00u: goto label_303d00;
        case 0x303d04u: goto label_303d04;
        case 0x303d08u: goto label_303d08;
        case 0x303d0cu: goto label_303d0c;
        case 0x303d10u: goto label_303d10;
        case 0x303d14u: goto label_303d14;
        case 0x303d18u: goto label_303d18;
        case 0x303d1cu: goto label_303d1c;
        case 0x303d20u: goto label_303d20;
        case 0x303d24u: goto label_303d24;
        case 0x303d28u: goto label_303d28;
        case 0x303d2cu: goto label_303d2c;
        case 0x303d30u: goto label_303d30;
        case 0x303d34u: goto label_303d34;
        case 0x303d38u: goto label_303d38;
        case 0x303d3cu: goto label_303d3c;
        case 0x303d40u: goto label_303d40;
        case 0x303d44u: goto label_303d44;
        case 0x303d48u: goto label_303d48;
        case 0x303d4cu: goto label_303d4c;
        case 0x303d50u: goto label_303d50;
        case 0x303d54u: goto label_303d54;
        case 0x303d58u: goto label_303d58;
        case 0x303d5cu: goto label_303d5c;
        case 0x303d60u: goto label_303d60;
        case 0x303d64u: goto label_303d64;
        case 0x303d68u: goto label_303d68;
        case 0x303d6cu: goto label_303d6c;
        case 0x303d70u: goto label_303d70;
        case 0x303d74u: goto label_303d74;
        case 0x303d78u: goto label_303d78;
        case 0x303d7cu: goto label_303d7c;
        case 0x303d80u: goto label_303d80;
        case 0x303d84u: goto label_303d84;
        case 0x303d88u: goto label_303d88;
        case 0x303d8cu: goto label_303d8c;
        default: break;
    }

    ctx->pc = 0x3039d0u;

label_3039d0:
    // 0x3039d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3039d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3039d4:
    // 0x3039d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3039d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3039d8:
    // 0x3039d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3039d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3039dc:
    // 0x3039dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3039dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3039e0:
    // 0x3039e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3039e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3039e4:
    // 0x3039e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3039e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3039e8:
    // 0x3039e8: 0x26440bf0  addiu       $a0, $s2, 0xBF0
    ctx->pc = 0x3039e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3056));
label_3039ec:
    // 0x3039ec: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3039ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3039f0:
    // 0x3039f0: 0x264502c0  addiu       $a1, $s2, 0x2C0
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3039f4:
    // 0x3039f4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3039f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3039f8:
    // 0x3039f8: 0x26460820  addiu       $a2, $s2, 0x820
    ctx->pc = 0x3039f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
label_3039fc:
    // 0x3039fc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3039fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_303a00:
    // 0x303a00: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x303a00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_303a04:
    // 0x303a04: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x303a04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_303a08:
    // 0x303a08: 0xc0b7f34  jal         func_2DFCD0
label_303a0c:
    if (ctx->pc == 0x303A0Cu) {
        ctx->pc = 0x303A0Cu;
            // 0x303a0c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x303A10u;
        goto label_303a10;
    }
    ctx->pc = 0x303A08u;
    SET_GPR_U32(ctx, 31, 0x303A10u);
    ctx->pc = 0x303A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303A08u;
            // 0x303a0c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFCD0u;
    if (runtime->hasFunction(0x2DFCD0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303A10u; }
        if (ctx->pc != 0x303A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DFCD0_0x2dfcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303A10u; }
        if (ctx->pc != 0x303A10u) { return; }
    }
    ctx->pc = 0x303A10u;
label_303a10:
    // 0x303a10: 0x96430c40  lhu         $v1, 0xC40($s2)
    ctx->pc = 0x303a10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3136)));
label_303a14:
    // 0x303a14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x303a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_303a18:
    // 0x303a18: 0x506200ca  beql        $v1, $v0, . + 4 + (0xCA << 2)
label_303a1c:
    if (ctx->pc == 0x303A1Cu) {
        ctx->pc = 0x303A1Cu;
            // 0x303a1c: 0x8e420d9c  lw          $v0, 0xD9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
        ctx->pc = 0x303A20u;
        goto label_303a20;
    }
    ctx->pc = 0x303A18u;
    {
        const bool branch_taken_0x303a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303a18) {
            ctx->pc = 0x303A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303A18u;
            // 0x303a1c: 0x8e420d9c  lw          $v0, 0xD9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303D44u;
            goto label_303d44;
        }
    }
    ctx->pc = 0x303A20u;
label_303a20:
    // 0x303a20: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
label_303a24:
    if (ctx->pc == 0x303A24u) {
        ctx->pc = 0x303A28u;
        goto label_303a28;
    }
    ctx->pc = 0x303A20u;
    {
        const bool branch_taken_0x303a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a20) {
            ctx->pc = 0x303D40u;
            goto label_303d40;
        }
    }
    ctx->pc = 0x303A28u;
label_303a28:
    // 0x303a28: 0x8e510c30  lw          $s1, 0xC30($s2)
    ctx->pc = 0x303a28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3120)));
label_303a2c:
    // 0x303a2c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x303a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_303a30:
    // 0x303a30: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x303a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_303a34:
    // 0x303a34: 0x26440bf0  addiu       $a0, $s2, 0xBF0
    ctx->pc = 0x303a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3056));
label_303a38:
    // 0x303a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303a3c:
    // 0x303a3c: 0x264502c0  addiu       $a1, $s2, 0x2C0
    ctx->pc = 0x303a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_303a40:
    // 0x303a40: 0x86260028  lh          $a2, 0x28($s1)
    ctx->pc = 0x303a40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_303a44:
    // 0x303a44: 0x86300026  lh          $s0, 0x26($s1)
    ctx->pc = 0x303a44u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
label_303a48:
    // 0x303a48: 0xc01826  xor         $v1, $a2, $zero
    ctx->pc = 0x303a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 0));
label_303a4c:
    // 0x303a4c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x303a4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_303a50:
    // 0x303a50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x303a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_303a54:
    // 0x303a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_303a58:
    // 0x303a58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x303a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_303a5c:
    // 0x303a5c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x303a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_303a60:
    // 0x303a60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303a64:
    // 0x303a64: 0x0  nop
    ctx->pc = 0x303a64u;
    // NOP
label_303a68:
    // 0x303a68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x303a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_303a6c:
    // 0x303a6c: 0xc0b7d84  jal         func_2DF610
label_303a70:
    if (ctx->pc == 0x303A70u) {
        ctx->pc = 0x303A70u;
            // 0x303a70: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x303A74u;
        goto label_303a74;
    }
    ctx->pc = 0x303A6Cu;
    SET_GPR_U32(ctx, 31, 0x303A74u);
    ctx->pc = 0x303A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303A6Cu;
            // 0x303a70: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF610u;
    if (runtime->hasFunction(0x2DF610u)) {
        auto targetFn = runtime->lookupFunction(0x2DF610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303A74u; }
        if (ctx->pc != 0x303A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF610_0x2df610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303A74u; }
        if (ctx->pc != 0x303A74u) { return; }
    }
    ctx->pc = 0x303A74u;
label_303a74:
    // 0x303a74: 0x2002026  xor         $a0, $s0, $zero
    ctx->pc = 0x303a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
label_303a78:
    // 0x303a78: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x303a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_303a7c:
    // 0x303a7c: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x303a7cu;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
label_303a80:
    // 0x303a80: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x303a80u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_303a84:
    // 0x303a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303a88:
    // 0x303a88: 0x96450c42  lhu         $a1, 0xC42($s2)
    ctx->pc = 0x303a88u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3138)));
label_303a8c:
    // 0x303a8c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x303a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_303a90:
    // 0x303a90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_303a94:
    // 0x303a94: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x303a94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_303a98:
    // 0x303a98: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x303a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_303a9c:
    // 0x303a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303aa0:
    // 0x303aa0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x303aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_303aa4:
    // 0x303aa4: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x303aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_303aa8:
    // 0x303aa8: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x303aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_303aac:
    // 0x303aac: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x303aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_303ab0:
    // 0x303ab0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x303ab0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303ab4:
    // 0x303ab4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x303ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_303ab8:
    // 0x303ab8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x303ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_303abc:
    // 0x303abc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x303abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_303ac0:
    // 0x303ac0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x303ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_303ac4:
    // 0x303ac4: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x303ac4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_303ac8:
    // 0x303ac8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x303ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303acc:
    // 0x303acc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x303accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303ad0:
    // 0x303ad0: 0x0  nop
    ctx->pc = 0x303ad0u;
    // NOP
label_303ad4:
    // 0x303ad4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x303ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_303ad8:
    // 0x303ad8: 0x4601b0c3  div.s       $f3, $f22, $f1
    ctx->pc = 0x303ad8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[3] = ctx->f[22] / ctx->f[1];
label_303adc:
    // 0x303adc: 0x0  nop
    ctx->pc = 0x303adcu;
    // NOP
label_303ae0:
    // 0x303ae0: 0x0  nop
    ctx->pc = 0x303ae0u;
    // NOP
label_303ae4:
    // 0x303ae4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x303ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303ae8:
    // 0x303ae8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_303aec:
    if (ctx->pc == 0x303AECu) {
        ctx->pc = 0x303AF0u;
        goto label_303af0;
    }
    ctx->pc = 0x303AE8u;
    {
        const bool branch_taken_0x303ae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303ae8) {
            ctx->pc = 0x303AF4u;
            goto label_303af4;
        }
    }
    ctx->pc = 0x303AF0u;
label_303af0:
    // 0x303af0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303af4:
    // 0x303af4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_303af8:
    if (ctx->pc == 0x303AF8u) {
        ctx->pc = 0x303AF8u;
            // 0x303af8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x303AFCu;
        goto label_303afc;
    }
    ctx->pc = 0x303AF4u;
    {
        const bool branch_taken_0x303af4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x303af4) {
            ctx->pc = 0x303AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303AF4u;
            // 0x303af8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303B08u;
            goto label_303b08;
        }
    }
    ctx->pc = 0x303AFCu;
label_303afc:
    // 0x303afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303b00:
    // 0x303b00: 0x10000007  b           . + 4 + (0x7 << 2)
label_303b04:
    if (ctx->pc == 0x303B04u) {
        ctx->pc = 0x303B04u;
            // 0x303b04: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x303B08u;
        goto label_303b08;
    }
    ctx->pc = 0x303B00u;
    {
        const bool branch_taken_0x303b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303B00u;
            // 0x303b04: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b00) {
            ctx->pc = 0x303B20u;
            goto label_303b20;
        }
    }
    ctx->pc = 0x303B08u;
label_303b08:
    // 0x303b08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x303b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_303b0c:
    // 0x303b0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x303b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_303b10:
    // 0x303b10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303b14:
    // 0x303b14: 0x0  nop
    ctx->pc = 0x303b14u;
    // NOP
label_303b18:
    // 0x303b18: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x303b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_303b1c:
    // 0x303b1c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x303b1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_303b20:
    // 0x303b20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_303b24:
    // 0x303b24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x303b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_303b28:
    // 0x303b28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303b2c:
    // 0x303b2c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x303b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_303b30:
    // 0x303b30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x303b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_303b34:
    // 0x303b34: 0x26450830  addiu       $a1, $s2, 0x830
    ctx->pc = 0x303b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
label_303b38:
    // 0x303b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303b3c:
    // 0x303b3c: 0x0  nop
    ctx->pc = 0x303b3cu;
    // NOP
label_303b40:
    // 0x303b40: 0x4601a018  adda.s      $f20, $f1
    ctx->pc = 0x303b40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_303b44:
    // 0x303b44: 0x4602001d  msub.s      $f0, $f0, $f2
    ctx->pc = 0x303b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_303b48:
    // 0x303b48: 0x4601a018  adda.s      $f20, $f1
    ctx->pc = 0x303b48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_303b4c:
    // 0x303b4c: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x303b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_303b50:
    // 0x303b50: 0xc04c774  jal         func_131DD0
label_303b54:
    if (ctx->pc == 0x303B54u) {
        ctx->pc = 0x303B54u;
            // 0x303b54: 0x4600bd42  mul.s       $f21, $f23, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x303B58u;
        goto label_303b58;
    }
    ctx->pc = 0x303B50u;
    SET_GPR_U32(ctx, 31, 0x303B58u);
    ctx->pc = 0x303B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303B50u;
            // 0x303b54: 0x4600bd42  mul.s       $f21, $f23, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DD0u;
    if (runtime->hasFunction(0x131DD0u)) {
        auto targetFn = runtime->lookupFunction(0x131DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B58u; }
        if (ctx->pc != 0x303B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131DD0_0x131dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B58u; }
        if (ctx->pc != 0x303B58u) { return; }
    }
    ctx->pc = 0x303B58u;
label_303b58:
    // 0x303b58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x303b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_303b5c:
    // 0x303b5c: 0xc04f278  jal         func_13C9E0
label_303b60:
    if (ctx->pc == 0x303B60u) {
        ctx->pc = 0x303B60u;
            // 0x303b60: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x303B64u;
        goto label_303b64;
    }
    ctx->pc = 0x303B5Cu;
    SET_GPR_U32(ctx, 31, 0x303B64u);
    ctx->pc = 0x303B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303B5Cu;
            // 0x303b60: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B64u; }
        if (ctx->pc != 0x303B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B64u; }
        if (ctx->pc != 0x303B64u) { return; }
    }
    ctx->pc = 0x303B64u;
label_303b64:
    // 0x303b64: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x303b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_303b68:
    // 0x303b68: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x303b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_303b6c:
    // 0x303b6c: 0xc04cca0  jal         func_133280
label_303b70:
    if (ctx->pc == 0x303B70u) {
        ctx->pc = 0x303B70u;
            // 0x303b70: 0x26460c00  addiu       $a2, $s2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3072));
        ctx->pc = 0x303B74u;
        goto label_303b74;
    }
    ctx->pc = 0x303B6Cu;
    SET_GPR_U32(ctx, 31, 0x303B74u);
    ctx->pc = 0x303B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303B6Cu;
            // 0x303b70: 0x26460c00  addiu       $a2, $s2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B74u; }
        if (ctx->pc != 0x303B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B74u; }
        if (ctx->pc != 0x303B74u) { return; }
    }
    ctx->pc = 0x303B74u;
label_303b74:
    // 0x303b74: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x303b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_303b78:
    // 0x303b78: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x303b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_303b7c:
    // 0x303b7c: 0x24842b50  addiu       $a0, $a0, 0x2B50
    ctx->pc = 0x303b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11088));
label_303b80:
    // 0x303b80: 0xc04cc08  jal         func_133020
label_303b84:
    if (ctx->pc == 0x303B84u) {
        ctx->pc = 0x303B84u;
            // 0x303b84: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x303B88u;
        goto label_303b88;
    }
    ctx->pc = 0x303B80u;
    SET_GPR_U32(ctx, 31, 0x303B88u);
    ctx->pc = 0x303B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303B80u;
            // 0x303b84: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B88u; }
        if (ctx->pc != 0x303B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B88u; }
        if (ctx->pc != 0x303B88u) { return; }
    }
    ctx->pc = 0x303B88u;
label_303b88:
    // 0x303b88: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x303b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_303b8c:
    // 0x303b8c: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x303b8cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_303b90:
    // 0x303b90: 0xc04cc14  jal         func_133050
label_303b94:
    if (ctx->pc == 0x303B94u) {
        ctx->pc = 0x303B94u;
            // 0x303b94: 0x24842b50  addiu       $a0, $a0, 0x2B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11088));
        ctx->pc = 0x303B98u;
        goto label_303b98;
    }
    ctx->pc = 0x303B90u;
    SET_GPR_U32(ctx, 31, 0x303B98u);
    ctx->pc = 0x303B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303B90u;
            // 0x303b94: 0x24842b50  addiu       $a0, $a0, 0x2B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B98u; }
        if (ctx->pc != 0x303B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303B98u; }
        if (ctx->pc != 0x303B98u) { return; }
    }
    ctx->pc = 0x303B98u;
label_303b98:
    // 0x303b98: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x303b98u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_303b9c:
    // 0x303b9c: 0xc04cc14  jal         func_133050
label_303ba0:
    if (ctx->pc == 0x303BA0u) {
        ctx->pc = 0x303BA0u;
            // 0x303ba0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x303BA4u;
        goto label_303ba4;
    }
    ctx->pc = 0x303B9Cu;
    SET_GPR_U32(ctx, 31, 0x303BA4u);
    ctx->pc = 0x303BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303B9Cu;
            // 0x303ba0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303BA4u; }
        if (ctx->pc != 0x303BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303BA4u; }
        if (ctx->pc != 0x303BA4u) { return; }
    }
    ctx->pc = 0x303BA4u;
label_303ba4:
    // 0x303ba4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x303ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_303ba8:
    // 0x303ba8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x303ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_303bac:
    // 0x303bac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303bb0:
    // 0x303bb0: 0x4600c843  div.s       $f1, $f25, $f0
    ctx->pc = 0x303bb0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[25] * 0.0f); } else ctx->f[1] = ctx->f[25] / ctx->f[0];
label_303bb4:
    // 0x303bb4: 0x0  nop
    ctx->pc = 0x303bb4u;
    // NOP
label_303bb8:
    // 0x303bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303bbc:
    // 0x303bbc: 0x0  nop
    ctx->pc = 0x303bbcu;
    // NOP
label_303bc0:
    // 0x303bc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303bc4:
    // 0x303bc4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_303bc8:
    if (ctx->pc == 0x303BC8u) {
        ctx->pc = 0x303BC8u;
            // 0x303bc8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x303BCCu;
        goto label_303bcc;
    }
    ctx->pc = 0x303BC4u;
    {
        const bool branch_taken_0x303bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303bc4) {
            ctx->pc = 0x303BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303BC4u;
            // 0x303bc8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303BD4u;
            goto label_303bd4;
        }
    }
    ctx->pc = 0x303BCCu;
label_303bcc:
    // 0x303bcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x303bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303bd0:
    // 0x303bd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_303bd4:
    // 0x303bd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x303bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_303bd8:
    // 0x303bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303bdc:
    // 0x303bdc: 0x0  nop
    ctx->pc = 0x303bdcu;
    // NOP
label_303be0:
    // 0x303be0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x303be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303be4:
    // 0x303be4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_303be8:
    if (ctx->pc == 0x303BE8u) {
        ctx->pc = 0x303BE8u;
            // 0x303be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x303BECu;
        goto label_303bec;
    }
    ctx->pc = 0x303BE4u;
    {
        const bool branch_taken_0x303be4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x303BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303BE4u;
            // 0x303be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303be4) {
            ctx->pc = 0x303BF0u;
            goto label_303bf0;
        }
    }
    ctx->pc = 0x303BECu;
label_303bec:
    // 0x303bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303bf0:
    // 0x303bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x303bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_303bf4:
    // 0x303bf4: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x303bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_303bf8:
    // 0x303bf8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x303bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_303bfc:
    // 0x303bfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x303bfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303c00:
    // 0x303c00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x303c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_303c04:
    // 0x303c04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_303c08:
    // 0x303c08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x303c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_303c0c:
    // 0x303c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303c10:
    // 0x303c10: 0x0  nop
    ctx->pc = 0x303c10u;
    // NOP
label_303c14:
    // 0x303c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_303c18:
    // 0x303c18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x303c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_303c1c:
    // 0x303c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303c20:
    // 0x303c20: 0x0  nop
    ctx->pc = 0x303c20u;
    // NOP
label_303c24:
    // 0x303c24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_303c28:
    // 0x303c28: 0xc0477fe  jal         func_11DFF8
label_303c2c:
    if (ctx->pc == 0x303C2Cu) {
        ctx->pc = 0x303C2Cu;
            // 0x303c2c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x303C30u;
        goto label_303c30;
    }
    ctx->pc = 0x303C28u;
    SET_GPR_U32(ctx, 31, 0x303C30u);
    ctx->pc = 0x303C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303C28u;
            // 0x303c2c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C30u; }
        if (ctx->pc != 0x303C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C30u; }
        if (ctx->pc != 0x303C30u) { return; }
    }
    ctx->pc = 0x303C30u;
label_303c30:
    // 0x303c30: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x303c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_303c34:
    // 0x303c34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x303c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303c38:
    // 0x303c38: 0x0  nop
    ctx->pc = 0x303c38u;
    // NOP
label_303c3c:
    // 0x303c3c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x303c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303c40:
    // 0x303c40: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_303c44:
    if (ctx->pc == 0x303C44u) {
        ctx->pc = 0x303C44u;
            // 0x303c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x303C48u;
        goto label_303c48;
    }
    ctx->pc = 0x303C40u;
    {
        const bool branch_taken_0x303c40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x303C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303C40u;
            // 0x303c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c40) {
            ctx->pc = 0x303C4Cu;
            goto label_303c4c;
        }
    }
    ctx->pc = 0x303C48u;
label_303c48:
    // 0x303c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303c4c:
    // 0x303c4c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_303c50:
    if (ctx->pc == 0x303C50u) {
        ctx->pc = 0x303C50u;
            // 0x303c50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x303C54u;
        goto label_303c54;
    }
    ctx->pc = 0x303C4Cu;
    {
        const bool branch_taken_0x303c4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x303c4c) {
            ctx->pc = 0x303C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303C4Cu;
            // 0x303c50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303C60u;
            goto label_303c60;
        }
    }
    ctx->pc = 0x303C54u;
label_303c54:
    // 0x303c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303c58:
    // 0x303c58: 0x10000007  b           . + 4 + (0x7 << 2)
label_303c5c:
    if (ctx->pc == 0x303C5Cu) {
        ctx->pc = 0x303C5Cu;
            // 0x303c5c: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x303C60u;
        goto label_303c60;
    }
    ctx->pc = 0x303C58u;
    {
        const bool branch_taken_0x303c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303C58u;
            // 0x303c5c: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c58) {
            ctx->pc = 0x303C78u;
            goto label_303c78;
        }
    }
    ctx->pc = 0x303C60u;
label_303c60:
    // 0x303c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x303c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_303c64:
    // 0x303c64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x303c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_303c68:
    // 0x303c68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x303c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303c6c:
    // 0x303c6c: 0x0  nop
    ctx->pc = 0x303c6cu;
    // NOP
label_303c70:
    // 0x303c70: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x303c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_303c74:
    // 0x303c74: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x303c74u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_303c78:
    // 0x303c78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_303c7c:
    // 0x303c7c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x303c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_303c80:
    // 0x303c80: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x303c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_303c84:
    // 0x303c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303c88:
    // 0x303c88: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x303c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_303c8c:
    // 0x303c8c: 0x0  nop
    ctx->pc = 0x303c8cu;
    // NOP
label_303c90:
    // 0x303c90: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x303c90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_303c94:
    // 0x303c94: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x303c94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_303c98:
    // 0x303c98: 0x4602b036  c.le.s      $f22, $f2
    ctx->pc = 0x303c98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303c9c:
    // 0x303c9c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_303ca0:
    if (ctx->pc == 0x303CA0u) {
        ctx->pc = 0x303CA0u;
            // 0x303ca0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x303CA4u;
        goto label_303ca4;
    }
    ctx->pc = 0x303C9Cu;
    {
        const bool branch_taken_0x303c9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x303CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303C9Cu;
            // 0x303ca0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c9c) {
            ctx->pc = 0x303CD8u;
            goto label_303cd8;
        }
    }
    ctx->pc = 0x303CA4u;
label_303ca4:
    // 0x303ca4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x303ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303ca8:
    // 0x303ca8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_303cac:
    if (ctx->pc == 0x303CACu) {
        ctx->pc = 0x303CACu;
            // 0x303cac: 0x4600a807  neg.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[21]);
        ctx->pc = 0x303CB0u;
        goto label_303cb0;
    }
    ctx->pc = 0x303CA8u;
    {
        const bool branch_taken_0x303ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303ca8) {
            ctx->pc = 0x303CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303CA8u;
            // 0x303cac: 0x4600a807  neg.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x303CC4u;
            goto label_303cc4;
        }
    }
    ctx->pc = 0x303CB0u;
label_303cb0:
    // 0x303cb0: 0x46170836  c.le.s      $f1, $f23
    ctx->pc = 0x303cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303cb4:
    // 0x303cb4: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_303cb8:
    if (ctx->pc == 0x303CB8u) {
        ctx->pc = 0x303CB8u;
            // 0x303cb8: 0xc6400880  lwc1        $f0, 0x880($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x303CBCu;
        goto label_303cbc;
    }
    ctx->pc = 0x303CB4u;
    {
        const bool branch_taken_0x303cb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303cb4) {
            ctx->pc = 0x303CB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303CB4u;
            // 0x303cb8: 0xc6400880  lwc1        $f0, 0x880($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x303D0Cu;
            goto label_303d0c;
        }
    }
    ctx->pc = 0x303CBCu;
label_303cbc:
    // 0x303cbc: 0x10000012  b           . + 4 + (0x12 << 2)
label_303cc0:
    if (ctx->pc == 0x303CC0u) {
        ctx->pc = 0x303CC0u;
            // 0x303cc0: 0x4601bd01  sub.s       $f20, $f23, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
        ctx->pc = 0x303CC4u;
        goto label_303cc4;
    }
    ctx->pc = 0x303CBCu;
    {
        const bool branch_taken_0x303cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303CBCu;
            // 0x303cc0: 0x4601bd01  sub.s       $f20, $f23, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cbc) {
            ctx->pc = 0x303D08u;
            goto label_303d08;
        }
    }
    ctx->pc = 0x303CC4u;
label_303cc4:
    // 0x303cc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303cc8:
    // 0x303cc8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_303ccc:
    if (ctx->pc == 0x303CCCu) {
        ctx->pc = 0x303CD0u;
        goto label_303cd0;
    }
    ctx->pc = 0x303CC8u;
    {
        const bool branch_taken_0x303cc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303cc8) {
            ctx->pc = 0x303D08u;
            goto label_303d08;
        }
    }
    ctx->pc = 0x303CD0u;
label_303cd0:
    // 0x303cd0: 0x1000000d  b           . + 4 + (0xD << 2)
label_303cd4:
    if (ctx->pc == 0x303CD4u) {
        ctx->pc = 0x303CD4u;
            // 0x303cd4: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x303CD8u;
        goto label_303cd8;
    }
    ctx->pc = 0x303CD0u;
    {
        const bool branch_taken_0x303cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303CD0u;
            // 0x303cd4: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cd0) {
            ctx->pc = 0x303D08u;
            goto label_303d08;
        }
    }
    ctx->pc = 0x303CD8u;
label_303cd8:
    // 0x303cd8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x303cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303cdc:
    // 0x303cdc: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_303ce0:
    if (ctx->pc == 0x303CE0u) {
        ctx->pc = 0x303CE0u;
            // 0x303ce0: 0x4600b807  neg.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[23]);
        ctx->pc = 0x303CE4u;
        goto label_303ce4;
    }
    ctx->pc = 0x303CDCu;
    {
        const bool branch_taken_0x303cdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303cdc) {
            ctx->pc = 0x303CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303CDCu;
            // 0x303ce0: 0x4600b807  neg.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x303CF8u;
            goto label_303cf8;
        }
    }
    ctx->pc = 0x303CE4u;
label_303ce4:
    // 0x303ce4: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x303ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303ce8:
    // 0x303ce8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_303cec:
    if (ctx->pc == 0x303CECu) {
        ctx->pc = 0x303CF0u;
        goto label_303cf0;
    }
    ctx->pc = 0x303CE8u;
    {
        const bool branch_taken_0x303ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303ce8) {
            ctx->pc = 0x303D08u;
            goto label_303d08;
        }
    }
    ctx->pc = 0x303CF0u;
label_303cf0:
    // 0x303cf0: 0x10000005  b           . + 4 + (0x5 << 2)
label_303cf4:
    if (ctx->pc == 0x303CF4u) {
        ctx->pc = 0x303CF4u;
            // 0x303cf4: 0x4601ad01  sub.s       $f20, $f21, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->pc = 0x303CF8u;
        goto label_303cf8;
    }
    ctx->pc = 0x303CF0u;
    {
        const bool branch_taken_0x303cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303CF0u;
            // 0x303cf4: 0x4601ad01  sub.s       $f20, $f21, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cf0) {
            ctx->pc = 0x303D08u;
            goto label_303d08;
        }
    }
    ctx->pc = 0x303CF8u;
label_303cf8:
    // 0x303cf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303cfc:
    // 0x303cfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_303d00:
    if (ctx->pc == 0x303D00u) {
        ctx->pc = 0x303D04u;
        goto label_303d04;
    }
    ctx->pc = 0x303CFCu;
    {
        const bool branch_taken_0x303cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303cfc) {
            ctx->pc = 0x303D08u;
            goto label_303d08;
        }
    }
    ctx->pc = 0x303D04u;
label_303d04:
    // 0x303d04: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x303d04u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_303d08:
    // 0x303d08: 0xc6400880  lwc1        $f0, 0x880($s2)
    ctx->pc = 0x303d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303d0c:
    // 0x303d0c: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x303d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_303d10:
    // 0x303d10: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x303d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_303d14:
    // 0x303d14: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x303d14u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_303d18:
    // 0x303d18: 0xc0c753c  jal         func_31D4F0
label_303d1c:
    if (ctx->pc == 0x303D1Cu) {
        ctx->pc = 0x303D1Cu;
            // 0x303d1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x303D20u;
        goto label_303d20;
    }
    ctx->pc = 0x303D18u;
    SET_GPR_U32(ctx, 31, 0x303D20u);
    ctx->pc = 0x303D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303D18u;
            // 0x303d1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303D20u; }
        if (ctx->pc != 0x303D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303D20u; }
        if (ctx->pc != 0x303D20u) { return; }
    }
    ctx->pc = 0x303D20u;
label_303d20:
    // 0x303d20: 0xc6400930  lwc1        $f0, 0x930($s2)
    ctx->pc = 0x303d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303d24:
    // 0x303d24: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x303d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_303d28:
    // 0x303d28: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x303d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_303d2c:
    // 0x303d2c: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x303d2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_303d30:
    // 0x303d30: 0xc0c753c  jal         func_31D4F0
label_303d34:
    if (ctx->pc == 0x303D34u) {
        ctx->pc = 0x303D34u;
            // 0x303d34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x303D38u;
        goto label_303d38;
    }
    ctx->pc = 0x303D30u;
    SET_GPR_U32(ctx, 31, 0x303D38u);
    ctx->pc = 0x303D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303D30u;
            // 0x303d34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303D38u; }
        if (ctx->pc != 0x303D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303D38u; }
        if (ctx->pc != 0x303D38u) { return; }
    }
    ctx->pc = 0x303D38u;
label_303d38:
    // 0x303d38: 0x1000000a  b           . + 4 + (0xA << 2)
label_303d3c:
    if (ctx->pc == 0x303D3Cu) {
        ctx->pc = 0x303D3Cu;
            // 0x303d3c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x303D40u;
        goto label_303d40;
    }
    ctx->pc = 0x303D38u;
    {
        const bool branch_taken_0x303d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303D38u;
            // 0x303d3c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d38) {
            ctx->pc = 0x303D64u;
            goto label_303d64;
        }
    }
    ctx->pc = 0x303D40u;
label_303d40:
    // 0x303d40: 0x8e420d9c  lw          $v0, 0xD9C($s2)
    ctx->pc = 0x303d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_303d44:
    // 0x303d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x303d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_303d48:
    // 0x303d48: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x303d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_303d4c:
    // 0x303d4c: 0xae420d9c  sw          $v0, 0xD9C($s2)
    ctx->pc = 0x303d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 2));
label_303d50:
    // 0x303d50: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x303d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_303d54:
    // 0x303d54: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x303d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_303d58:
    // 0x303d58: 0x320f809  jalr        $t9
label_303d5c:
    if (ctx->pc == 0x303D5Cu) {
        ctx->pc = 0x303D5Cu;
            // 0x303d5c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x303D60u;
        goto label_303d60;
    }
    ctx->pc = 0x303D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303D60u);
        ctx->pc = 0x303D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303D58u;
            // 0x303d5c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303D60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303D60u; }
            if (ctx->pc != 0x303D60u) { return; }
        }
        }
    }
    ctx->pc = 0x303D60u;
label_303d60:
    // 0x303d60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x303d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_303d64:
    // 0x303d64: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x303d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_303d68:
    // 0x303d68: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x303d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_303d6c:
    // 0x303d6c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x303d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_303d70:
    // 0x303d70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x303d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_303d74:
    // 0x303d74: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x303d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_303d78:
    // 0x303d78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x303d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_303d7c:
    // 0x303d7c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x303d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_303d80:
    // 0x303d80: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x303d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_303d84:
    // 0x303d84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x303d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_303d88:
    // 0x303d88: 0x3e00008  jr          $ra
label_303d8c:
    if (ctx->pc == 0x303D8Cu) {
        ctx->pc = 0x303D8Cu;
            // 0x303d8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x303D90u;
        goto label_fallthrough_0x303d88;
    }
    ctx->pc = 0x303D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303D88u;
            // 0x303d8c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x303d88:
    ctx->pc = 0x303D90u;
}
