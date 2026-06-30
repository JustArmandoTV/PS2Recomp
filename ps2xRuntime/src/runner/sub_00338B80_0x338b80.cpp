#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00338B80
// Address: 0x338b80 - 0x338f70
void sub_00338B80_0x338b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338B80_0x338b80");
#endif

    switch (ctx->pc) {
        case 0x338b80u: goto label_338b80;
        case 0x338b84u: goto label_338b84;
        case 0x338b88u: goto label_338b88;
        case 0x338b8cu: goto label_338b8c;
        case 0x338b90u: goto label_338b90;
        case 0x338b94u: goto label_338b94;
        case 0x338b98u: goto label_338b98;
        case 0x338b9cu: goto label_338b9c;
        case 0x338ba0u: goto label_338ba0;
        case 0x338ba4u: goto label_338ba4;
        case 0x338ba8u: goto label_338ba8;
        case 0x338bacu: goto label_338bac;
        case 0x338bb0u: goto label_338bb0;
        case 0x338bb4u: goto label_338bb4;
        case 0x338bb8u: goto label_338bb8;
        case 0x338bbcu: goto label_338bbc;
        case 0x338bc0u: goto label_338bc0;
        case 0x338bc4u: goto label_338bc4;
        case 0x338bc8u: goto label_338bc8;
        case 0x338bccu: goto label_338bcc;
        case 0x338bd0u: goto label_338bd0;
        case 0x338bd4u: goto label_338bd4;
        case 0x338bd8u: goto label_338bd8;
        case 0x338bdcu: goto label_338bdc;
        case 0x338be0u: goto label_338be0;
        case 0x338be4u: goto label_338be4;
        case 0x338be8u: goto label_338be8;
        case 0x338becu: goto label_338bec;
        case 0x338bf0u: goto label_338bf0;
        case 0x338bf4u: goto label_338bf4;
        case 0x338bf8u: goto label_338bf8;
        case 0x338bfcu: goto label_338bfc;
        case 0x338c00u: goto label_338c00;
        case 0x338c04u: goto label_338c04;
        case 0x338c08u: goto label_338c08;
        case 0x338c0cu: goto label_338c0c;
        case 0x338c10u: goto label_338c10;
        case 0x338c14u: goto label_338c14;
        case 0x338c18u: goto label_338c18;
        case 0x338c1cu: goto label_338c1c;
        case 0x338c20u: goto label_338c20;
        case 0x338c24u: goto label_338c24;
        case 0x338c28u: goto label_338c28;
        case 0x338c2cu: goto label_338c2c;
        case 0x338c30u: goto label_338c30;
        case 0x338c34u: goto label_338c34;
        case 0x338c38u: goto label_338c38;
        case 0x338c3cu: goto label_338c3c;
        case 0x338c40u: goto label_338c40;
        case 0x338c44u: goto label_338c44;
        case 0x338c48u: goto label_338c48;
        case 0x338c4cu: goto label_338c4c;
        case 0x338c50u: goto label_338c50;
        case 0x338c54u: goto label_338c54;
        case 0x338c58u: goto label_338c58;
        case 0x338c5cu: goto label_338c5c;
        case 0x338c60u: goto label_338c60;
        case 0x338c64u: goto label_338c64;
        case 0x338c68u: goto label_338c68;
        case 0x338c6cu: goto label_338c6c;
        case 0x338c70u: goto label_338c70;
        case 0x338c74u: goto label_338c74;
        case 0x338c78u: goto label_338c78;
        case 0x338c7cu: goto label_338c7c;
        case 0x338c80u: goto label_338c80;
        case 0x338c84u: goto label_338c84;
        case 0x338c88u: goto label_338c88;
        case 0x338c8cu: goto label_338c8c;
        case 0x338c90u: goto label_338c90;
        case 0x338c94u: goto label_338c94;
        case 0x338c98u: goto label_338c98;
        case 0x338c9cu: goto label_338c9c;
        case 0x338ca0u: goto label_338ca0;
        case 0x338ca4u: goto label_338ca4;
        case 0x338ca8u: goto label_338ca8;
        case 0x338cacu: goto label_338cac;
        case 0x338cb0u: goto label_338cb0;
        case 0x338cb4u: goto label_338cb4;
        case 0x338cb8u: goto label_338cb8;
        case 0x338cbcu: goto label_338cbc;
        case 0x338cc0u: goto label_338cc0;
        case 0x338cc4u: goto label_338cc4;
        case 0x338cc8u: goto label_338cc8;
        case 0x338cccu: goto label_338ccc;
        case 0x338cd0u: goto label_338cd0;
        case 0x338cd4u: goto label_338cd4;
        case 0x338cd8u: goto label_338cd8;
        case 0x338cdcu: goto label_338cdc;
        case 0x338ce0u: goto label_338ce0;
        case 0x338ce4u: goto label_338ce4;
        case 0x338ce8u: goto label_338ce8;
        case 0x338cecu: goto label_338cec;
        case 0x338cf0u: goto label_338cf0;
        case 0x338cf4u: goto label_338cf4;
        case 0x338cf8u: goto label_338cf8;
        case 0x338cfcu: goto label_338cfc;
        case 0x338d00u: goto label_338d00;
        case 0x338d04u: goto label_338d04;
        case 0x338d08u: goto label_338d08;
        case 0x338d0cu: goto label_338d0c;
        case 0x338d10u: goto label_338d10;
        case 0x338d14u: goto label_338d14;
        case 0x338d18u: goto label_338d18;
        case 0x338d1cu: goto label_338d1c;
        case 0x338d20u: goto label_338d20;
        case 0x338d24u: goto label_338d24;
        case 0x338d28u: goto label_338d28;
        case 0x338d2cu: goto label_338d2c;
        case 0x338d30u: goto label_338d30;
        case 0x338d34u: goto label_338d34;
        case 0x338d38u: goto label_338d38;
        case 0x338d3cu: goto label_338d3c;
        case 0x338d40u: goto label_338d40;
        case 0x338d44u: goto label_338d44;
        case 0x338d48u: goto label_338d48;
        case 0x338d4cu: goto label_338d4c;
        case 0x338d50u: goto label_338d50;
        case 0x338d54u: goto label_338d54;
        case 0x338d58u: goto label_338d58;
        case 0x338d5cu: goto label_338d5c;
        case 0x338d60u: goto label_338d60;
        case 0x338d64u: goto label_338d64;
        case 0x338d68u: goto label_338d68;
        case 0x338d6cu: goto label_338d6c;
        case 0x338d70u: goto label_338d70;
        case 0x338d74u: goto label_338d74;
        case 0x338d78u: goto label_338d78;
        case 0x338d7cu: goto label_338d7c;
        case 0x338d80u: goto label_338d80;
        case 0x338d84u: goto label_338d84;
        case 0x338d88u: goto label_338d88;
        case 0x338d8cu: goto label_338d8c;
        case 0x338d90u: goto label_338d90;
        case 0x338d94u: goto label_338d94;
        case 0x338d98u: goto label_338d98;
        case 0x338d9cu: goto label_338d9c;
        case 0x338da0u: goto label_338da0;
        case 0x338da4u: goto label_338da4;
        case 0x338da8u: goto label_338da8;
        case 0x338dacu: goto label_338dac;
        case 0x338db0u: goto label_338db0;
        case 0x338db4u: goto label_338db4;
        case 0x338db8u: goto label_338db8;
        case 0x338dbcu: goto label_338dbc;
        case 0x338dc0u: goto label_338dc0;
        case 0x338dc4u: goto label_338dc4;
        case 0x338dc8u: goto label_338dc8;
        case 0x338dccu: goto label_338dcc;
        case 0x338dd0u: goto label_338dd0;
        case 0x338dd4u: goto label_338dd4;
        case 0x338dd8u: goto label_338dd8;
        case 0x338ddcu: goto label_338ddc;
        case 0x338de0u: goto label_338de0;
        case 0x338de4u: goto label_338de4;
        case 0x338de8u: goto label_338de8;
        case 0x338decu: goto label_338dec;
        case 0x338df0u: goto label_338df0;
        case 0x338df4u: goto label_338df4;
        case 0x338df8u: goto label_338df8;
        case 0x338dfcu: goto label_338dfc;
        case 0x338e00u: goto label_338e00;
        case 0x338e04u: goto label_338e04;
        case 0x338e08u: goto label_338e08;
        case 0x338e0cu: goto label_338e0c;
        case 0x338e10u: goto label_338e10;
        case 0x338e14u: goto label_338e14;
        case 0x338e18u: goto label_338e18;
        case 0x338e1cu: goto label_338e1c;
        case 0x338e20u: goto label_338e20;
        case 0x338e24u: goto label_338e24;
        case 0x338e28u: goto label_338e28;
        case 0x338e2cu: goto label_338e2c;
        case 0x338e30u: goto label_338e30;
        case 0x338e34u: goto label_338e34;
        case 0x338e38u: goto label_338e38;
        case 0x338e3cu: goto label_338e3c;
        case 0x338e40u: goto label_338e40;
        case 0x338e44u: goto label_338e44;
        case 0x338e48u: goto label_338e48;
        case 0x338e4cu: goto label_338e4c;
        case 0x338e50u: goto label_338e50;
        case 0x338e54u: goto label_338e54;
        case 0x338e58u: goto label_338e58;
        case 0x338e5cu: goto label_338e5c;
        case 0x338e60u: goto label_338e60;
        case 0x338e64u: goto label_338e64;
        case 0x338e68u: goto label_338e68;
        case 0x338e6cu: goto label_338e6c;
        case 0x338e70u: goto label_338e70;
        case 0x338e74u: goto label_338e74;
        case 0x338e78u: goto label_338e78;
        case 0x338e7cu: goto label_338e7c;
        case 0x338e80u: goto label_338e80;
        case 0x338e84u: goto label_338e84;
        case 0x338e88u: goto label_338e88;
        case 0x338e8cu: goto label_338e8c;
        case 0x338e90u: goto label_338e90;
        case 0x338e94u: goto label_338e94;
        case 0x338e98u: goto label_338e98;
        case 0x338e9cu: goto label_338e9c;
        case 0x338ea0u: goto label_338ea0;
        case 0x338ea4u: goto label_338ea4;
        case 0x338ea8u: goto label_338ea8;
        case 0x338eacu: goto label_338eac;
        case 0x338eb0u: goto label_338eb0;
        case 0x338eb4u: goto label_338eb4;
        case 0x338eb8u: goto label_338eb8;
        case 0x338ebcu: goto label_338ebc;
        case 0x338ec0u: goto label_338ec0;
        case 0x338ec4u: goto label_338ec4;
        case 0x338ec8u: goto label_338ec8;
        case 0x338eccu: goto label_338ecc;
        case 0x338ed0u: goto label_338ed0;
        case 0x338ed4u: goto label_338ed4;
        case 0x338ed8u: goto label_338ed8;
        case 0x338edcu: goto label_338edc;
        case 0x338ee0u: goto label_338ee0;
        case 0x338ee4u: goto label_338ee4;
        case 0x338ee8u: goto label_338ee8;
        case 0x338eecu: goto label_338eec;
        case 0x338ef0u: goto label_338ef0;
        case 0x338ef4u: goto label_338ef4;
        case 0x338ef8u: goto label_338ef8;
        case 0x338efcu: goto label_338efc;
        case 0x338f00u: goto label_338f00;
        case 0x338f04u: goto label_338f04;
        case 0x338f08u: goto label_338f08;
        case 0x338f0cu: goto label_338f0c;
        case 0x338f10u: goto label_338f10;
        case 0x338f14u: goto label_338f14;
        case 0x338f18u: goto label_338f18;
        case 0x338f1cu: goto label_338f1c;
        case 0x338f20u: goto label_338f20;
        case 0x338f24u: goto label_338f24;
        case 0x338f28u: goto label_338f28;
        case 0x338f2cu: goto label_338f2c;
        case 0x338f30u: goto label_338f30;
        case 0x338f34u: goto label_338f34;
        case 0x338f38u: goto label_338f38;
        case 0x338f3cu: goto label_338f3c;
        case 0x338f40u: goto label_338f40;
        case 0x338f44u: goto label_338f44;
        case 0x338f48u: goto label_338f48;
        case 0x338f4cu: goto label_338f4c;
        case 0x338f50u: goto label_338f50;
        case 0x338f54u: goto label_338f54;
        case 0x338f58u: goto label_338f58;
        case 0x338f5cu: goto label_338f5c;
        case 0x338f60u: goto label_338f60;
        case 0x338f64u: goto label_338f64;
        case 0x338f68u: goto label_338f68;
        case 0x338f6cu: goto label_338f6c;
        default: break;
    }

    ctx->pc = 0x338b80u;

label_338b80:
    // 0x338b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x338b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_338b84:
    // 0x338b84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x338b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_338b88:
    // 0x338b88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x338b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_338b8c:
    // 0x338b8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x338b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_338b90:
    // 0x338b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x338b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_338b94:
    // 0x338b94: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x338b94u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_338b98:
    // 0x338b98: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x338b98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_338b9c:
    // 0x338b9c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x338b9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_338ba0:
    // 0x338ba0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x338ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_338ba4:
    // 0x338ba4: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x338ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_338ba8:
    // 0x338ba8: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x338ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_338bac:
    // 0x338bac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x338bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_338bb0:
    // 0x338bb0: 0x5062003d  beql        $v1, $v0, . + 4 + (0x3D << 2)
label_338bb4:
    if (ctx->pc == 0x338BB4u) {
        ctx->pc = 0x338BB4u;
            // 0x338bb4: 0x9082006c  lbu         $v0, 0x6C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->pc = 0x338BB8u;
        goto label_338bb8;
    }
    ctx->pc = 0x338BB0u;
    {
        const bool branch_taken_0x338bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x338bb0) {
            ctx->pc = 0x338BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338BB0u;
            // 0x338bb4: 0x9082006c  lbu         $v0, 0x6C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338CA8u;
            goto label_338ca8;
        }
    }
    ctx->pc = 0x338BB8u;
label_338bb8:
    // 0x338bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338bbc:
    // 0x338bbc: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
label_338bc0:
    if (ctx->pc == 0x338BC0u) {
        ctx->pc = 0x338BC0u;
            // 0x338bc0: 0xc4830054  lwc1        $f3, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x338BC4u;
        goto label_338bc4;
    }
    ctx->pc = 0x338BBCu;
    {
        const bool branch_taken_0x338bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x338bbc) {
            ctx->pc = 0x338BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338BBCu;
            // 0x338bc0: 0xc4830054  lwc1        $f3, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x338C3Cu;
            goto label_338c3c;
        }
    }
    ctx->pc = 0x338BC4u;
label_338bc4:
    // 0x338bc4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_338bc8:
    if (ctx->pc == 0x338BC8u) {
        ctx->pc = 0x338BC8u;
            // 0x338bc8: 0xc4830058  lwc1        $f3, 0x58($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x338BCCu;
        goto label_338bcc;
    }
    ctx->pc = 0x338BC4u;
    {
        const bool branch_taken_0x338bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x338bc4) {
            ctx->pc = 0x338BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338BC4u;
            // 0x338bc8: 0xc4830058  lwc1        $f3, 0x58($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x338BD4u;
            goto label_338bd4;
        }
    }
    ctx->pc = 0x338BCCu;
label_338bcc:
    // 0x338bcc: 0x10000094  b           . + 4 + (0x94 << 2)
label_338bd0:
    if (ctx->pc == 0x338BD0u) {
        ctx->pc = 0x338BD0u;
            // 0x338bd0: 0xa2000004  sb          $zero, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x338BD4u;
        goto label_338bd4;
    }
    ctx->pc = 0x338BCCu;
    {
        const bool branch_taken_0x338bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338BCCu;
            // 0x338bd0: 0xa2000004  sb          $zero, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bcc) {
            ctx->pc = 0x338E20u;
            goto label_338e20;
        }
    }
    ctx->pc = 0x338BD4u;
label_338bd4:
    // 0x338bd4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x338bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_338bd8:
    // 0x338bd8: 0xc4820054  lwc1        $f2, 0x54($a0)
    ctx->pc = 0x338bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_338bdc:
    // 0x338bdc: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x338bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_338be0:
    // 0x338be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338be4:
    // 0x338be4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x338be4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_338be8:
    // 0x338be8: 0x0  nop
    ctx->pc = 0x338be8u;
    // NOP
label_338bec:
    // 0x338bec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x338becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_338bf0:
    // 0x338bf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x338bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_338bf4:
    // 0x338bf4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_338bf8:
    if (ctx->pc == 0x338BF8u) {
        ctx->pc = 0x338BF8u;
            // 0x338bf8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x338BFCu;
        goto label_338bfc;
    }
    ctx->pc = 0x338BF4u;
    {
        const bool branch_taken_0x338bf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338bf4) {
            ctx->pc = 0x338BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338BF4u;
            // 0x338bf8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x338C0Cu;
            goto label_338c0c;
        }
    }
    ctx->pc = 0x338BFCu;
label_338bfc:
    // 0x338bfc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338c00:
    // 0x338c00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x338c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_338c04:
    // 0x338c04: 0x10000007  b           . + 4 + (0x7 << 2)
label_338c08:
    if (ctx->pc == 0x338C08u) {
        ctx->pc = 0x338C08u;
            // 0x338c08: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x338C0Cu;
        goto label_338c0c;
    }
    ctx->pc = 0x338C04u;
    {
        const bool branch_taken_0x338c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338C04u;
            // 0x338c08: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c04) {
            ctx->pc = 0x338C24u;
            goto label_338c24;
        }
    }
    ctx->pc = 0x338C0Cu;
label_338c0c:
    // 0x338c0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_338c10:
    // 0x338c10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338c14:
    // 0x338c14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x338c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_338c18:
    // 0x338c18: 0x0  nop
    ctx->pc = 0x338c18u;
    // NOP
label_338c1c:
    // 0x338c1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338c20:
    // 0x338c20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x338c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_338c24:
    // 0x338c24: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x338c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_338c28:
    // 0x338c28: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x338c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_338c2c:
    // 0x338c2c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x338c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_338c30:
    // 0x338c30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x338c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_338c34:
    // 0x338c34: 0x10000079  b           . + 4 + (0x79 << 2)
label_338c38:
    if (ctx->pc == 0x338C38u) {
        ctx->pc = 0x338C38u;
            // 0x338c38: 0x458825  or          $s1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->pc = 0x338C3Cu;
        goto label_338c3c;
    }
    ctx->pc = 0x338C34u;
    {
        const bool branch_taken_0x338c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338C34u;
            // 0x338c38: 0x458825  or          $s1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c34) {
            ctx->pc = 0x338E1Cu;
            goto label_338e1c;
        }
    }
    ctx->pc = 0x338C3Cu;
label_338c3c:
    // 0x338c3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x338c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_338c40:
    // 0x338c40: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x338c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_338c44:
    // 0x338c44: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x338c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_338c48:
    // 0x338c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338c4c:
    // 0x338c4c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x338c4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_338c50:
    // 0x338c50: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x338c50u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_338c54:
    // 0x338c54: 0x0  nop
    ctx->pc = 0x338c54u;
    // NOP
label_338c58:
    // 0x338c58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x338c58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_338c5c:
    // 0x338c5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x338c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_338c60:
    // 0x338c60: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_338c64:
    if (ctx->pc == 0x338C64u) {
        ctx->pc = 0x338C64u;
            // 0x338c64: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x338C68u;
        goto label_338c68;
    }
    ctx->pc = 0x338C60u;
    {
        const bool branch_taken_0x338c60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338c60) {
            ctx->pc = 0x338C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338C60u;
            // 0x338c64: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x338C78u;
            goto label_338c78;
        }
    }
    ctx->pc = 0x338C68u;
label_338c68:
    // 0x338c68: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338c68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338c6c:
    // 0x338c6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x338c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_338c70:
    // 0x338c70: 0x10000007  b           . + 4 + (0x7 << 2)
label_338c74:
    if (ctx->pc == 0x338C74u) {
        ctx->pc = 0x338C74u;
            // 0x338c74: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x338C78u;
        goto label_338c78;
    }
    ctx->pc = 0x338C70u;
    {
        const bool branch_taken_0x338c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338C70u;
            // 0x338c74: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c70) {
            ctx->pc = 0x338C90u;
            goto label_338c90;
        }
    }
    ctx->pc = 0x338C78u;
label_338c78:
    // 0x338c78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_338c7c:
    // 0x338c7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338c80:
    // 0x338c80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x338c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_338c84:
    // 0x338c84: 0x0  nop
    ctx->pc = 0x338c84u;
    // NOP
label_338c88:
    // 0x338c88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338c8c:
    // 0x338c8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x338c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_338c90:
    // 0x338c90: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x338c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_338c94:
    // 0x338c94: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x338c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_338c98:
    // 0x338c98: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x338c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_338c9c:
    // 0x338c9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x338c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_338ca0:
    // 0x338ca0: 0x1000005e  b           . + 4 + (0x5E << 2)
label_338ca4:
    if (ctx->pc == 0x338CA4u) {
        ctx->pc = 0x338CA4u;
            // 0x338ca4: 0x458825  or          $s1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->pc = 0x338CA8u;
        goto label_338ca8;
    }
    ctx->pc = 0x338CA0u;
    {
        const bool branch_taken_0x338ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338CA0u;
            // 0x338ca4: 0x458825  or          $s1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ca0) {
            ctx->pc = 0x338E1Cu;
            goto label_338e1c;
        }
    }
    ctx->pc = 0x338CA8u;
label_338ca8:
    // 0x338ca8: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
label_338cac:
    if (ctx->pc == 0x338CACu) {
        ctx->pc = 0x338CACu;
            // 0x338cac: 0xc4840054  lwc1        $f4, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x338CB0u;
        goto label_338cb0;
    }
    ctx->pc = 0x338CA8u;
    {
        const bool branch_taken_0x338ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338ca8) {
            ctx->pc = 0x338CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338CA8u;
            // 0x338cac: 0xc4840054  lwc1        $f4, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x338DA4u;
            goto label_338da4;
        }
    }
    ctx->pc = 0x338CB0u;
label_338cb0:
    // 0x338cb0: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x338cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_338cb4:
    // 0x338cb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x338cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_338cb8:
    // 0x338cb8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x338cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_338cbc:
    // 0x338cbc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x338cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_338cc0:
    // 0x338cc0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x338cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_338cc4:
    // 0x338cc4: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x338cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_338cc8:
    // 0x338cc8: 0xc4840060  lwc1        $f4, 0x60($a0)
    ctx->pc = 0x338cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_338ccc:
    // 0x338ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338cd0:
    // 0x338cd0: 0x0  nop
    ctx->pc = 0x338cd0u;
    // NOP
label_338cd4:
    // 0x338cd4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x338cd4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_338cd8:
    // 0x338cd8: 0x0  nop
    ctx->pc = 0x338cd8u;
    // NOP
label_338cdc:
    // 0x338cdc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x338cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_338ce0:
    // 0x338ce0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x338ce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_338ce4:
    // 0x338ce4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_338ce8:
    if (ctx->pc == 0x338CE8u) {
        ctx->pc = 0x338CE8u;
            // 0x338ce8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x338CECu;
        goto label_338cec;
    }
    ctx->pc = 0x338CE4u;
    {
        const bool branch_taken_0x338ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338ce4) {
            ctx->pc = 0x338CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338CE4u;
            // 0x338ce8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x338CFCu;
            goto label_338cfc;
        }
    }
    ctx->pc = 0x338CECu;
label_338cec:
    // 0x338cec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338cecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338cf0:
    // 0x338cf0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x338cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_338cf4:
    // 0x338cf4: 0x10000006  b           . + 4 + (0x6 << 2)
label_338cf8:
    if (ctx->pc == 0x338CF8u) {
        ctx->pc = 0x338CFCu;
        goto label_338cfc;
    }
    ctx->pc = 0x338CF4u;
    {
        const bool branch_taken_0x338cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338cf4) {
            ctx->pc = 0x338D10u;
            goto label_338d10;
        }
    }
    ctx->pc = 0x338CFCu;
label_338cfc:
    // 0x338cfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_338d00:
    // 0x338d00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338d00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338d04:
    // 0x338d04: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x338d04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_338d08:
    // 0x338d08: 0x0  nop
    ctx->pc = 0x338d08u;
    // NOP
label_338d0c:
    // 0x338d0c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x338d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_338d10:
    // 0x338d10: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_338d14:
    if (ctx->pc == 0x338D14u) {
        ctx->pc = 0x338D14u;
            // 0x338d14: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x338D18u;
        goto label_338d18;
    }
    ctx->pc = 0x338D10u;
    {
        const bool branch_taken_0x338d10 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x338d10) {
            ctx->pc = 0x338D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338D10u;
            // 0x338d14: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338D24u;
            goto label_338d24;
        }
    }
    ctx->pc = 0x338D18u;
label_338d18:
    // 0x338d18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x338d18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338d1c:
    // 0x338d1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_338d20:
    if (ctx->pc == 0x338D20u) {
        ctx->pc = 0x338D20u;
            // 0x338d20: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x338D24u;
        goto label_338d24;
    }
    ctx->pc = 0x338D1Cu;
    {
        const bool branch_taken_0x338d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338D1Cu;
            // 0x338d20: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d1c) {
            ctx->pc = 0x338D3Cu;
            goto label_338d3c;
        }
    }
    ctx->pc = 0x338D24u;
label_338d24:
    // 0x338d24: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x338d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_338d28:
    // 0x338d28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338d2c:
    // 0x338d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x338d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338d30:
    // 0x338d30: 0x0  nop
    ctx->pc = 0x338d30u;
    // NOP
label_338d34:
    // 0x338d34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x338d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_338d38:
    // 0x338d38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x338d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_338d3c:
    // 0x338d3c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x338d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_338d40:
    // 0x338d40: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_338d44:
    if (ctx->pc == 0x338D44u) {
        ctx->pc = 0x338D44u;
            // 0x338d44: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x338D48u;
        goto label_338d48;
    }
    ctx->pc = 0x338D40u;
    {
        const bool branch_taken_0x338d40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x338d40) {
            ctx->pc = 0x338D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338D40u;
            // 0x338d44: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x338D90u;
            goto label_338d90;
        }
    }
    ctx->pc = 0x338D48u;
label_338d48:
    // 0x338d48: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x338d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_338d4c:
    // 0x338d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338d50:
    // 0x338d50: 0x0  nop
    ctx->pc = 0x338d50u;
    // NOP
label_338d54:
    // 0x338d54: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x338d54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_338d58:
    // 0x338d58: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_338d5c:
    if (ctx->pc == 0x338D5Cu) {
        ctx->pc = 0x338D5Cu;
            // 0x338d5c: 0x46002001  sub.s       $f0, $f4, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->pc = 0x338D60u;
        goto label_338d60;
    }
    ctx->pc = 0x338D58u;
    {
        const bool branch_taken_0x338d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338d58) {
            ctx->pc = 0x338D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338D58u;
            // 0x338d5c: 0x46002001  sub.s       $f0, $f4, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x338D70u;
            goto label_338d70;
        }
    }
    ctx->pc = 0x338D60u;
label_338d60:
    // 0x338d60: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338d60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338d64:
    // 0x338d64: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x338d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_338d68:
    // 0x338d68: 0x10000007  b           . + 4 + (0x7 << 2)
label_338d6c:
    if (ctx->pc == 0x338D6Cu) {
        ctx->pc = 0x338D6Cu;
            // 0x338d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x338D70u;
        goto label_338d70;
    }
    ctx->pc = 0x338D68u;
    {
        const bool branch_taken_0x338d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338D68u;
            // 0x338d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d68) {
            ctx->pc = 0x338D88u;
            goto label_338d88;
        }
    }
    ctx->pc = 0x338D70u;
label_338d70:
    // 0x338d70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_338d74:
    // 0x338d74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338d78:
    // 0x338d78: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x338d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_338d7c:
    // 0x338d7c: 0x0  nop
    ctx->pc = 0x338d7cu;
    // NOP
label_338d80:
    // 0x338d80: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x338d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_338d84:
    // 0x338d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338d88:
    // 0x338d88: 0xa082006c  sb          $v0, 0x6C($a0)
    ctx->pc = 0x338d88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 2));
label_338d8c:
    // 0x338d8c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x338d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_338d90:
    // 0x338d90: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x338d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_338d94:
    // 0x338d94: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x338d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_338d98:
    // 0x338d98: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x338d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_338d9c:
    // 0x338d9c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_338da0:
    if (ctx->pc == 0x338DA0u) {
        ctx->pc = 0x338DA0u;
            // 0x338da0: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x338DA4u;
        goto label_338da4;
    }
    ctx->pc = 0x338D9Cu;
    {
        const bool branch_taken_0x338d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338D9Cu;
            // 0x338da0: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d9c) {
            ctx->pc = 0x338E1Cu;
            goto label_338e1c;
        }
    }
    ctx->pc = 0x338DA4u;
label_338da4:
    // 0x338da4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x338da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_338da8:
    // 0x338da8: 0xc4830058  lwc1        $f3, 0x58($a0)
    ctx->pc = 0x338da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_338dac:
    // 0x338dac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x338dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_338db0:
    // 0x338db0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x338db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_338db4:
    // 0x338db4: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x338db4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_338db8:
    // 0x338db8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x338db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_338dbc:
    // 0x338dbc: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x338dbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_338dc0:
    // 0x338dc0: 0x46040883  div.s       $f2, $f1, $f4
    ctx->pc = 0x338dc0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[4];
label_338dc4:
    // 0x338dc4: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x338dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_338dc8:
    // 0x338dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338dcc:
    // 0x338dcc: 0x0  nop
    ctx->pc = 0x338dccu;
    // NOP
label_338dd0:
    // 0x338dd0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x338dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_338dd4:
    // 0x338dd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x338dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_338dd8:
    // 0x338dd8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_338ddc:
    if (ctx->pc == 0x338DDCu) {
        ctx->pc = 0x338DDCu;
            // 0x338ddc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x338DE0u;
        goto label_338de0;
    }
    ctx->pc = 0x338DD8u;
    {
        const bool branch_taken_0x338dd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x338dd8) {
            ctx->pc = 0x338DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338DD8u;
            // 0x338ddc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x338DF0u;
            goto label_338df0;
        }
    }
    ctx->pc = 0x338DE0u;
label_338de0:
    // 0x338de0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338de0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338de4:
    // 0x338de4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x338de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_338de8:
    // 0x338de8: 0x10000007  b           . + 4 + (0x7 << 2)
label_338dec:
    if (ctx->pc == 0x338DECu) {
        ctx->pc = 0x338DECu;
            // 0x338dec: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x338DF0u;
        goto label_338df0;
    }
    ctx->pc = 0x338DE8u;
    {
        const bool branch_taken_0x338de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338DE8u;
            // 0x338dec: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338de8) {
            ctx->pc = 0x338E08u;
            goto label_338e08;
        }
    }
    ctx->pc = 0x338DF0u;
label_338df0:
    // 0x338df0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_338df4:
    // 0x338df4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x338df4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_338df8:
    // 0x338df8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x338df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_338dfc:
    // 0x338dfc: 0x0  nop
    ctx->pc = 0x338dfcu;
    // NOP
label_338e00:
    // 0x338e00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338e04:
    // 0x338e04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x338e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_338e08:
    // 0x338e08: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x338e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_338e0c:
    // 0x338e0c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x338e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_338e10:
    // 0x338e10: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x338e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_338e14:
    // 0x338e14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x338e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_338e18:
    // 0x338e18: 0x458825  or          $s1, $v0, $a1
    ctx->pc = 0x338e18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_338e1c:
    // 0x338e1c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x338e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_338e20:
    // 0x338e20: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x338e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_338e24:
    // 0x338e24: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x338e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_338e28:
    // 0x338e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x338e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_338e2c:
    // 0x338e2c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_338e30:
    if (ctx->pc == 0x338E30u) {
        ctx->pc = 0x338E30u;
            // 0x338e30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x338E34u;
        goto label_338e34;
    }
    ctx->pc = 0x338E2Cu;
    {
        const bool branch_taken_0x338e2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338e2c) {
            ctx->pc = 0x338E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338E2Cu;
            // 0x338e30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338E40u;
            goto label_338e40;
        }
    }
    ctx->pc = 0x338E34u;
label_338e34:
    // 0x338e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338e38:
    // 0x338e38: 0x10000007  b           . + 4 + (0x7 << 2)
label_338e3c:
    if (ctx->pc == 0x338E3Cu) {
        ctx->pc = 0x338E3Cu;
            // 0x338e3c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x338E40u;
        goto label_338e40;
    }
    ctx->pc = 0x338E38u;
    {
        const bool branch_taken_0x338e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338E38u;
            // 0x338e3c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e38) {
            ctx->pc = 0x338E58u;
            goto label_338e58;
        }
    }
    ctx->pc = 0x338E40u;
label_338e40:
    // 0x338e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x338e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_338e44:
    // 0x338e44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338e48:
    // 0x338e48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x338e48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338e4c:
    // 0x338e4c: 0x0  nop
    ctx->pc = 0x338e4cu;
    // NOP
label_338e50:
    // 0x338e50: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x338e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_338e54:
    // 0x338e54: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x338e54u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_338e58:
    // 0x338e58: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x338e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_338e5c:
    // 0x338e5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x338e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_338e60:
    // 0x338e60: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_338e64:
    if (ctx->pc == 0x338E64u) {
        ctx->pc = 0x338E64u;
            // 0x338e64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x338E68u;
        goto label_338e68;
    }
    ctx->pc = 0x338E60u;
    {
        const bool branch_taken_0x338e60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338e60) {
            ctx->pc = 0x338E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338E60u;
            // 0x338e64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338E74u;
            goto label_338e74;
        }
    }
    ctx->pc = 0x338E68u;
label_338e68:
    // 0x338e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338e6c:
    // 0x338e6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_338e70:
    if (ctx->pc == 0x338E70u) {
        ctx->pc = 0x338E70u;
            // 0x338e70: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x338E74u;
        goto label_338e74;
    }
    ctx->pc = 0x338E6Cu;
    {
        const bool branch_taken_0x338e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338E6Cu;
            // 0x338e70: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e6c) {
            ctx->pc = 0x338E8Cu;
            goto label_338e8c;
        }
    }
    ctx->pc = 0x338E74u;
label_338e74:
    // 0x338e74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x338e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_338e78:
    // 0x338e78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338e7c:
    // 0x338e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x338e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338e80:
    // 0x338e80: 0x0  nop
    ctx->pc = 0x338e80u;
    // NOP
label_338e84:
    // 0x338e84: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x338e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_338e88:
    // 0x338e88: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x338e88u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_338e8c:
    // 0x338e8c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x338e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_338e90:
    // 0x338e90: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_338e94:
    if (ctx->pc == 0x338E94u) {
        ctx->pc = 0x338E94u;
            // 0x338e94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x338E98u;
        goto label_338e98;
    }
    ctx->pc = 0x338E90u;
    {
        const bool branch_taken_0x338e90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338e90) {
            ctx->pc = 0x338E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338E90u;
            // 0x338e94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338EA4u;
            goto label_338ea4;
        }
    }
    ctx->pc = 0x338E98u;
label_338e98:
    // 0x338e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338e9c:
    // 0x338e9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_338ea0:
    if (ctx->pc == 0x338EA0u) {
        ctx->pc = 0x338EA0u;
            // 0x338ea0: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x338EA4u;
        goto label_338ea4;
    }
    ctx->pc = 0x338E9Cu;
    {
        const bool branch_taken_0x338e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338E9Cu;
            // 0x338ea0: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e9c) {
            ctx->pc = 0x338EBCu;
            goto label_338ebc;
        }
    }
    ctx->pc = 0x338EA4u;
label_338ea4:
    // 0x338ea4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x338ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_338ea8:
    // 0x338ea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338eac:
    // 0x338eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x338eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338eb0:
    // 0x338eb0: 0x0  nop
    ctx->pc = 0x338eb0u;
    // NOP
label_338eb4:
    // 0x338eb4: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x338eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_338eb8:
    // 0x338eb8: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x338eb8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_338ebc:
    // 0x338ebc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x338ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_338ec0:
    // 0x338ec0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_338ec4:
    if (ctx->pc == 0x338EC4u) {
        ctx->pc = 0x338EC4u;
            // 0x338ec4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x338EC8u;
        goto label_338ec8;
    }
    ctx->pc = 0x338EC0u;
    {
        const bool branch_taken_0x338ec0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338ec0) {
            ctx->pc = 0x338EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338EC0u;
            // 0x338ec4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338ED4u;
            goto label_338ed4;
        }
    }
    ctx->pc = 0x338EC8u;
label_338ec8:
    // 0x338ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x338ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338ecc:
    // 0x338ecc: 0x10000007  b           . + 4 + (0x7 << 2)
label_338ed0:
    if (ctx->pc == 0x338ED0u) {
        ctx->pc = 0x338ED0u;
            // 0x338ed0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x338ED4u;
        goto label_338ed4;
    }
    ctx->pc = 0x338ECCu;
    {
        const bool branch_taken_0x338ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338ECCu;
            // 0x338ed0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ecc) {
            ctx->pc = 0x338EECu;
            goto label_338eec;
        }
    }
    ctx->pc = 0x338ED4u;
label_338ed4:
    // 0x338ed4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x338ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_338ed8:
    // 0x338ed8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_338edc:
    // 0x338edc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x338edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_338ee0:
    // 0x338ee0: 0x0  nop
    ctx->pc = 0x338ee0u;
    // NOP
label_338ee4:
    // 0x338ee4: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x338ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_338ee8:
    // 0x338ee8: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x338ee8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_338eec:
    // 0x338eec: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x338eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_338ef0:
    // 0x338ef0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x338ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_338ef4:
    // 0x338ef4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x338ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_338ef8:
    // 0x338ef8: 0x320f809  jalr        $t9
label_338efc:
    if (ctx->pc == 0x338EFCu) {
        ctx->pc = 0x338EFCu;
            // 0x338efc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x338F00u;
        goto label_338f00;
    }
    ctx->pc = 0x338EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x338F00u);
        ctx->pc = 0x338EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338EF8u;
            // 0x338efc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x338F00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x338F00u; }
            if (ctx->pc != 0x338F00u) { return; }
        }
        }
    }
    ctx->pc = 0x338F00u;
label_338f00:
    // 0x338f00: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x338f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_338f04:
    // 0x338f04: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x338f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_338f08:
    // 0x338f08: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x338f08u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_338f0c:
    // 0x338f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338f10:
    // 0x338f10: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x338f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_338f14:
    // 0x338f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x338f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338f18:
    // 0x338f18: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x338f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_338f1c:
    // 0x338f1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x338f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338f20:
    // 0x338f20: 0x4615bbc0  add.s       $f15, $f23, $f21
    ctx->pc = 0x338f20u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_338f24:
    // 0x338f24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x338f24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_338f28:
    // 0x338f28: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x338f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_338f2c:
    // 0x338f2c: 0x320f809  jalr        $t9
label_338f30:
    if (ctx->pc == 0x338F30u) {
        ctx->pc = 0x338F30u;
            // 0x338f30: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x338F34u;
        goto label_338f34;
    }
    ctx->pc = 0x338F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x338F34u);
        ctx->pc = 0x338F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338F2Cu;
            // 0x338f30: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x338F34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x338F34u; }
            if (ctx->pc != 0x338F34u) { return; }
        }
        }
    }
    ctx->pc = 0x338F34u;
label_338f34:
    // 0x338f34: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x338f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_338f38:
    // 0x338f38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x338f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_338f3c:
    // 0x338f3c: 0x320f809  jalr        $t9
label_338f40:
    if (ctx->pc == 0x338F40u) {
        ctx->pc = 0x338F40u;
            // 0x338f40: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x338F44u;
        goto label_338f44;
    }
    ctx->pc = 0x338F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x338F44u);
        ctx->pc = 0x338F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338F3Cu;
            // 0x338f40: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x338F44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x338F44u; }
            if (ctx->pc != 0x338F44u) { return; }
        }
        }
    }
    ctx->pc = 0x338F44u;
label_338f44:
    // 0x338f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338f48:
    // 0x338f48: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x338f48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_338f4c:
    // 0x338f4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x338f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_338f50:
    // 0x338f50: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x338f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_338f54:
    // 0x338f54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x338f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_338f58:
    // 0x338f58: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x338f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_338f5c:
    // 0x338f5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x338f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_338f60:
    // 0x338f60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x338f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_338f64:
    // 0x338f64: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x338f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_338f68:
    // 0x338f68: 0x3e00008  jr          $ra
label_338f6c:
    if (ctx->pc == 0x338F6Cu) {
        ctx->pc = 0x338F6Cu;
            // 0x338f6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x338F70u;
        goto label_fallthrough_0x338f68;
    }
    ctx->pc = 0x338F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338F68u;
            // 0x338f6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x338f68:
    ctx->pc = 0x338F70u;
}
