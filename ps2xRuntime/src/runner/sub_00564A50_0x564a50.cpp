#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00564A50
// Address: 0x564a50 - 0x564da0
void sub_00564A50_0x564a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00564A50_0x564a50");
#endif

    switch (ctx->pc) {
        case 0x564a50u: goto label_564a50;
        case 0x564a54u: goto label_564a54;
        case 0x564a58u: goto label_564a58;
        case 0x564a5cu: goto label_564a5c;
        case 0x564a60u: goto label_564a60;
        case 0x564a64u: goto label_564a64;
        case 0x564a68u: goto label_564a68;
        case 0x564a6cu: goto label_564a6c;
        case 0x564a70u: goto label_564a70;
        case 0x564a74u: goto label_564a74;
        case 0x564a78u: goto label_564a78;
        case 0x564a7cu: goto label_564a7c;
        case 0x564a80u: goto label_564a80;
        case 0x564a84u: goto label_564a84;
        case 0x564a88u: goto label_564a88;
        case 0x564a8cu: goto label_564a8c;
        case 0x564a90u: goto label_564a90;
        case 0x564a94u: goto label_564a94;
        case 0x564a98u: goto label_564a98;
        case 0x564a9cu: goto label_564a9c;
        case 0x564aa0u: goto label_564aa0;
        case 0x564aa4u: goto label_564aa4;
        case 0x564aa8u: goto label_564aa8;
        case 0x564aacu: goto label_564aac;
        case 0x564ab0u: goto label_564ab0;
        case 0x564ab4u: goto label_564ab4;
        case 0x564ab8u: goto label_564ab8;
        case 0x564abcu: goto label_564abc;
        case 0x564ac0u: goto label_564ac0;
        case 0x564ac4u: goto label_564ac4;
        case 0x564ac8u: goto label_564ac8;
        case 0x564accu: goto label_564acc;
        case 0x564ad0u: goto label_564ad0;
        case 0x564ad4u: goto label_564ad4;
        case 0x564ad8u: goto label_564ad8;
        case 0x564adcu: goto label_564adc;
        case 0x564ae0u: goto label_564ae0;
        case 0x564ae4u: goto label_564ae4;
        case 0x564ae8u: goto label_564ae8;
        case 0x564aecu: goto label_564aec;
        case 0x564af0u: goto label_564af0;
        case 0x564af4u: goto label_564af4;
        case 0x564af8u: goto label_564af8;
        case 0x564afcu: goto label_564afc;
        case 0x564b00u: goto label_564b00;
        case 0x564b04u: goto label_564b04;
        case 0x564b08u: goto label_564b08;
        case 0x564b0cu: goto label_564b0c;
        case 0x564b10u: goto label_564b10;
        case 0x564b14u: goto label_564b14;
        case 0x564b18u: goto label_564b18;
        case 0x564b1cu: goto label_564b1c;
        case 0x564b20u: goto label_564b20;
        case 0x564b24u: goto label_564b24;
        case 0x564b28u: goto label_564b28;
        case 0x564b2cu: goto label_564b2c;
        case 0x564b30u: goto label_564b30;
        case 0x564b34u: goto label_564b34;
        case 0x564b38u: goto label_564b38;
        case 0x564b3cu: goto label_564b3c;
        case 0x564b40u: goto label_564b40;
        case 0x564b44u: goto label_564b44;
        case 0x564b48u: goto label_564b48;
        case 0x564b4cu: goto label_564b4c;
        case 0x564b50u: goto label_564b50;
        case 0x564b54u: goto label_564b54;
        case 0x564b58u: goto label_564b58;
        case 0x564b5cu: goto label_564b5c;
        case 0x564b60u: goto label_564b60;
        case 0x564b64u: goto label_564b64;
        case 0x564b68u: goto label_564b68;
        case 0x564b6cu: goto label_564b6c;
        case 0x564b70u: goto label_564b70;
        case 0x564b74u: goto label_564b74;
        case 0x564b78u: goto label_564b78;
        case 0x564b7cu: goto label_564b7c;
        case 0x564b80u: goto label_564b80;
        case 0x564b84u: goto label_564b84;
        case 0x564b88u: goto label_564b88;
        case 0x564b8cu: goto label_564b8c;
        case 0x564b90u: goto label_564b90;
        case 0x564b94u: goto label_564b94;
        case 0x564b98u: goto label_564b98;
        case 0x564b9cu: goto label_564b9c;
        case 0x564ba0u: goto label_564ba0;
        case 0x564ba4u: goto label_564ba4;
        case 0x564ba8u: goto label_564ba8;
        case 0x564bacu: goto label_564bac;
        case 0x564bb0u: goto label_564bb0;
        case 0x564bb4u: goto label_564bb4;
        case 0x564bb8u: goto label_564bb8;
        case 0x564bbcu: goto label_564bbc;
        case 0x564bc0u: goto label_564bc0;
        case 0x564bc4u: goto label_564bc4;
        case 0x564bc8u: goto label_564bc8;
        case 0x564bccu: goto label_564bcc;
        case 0x564bd0u: goto label_564bd0;
        case 0x564bd4u: goto label_564bd4;
        case 0x564bd8u: goto label_564bd8;
        case 0x564bdcu: goto label_564bdc;
        case 0x564be0u: goto label_564be0;
        case 0x564be4u: goto label_564be4;
        case 0x564be8u: goto label_564be8;
        case 0x564becu: goto label_564bec;
        case 0x564bf0u: goto label_564bf0;
        case 0x564bf4u: goto label_564bf4;
        case 0x564bf8u: goto label_564bf8;
        case 0x564bfcu: goto label_564bfc;
        case 0x564c00u: goto label_564c00;
        case 0x564c04u: goto label_564c04;
        case 0x564c08u: goto label_564c08;
        case 0x564c0cu: goto label_564c0c;
        case 0x564c10u: goto label_564c10;
        case 0x564c14u: goto label_564c14;
        case 0x564c18u: goto label_564c18;
        case 0x564c1cu: goto label_564c1c;
        case 0x564c20u: goto label_564c20;
        case 0x564c24u: goto label_564c24;
        case 0x564c28u: goto label_564c28;
        case 0x564c2cu: goto label_564c2c;
        case 0x564c30u: goto label_564c30;
        case 0x564c34u: goto label_564c34;
        case 0x564c38u: goto label_564c38;
        case 0x564c3cu: goto label_564c3c;
        case 0x564c40u: goto label_564c40;
        case 0x564c44u: goto label_564c44;
        case 0x564c48u: goto label_564c48;
        case 0x564c4cu: goto label_564c4c;
        case 0x564c50u: goto label_564c50;
        case 0x564c54u: goto label_564c54;
        case 0x564c58u: goto label_564c58;
        case 0x564c5cu: goto label_564c5c;
        case 0x564c60u: goto label_564c60;
        case 0x564c64u: goto label_564c64;
        case 0x564c68u: goto label_564c68;
        case 0x564c6cu: goto label_564c6c;
        case 0x564c70u: goto label_564c70;
        case 0x564c74u: goto label_564c74;
        case 0x564c78u: goto label_564c78;
        case 0x564c7cu: goto label_564c7c;
        case 0x564c80u: goto label_564c80;
        case 0x564c84u: goto label_564c84;
        case 0x564c88u: goto label_564c88;
        case 0x564c8cu: goto label_564c8c;
        case 0x564c90u: goto label_564c90;
        case 0x564c94u: goto label_564c94;
        case 0x564c98u: goto label_564c98;
        case 0x564c9cu: goto label_564c9c;
        case 0x564ca0u: goto label_564ca0;
        case 0x564ca4u: goto label_564ca4;
        case 0x564ca8u: goto label_564ca8;
        case 0x564cacu: goto label_564cac;
        case 0x564cb0u: goto label_564cb0;
        case 0x564cb4u: goto label_564cb4;
        case 0x564cb8u: goto label_564cb8;
        case 0x564cbcu: goto label_564cbc;
        case 0x564cc0u: goto label_564cc0;
        case 0x564cc4u: goto label_564cc4;
        case 0x564cc8u: goto label_564cc8;
        case 0x564cccu: goto label_564ccc;
        case 0x564cd0u: goto label_564cd0;
        case 0x564cd4u: goto label_564cd4;
        case 0x564cd8u: goto label_564cd8;
        case 0x564cdcu: goto label_564cdc;
        case 0x564ce0u: goto label_564ce0;
        case 0x564ce4u: goto label_564ce4;
        case 0x564ce8u: goto label_564ce8;
        case 0x564cecu: goto label_564cec;
        case 0x564cf0u: goto label_564cf0;
        case 0x564cf4u: goto label_564cf4;
        case 0x564cf8u: goto label_564cf8;
        case 0x564cfcu: goto label_564cfc;
        case 0x564d00u: goto label_564d00;
        case 0x564d04u: goto label_564d04;
        case 0x564d08u: goto label_564d08;
        case 0x564d0cu: goto label_564d0c;
        case 0x564d10u: goto label_564d10;
        case 0x564d14u: goto label_564d14;
        case 0x564d18u: goto label_564d18;
        case 0x564d1cu: goto label_564d1c;
        case 0x564d20u: goto label_564d20;
        case 0x564d24u: goto label_564d24;
        case 0x564d28u: goto label_564d28;
        case 0x564d2cu: goto label_564d2c;
        case 0x564d30u: goto label_564d30;
        case 0x564d34u: goto label_564d34;
        case 0x564d38u: goto label_564d38;
        case 0x564d3cu: goto label_564d3c;
        case 0x564d40u: goto label_564d40;
        case 0x564d44u: goto label_564d44;
        case 0x564d48u: goto label_564d48;
        case 0x564d4cu: goto label_564d4c;
        case 0x564d50u: goto label_564d50;
        case 0x564d54u: goto label_564d54;
        case 0x564d58u: goto label_564d58;
        case 0x564d5cu: goto label_564d5c;
        case 0x564d60u: goto label_564d60;
        case 0x564d64u: goto label_564d64;
        case 0x564d68u: goto label_564d68;
        case 0x564d6cu: goto label_564d6c;
        case 0x564d70u: goto label_564d70;
        case 0x564d74u: goto label_564d74;
        case 0x564d78u: goto label_564d78;
        case 0x564d7cu: goto label_564d7c;
        case 0x564d80u: goto label_564d80;
        case 0x564d84u: goto label_564d84;
        case 0x564d88u: goto label_564d88;
        case 0x564d8cu: goto label_564d8c;
        case 0x564d90u: goto label_564d90;
        case 0x564d94u: goto label_564d94;
        case 0x564d98u: goto label_564d98;
        case 0x564d9cu: goto label_564d9c;
        default: break;
    }

    ctx->pc = 0x564a50u;

label_564a50:
    // 0x564a50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x564a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_564a54:
    // 0x564a54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x564a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_564a58:
    // 0x564a58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x564a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_564a5c:
    // 0x564a5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x564a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_564a60:
    // 0x564a60: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x564a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_564a64:
    // 0x564a64: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x564a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_564a68:
    // 0x564a68: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x564a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_564a6c:
    // 0x564a6c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x564a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_564a70:
    // 0x564a70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x564a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_564a74:
    // 0x564a74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x564a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_564a78:
    // 0x564a78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x564a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_564a7c:
    // 0x564a7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x564a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_564a80:
    // 0x564a80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x564a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_564a84:
    // 0x564a84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x564a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_564a88:
    // 0x564a88: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x564a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_564a8c:
    // 0x564a8c: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x564a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_564a90:
    // 0x564a90: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x564a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
label_564a94:
    // 0x564a94: 0x9062007e  lbu         $v0, 0x7E($v1)
    ctx->pc = 0x564a94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_564a98:
    // 0x564a98: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_564a9c:
    if (ctx->pc == 0x564A9Cu) {
        ctx->pc = 0x564A9Cu;
            // 0x564a9c: 0x24950004  addiu       $s5, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x564AA0u;
        goto label_564aa0;
    }
    ctx->pc = 0x564A98u;
    {
        const bool branch_taken_0x564a98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x564A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564A98u;
            // 0x564a9c: 0x24950004  addiu       $s5, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564a98) {
            ctx->pc = 0x564AACu;
            goto label_564aac;
        }
    }
    ctx->pc = 0x564AA0u;
label_564aa0:
    // 0x564aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x564aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564aa4:
    // 0x564aa4: 0x10000008  b           . + 4 + (0x8 << 2)
label_564aa8:
    if (ctx->pc == 0x564AA8u) {
        ctx->pc = 0x564AA8u;
            // 0x564aa8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x564AACu;
        goto label_564aac;
    }
    ctx->pc = 0x564AA4u;
    {
        const bool branch_taken_0x564aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564AA4u;
            // 0x564aa8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564aa4) {
            ctx->pc = 0x564AC8u;
            goto label_564ac8;
        }
    }
    ctx->pc = 0x564AACu;
label_564aac:
    // 0x564aac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x564aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_564ab0:
    // 0x564ab0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x564ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_564ab4:
    // 0x564ab4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x564ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_564ab8:
    // 0x564ab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564abc:
    // 0x564abc: 0x0  nop
    ctx->pc = 0x564abcu;
    // NOP
label_564ac0:
    // 0x564ac0: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x564ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_564ac4:
    // 0x564ac4: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x564ac4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_564ac8:
    // 0x564ac8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x564ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_564acc:
    // 0x564acc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x564accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_564ad0:
    // 0x564ad0: 0xc440df80  lwc1        $f0, -0x2080($v0)
    ctx->pc = 0x564ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_564ad4:
    // 0x564ad4: 0x8c7e89e0  lw          $fp, -0x7620($v1)
    ctx->pc = 0x564ad4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_564ad8:
    // 0x564ad8: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x564ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
label_564adc:
    // 0x564adc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x564adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_564ae0:
    // 0x564ae0: 0x26732124  addiu       $s3, $s3, 0x2124
    ctx->pc = 0x564ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8484));
label_564ae4:
    // 0x564ae4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x564ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_564ae8:
    // 0x564ae8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x564ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_564aec:
    // 0x564aec: 0xc442df84  lwc1        $f2, -0x207C($v0)
    ctx->pc = 0x564aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_564af0:
    // 0x564af0: 0xc461df88  lwc1        $f1, -0x2078($v1)
    ctx->pc = 0x564af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294958984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_564af4:
    // 0x564af4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x564af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_564af8:
    // 0x564af8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x564af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_564afc:
    // 0x564afc: 0xc440df8c  lwc1        $f0, -0x2074($v0)
    ctx->pc = 0x564afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_564b00:
    // 0x564b00: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x564b00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_564b04:
    // 0x564b04: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x564b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_564b08:
    // 0x564b08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x564b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_564b0c:
    // 0x564b0c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x564b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_564b10:
    // 0x564b10: 0xc0506ac  jal         func_141AB0
label_564b14:
    if (ctx->pc == 0x564B14u) {
        ctx->pc = 0x564B14u;
            // 0x564b14: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->pc = 0x564B18u;
        goto label_564b18;
    }
    ctx->pc = 0x564B10u;
    SET_GPR_U32(ctx, 31, 0x564B18u);
    ctx->pc = 0x564B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564B10u;
            // 0x564b14: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564B18u; }
        if (ctx->pc != 0x564B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564B18u; }
        if (ctx->pc != 0x564B18u) { return; }
    }
    ctx->pc = 0x564B18u;
label_564b18:
    // 0x564b18: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x564b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_564b1c:
    // 0x564b1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x564b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_564b20:
    // 0x564b20: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x564b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_564b24:
    // 0x564b24: 0x320f809  jalr        $t9
label_564b28:
    if (ctx->pc == 0x564B28u) {
        ctx->pc = 0x564B28u;
            // 0x564b28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x564B2Cu;
        goto label_564b2c;
    }
    ctx->pc = 0x564B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x564B2Cu);
        ctx->pc = 0x564B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564B24u;
            // 0x564b28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x564B2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x564B2Cu; }
            if (ctx->pc != 0x564B2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x564B2Cu;
label_564b2c:
    // 0x564b2c: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x564b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_564b30:
    // 0x564b30: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x564b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_564b34:
    // 0x564b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x564b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564b38:
    // 0x564b38: 0x0  nop
    ctx->pc = 0x564b38u;
    // NOP
label_564b3c:
    // 0x564b3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x564b3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_564b40:
    // 0x564b40: 0x4501007f  bc1t        . + 4 + (0x7F << 2)
label_564b44:
    if (ctx->pc == 0x564B44u) {
        ctx->pc = 0x564B48u;
        goto label_564b48;
    }
    ctx->pc = 0x564B40u;
    {
        const bool branch_taken_0x564b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x564b40) {
            ctx->pc = 0x564D40u;
            goto label_564d40;
        }
    }
    ctx->pc = 0x564B48u;
label_564b48:
    // 0x564b48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x564b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_564b4c:
    // 0x564b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x564b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564b50:
    // 0x564b50: 0x0  nop
    ctx->pc = 0x564b50u;
    // NOP
label_564b54:
    // 0x564b54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x564b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_564b58:
    // 0x564b58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_564b5c:
    if (ctx->pc == 0x564B5Cu) {
        ctx->pc = 0x564B60u;
        goto label_564b60;
    }
    ctx->pc = 0x564B58u;
    {
        const bool branch_taken_0x564b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x564b58) {
            ctx->pc = 0x564B70u;
            goto label_564b70;
        }
    }
    ctx->pc = 0x564B60u;
label_564b60:
    // 0x564b60: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x564b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_564b64:
    // 0x564b64: 0x1000002a  b           . + 4 + (0x2A << 2)
label_564b68:
    if (ctx->pc == 0x564B68u) {
        ctx->pc = 0x564B68u;
            // 0x564b68: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->pc = 0x564B6Cu;
        goto label_564b6c;
    }
    ctx->pc = 0x564B64u;
    {
        const bool branch_taken_0x564b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564B64u;
            // 0x564b68: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564b64) {
            ctx->pc = 0x564C10u;
            goto label_564c10;
        }
    }
    ctx->pc = 0x564B6Cu;
label_564b6c:
    // 0x564b6c: 0x0  nop
    ctx->pc = 0x564b6cu;
    // NOP
label_564b70:
    // 0x564b70: 0x96a2000c  lhu         $v0, 0xC($s5)
    ctx->pc = 0x564b70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_564b74:
    // 0x564b74: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_564b78:
    if (ctx->pc == 0x564B78u) {
        ctx->pc = 0x564B78u;
            // 0x564b78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x564B7Cu;
        goto label_564b7c;
    }
    ctx->pc = 0x564B74u;
    {
        const bool branch_taken_0x564b74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x564b74) {
            ctx->pc = 0x564B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564B74u;
            // 0x564b78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x564B88u;
            goto label_564b88;
        }
    }
    ctx->pc = 0x564B7Cu;
label_564b7c:
    // 0x564b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x564b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564b80:
    // 0x564b80: 0x10000007  b           . + 4 + (0x7 << 2)
label_564b84:
    if (ctx->pc == 0x564B84u) {
        ctx->pc = 0x564B84u;
            // 0x564b84: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x564B88u;
        goto label_564b88;
    }
    ctx->pc = 0x564B80u;
    {
        const bool branch_taken_0x564b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564B80u;
            // 0x564b84: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564b80) {
            ctx->pc = 0x564BA0u;
            goto label_564ba0;
        }
    }
    ctx->pc = 0x564B88u;
label_564b88:
    // 0x564b88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x564b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_564b8c:
    // 0x564b8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x564b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_564b90:
    // 0x564b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564b94:
    // 0x564b94: 0x0  nop
    ctx->pc = 0x564b94u;
    // NOP
label_564b98:
    // 0x564b98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x564b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_564b9c:
    // 0x564b9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x564b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_564ba0:
    // 0x564ba0: 0x3c033fd5  lui         $v1, 0x3FD5
    ctx->pc = 0x564ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16341 << 16));
label_564ba4:
    // 0x564ba4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x564ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_564ba8:
    // 0x564ba8: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x564ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
label_564bac:
    // 0x564bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564bb0:
    // 0x564bb0: 0x0  nop
    ctx->pc = 0x564bb0u;
    // NOP
label_564bb4:
    // 0x564bb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x564bb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_564bb8:
    // 0x564bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x564bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564bbc:
    // 0x564bbc: 0x0  nop
    ctx->pc = 0x564bbcu;
    // NOP
label_564bc0:
    // 0x564bc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x564bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_564bc4:
    // 0x564bc4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_564bc8:
    if (ctx->pc == 0x564BC8u) {
        ctx->pc = 0x564BC8u;
            // 0x564bc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x564BCCu;
        goto label_564bcc;
    }
    ctx->pc = 0x564BC4u;
    {
        const bool branch_taken_0x564bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x564bc4) {
            ctx->pc = 0x564BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564BC4u;
            // 0x564bc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x564BDCu;
            goto label_564bdc;
        }
    }
    ctx->pc = 0x564BCCu;
label_564bcc:
    // 0x564bcc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x564bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_564bd0:
    // 0x564bd0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x564bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_564bd4:
    // 0x564bd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_564bd8:
    if (ctx->pc == 0x564BD8u) {
        ctx->pc = 0x564BD8u;
            // 0x564bd8: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x564BDCu;
        goto label_564bdc;
    }
    ctx->pc = 0x564BD4u;
    {
        const bool branch_taken_0x564bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564BD4u;
            // 0x564bd8: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x564bd4) {
            ctx->pc = 0x564BF4u;
            goto label_564bf4;
        }
    }
    ctx->pc = 0x564BDCu;
label_564bdc:
    // 0x564bdc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x564bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_564be0:
    // 0x564be0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x564be0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_564be4:
    // 0x564be4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x564be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_564be8:
    // 0x564be8: 0x0  nop
    ctx->pc = 0x564be8u;
    // NOP
label_564bec:
    // 0x564bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x564becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_564bf0:
    // 0x564bf0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x564bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_564bf4:
    // 0x564bf4: 0xa6a3000c  sh          $v1, 0xC($s5)
    ctx->pc = 0x564bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 3));
label_564bf8:
    // 0x564bf8: 0x96a2000c  lhu         $v0, 0xC($s5)
    ctx->pc = 0x564bf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_564bfc:
    // 0x564bfc: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_564c00:
    if (ctx->pc == 0x564C00u) {
        ctx->pc = 0x564C04u;
        goto label_564c04;
    }
    ctx->pc = 0x564BFCu;
    {
        const bool branch_taken_0x564bfc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x564bfc) {
            ctx->pc = 0x564C10u;
            goto label_564c10;
        }
    }
    ctx->pc = 0x564C04u;
label_564c04:
    // 0x564c04: 0x1000004e  b           . + 4 + (0x4E << 2)
label_564c08:
    if (ctx->pc == 0x564C08u) {
        ctx->pc = 0x564C08u;
            // 0x564c08: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x564C0Cu;
        goto label_564c0c;
    }
    ctx->pc = 0x564C04u;
    {
        const bool branch_taken_0x564c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564C04u;
            // 0x564c08: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564c04) {
            ctx->pc = 0x564D40u;
            goto label_564d40;
        }
    }
    ctx->pc = 0x564C0Cu;
label_564c0c:
    // 0x564c0c: 0x0  nop
    ctx->pc = 0x564c0cu;
    // NOP
label_564c10:
    // 0x564c10: 0x92a30009  lbu         $v1, 0x9($s5)
    ctx->pc = 0x564c10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
label_564c14:
    // 0x564c14: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x564c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_564c18:
    // 0x564c18: 0x86a5000e  lh          $a1, 0xE($s5)
    ctx->pc = 0x564c18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
label_564c1c:
    // 0x564c1c: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x564c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
label_564c20:
    // 0x564c20: 0x96b20004  lhu         $s2, 0x4($s5)
    ctx->pc = 0x564c20u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_564c24:
    // 0x564c24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x564c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_564c28:
    // 0x564c28: 0x96b10006  lhu         $s1, 0x6($s5)
    ctx->pc = 0x564c28u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_564c2c:
    // 0x564c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x564c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_564c30:
    // 0x564c30: 0x92b00008  lbu         $s0, 0x8($s5)
    ctx->pc = 0x564c30u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_564c34:
    // 0x564c34: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x564c34u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_564c38:
    // 0x564c38: 0x96b7000c  lhu         $s7, 0xC($s5)
    ctx->pc = 0x564c38u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_564c3c:
    // 0x564c3c: 0xc04f2d4  jal         func_13CB50
label_564c40:
    if (ctx->pc == 0x564C40u) {
        ctx->pc = 0x564C40u;
            // 0x564c40: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x564C44u;
        goto label_564c44;
    }
    ctx->pc = 0x564C3Cu;
    SET_GPR_U32(ctx, 31, 0x564C44u);
    ctx->pc = 0x564C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564C3Cu;
            // 0x564c40: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564C44u; }
        if (ctx->pc != 0x564C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564C44u; }
        if (ctx->pc != 0x564C44u) { return; }
    }
    ctx->pc = 0x564C44u;
label_564c44:
    // 0x564c44: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
label_564c48:
    if (ctx->pc == 0x564C48u) {
        ctx->pc = 0x564C48u;
            // 0x564c48: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x564C4Cu;
        goto label_564c4c;
    }
    ctx->pc = 0x564C44u;
    {
        const bool branch_taken_0x564c44 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x564c44) {
            ctx->pc = 0x564C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564C44u;
            // 0x564c48: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x564C58u;
            goto label_564c58;
        }
    }
    ctx->pc = 0x564C4Cu;
label_564c4c:
    // 0x564c4c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x564c4cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564c50:
    // 0x564c50: 0x10000007  b           . + 4 + (0x7 << 2)
label_564c54:
    if (ctx->pc == 0x564C54u) {
        ctx->pc = 0x564C54u;
            // 0x564c54: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x564C58u;
        goto label_564c58;
    }
    ctx->pc = 0x564C50u;
    {
        const bool branch_taken_0x564c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564C50u;
            // 0x564c54: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564c50) {
            ctx->pc = 0x564C70u;
            goto label_564c70;
        }
    }
    ctx->pc = 0x564C58u;
label_564c58:
    // 0x564c58: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x564c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_564c5c:
    // 0x564c5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x564c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_564c60:
    // 0x564c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564c64:
    // 0x564c64: 0x0  nop
    ctx->pc = 0x564c64u;
    // NOP
label_564c68:
    // 0x564c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x564c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_564c6c:
    // 0x564c6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x564c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_564c70:
    // 0x564c70: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_564c74:
    if (ctx->pc == 0x564C74u) {
        ctx->pc = 0x564C74u;
            // 0x564c74: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->pc = 0x564C78u;
        goto label_564c78;
    }
    ctx->pc = 0x564C70u;
    {
        const bool branch_taken_0x564c70 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x564C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564C70u;
            // 0x564c74: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564c70) {
            ctx->pc = 0x564C84u;
            goto label_564c84;
        }
    }
    ctx->pc = 0x564C78u;
label_564c78:
    // 0x564c78: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x564c78u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564c7c:
    // 0x564c7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_564c80:
    if (ctx->pc == 0x564C80u) {
        ctx->pc = 0x564C80u;
            // 0x564c80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x564C84u;
        goto label_564c84;
    }
    ctx->pc = 0x564C7Cu;
    {
        const bool branch_taken_0x564c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564C7Cu;
            // 0x564c80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564c7c) {
            ctx->pc = 0x564CA0u;
            goto label_564ca0;
        }
    }
    ctx->pc = 0x564C84u;
label_564c84:
    // 0x564c84: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x564c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_564c88:
    // 0x564c88: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x564c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_564c8c:
    // 0x564c8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x564c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_564c90:
    // 0x564c90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564c94:
    // 0x564c94: 0x0  nop
    ctx->pc = 0x564c94u;
    // NOP
label_564c98:
    // 0x564c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x564c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_564c9c:
    // 0x564c9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x564c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_564ca0:
    // 0x564ca0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x564ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_564ca4:
    // 0x564ca4: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x564ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_564ca8:
    // 0x564ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x564ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_564cac:
    // 0x564cac: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_564cb0:
    if (ctx->pc == 0x564CB0u) {
        ctx->pc = 0x564CB0u;
            // 0x564cb0: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x564CB4u;
        goto label_564cb4;
    }
    ctx->pc = 0x564CACu;
    {
        const bool branch_taken_0x564cac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x564CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564CACu;
            // 0x564cb0: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564cac) {
            ctx->pc = 0x564CC0u;
            goto label_564cc0;
        }
    }
    ctx->pc = 0x564CB4u;
label_564cb4:
    // 0x564cb4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x564cb4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564cb8:
    // 0x564cb8: 0x10000008  b           . + 4 + (0x8 << 2)
label_564cbc:
    if (ctx->pc == 0x564CBCu) {
        ctx->pc = 0x564CBCu;
            // 0x564cbc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x564CC0u;
        goto label_564cc0;
    }
    ctx->pc = 0x564CB8u;
    {
        const bool branch_taken_0x564cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x564CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564CB8u;
            // 0x564cbc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x564cb8) {
            ctx->pc = 0x564CDCu;
            goto label_564cdc;
        }
    }
    ctx->pc = 0x564CC0u;
label_564cc0:
    // 0x564cc0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x564cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_564cc4:
    // 0x564cc4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x564cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_564cc8:
    // 0x564cc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x564cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_564ccc:
    // 0x564ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564cd0:
    // 0x564cd0: 0x0  nop
    ctx->pc = 0x564cd0u;
    // NOP
label_564cd4:
    // 0x564cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x564cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_564cd8:
    // 0x564cd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x564cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_564cdc:
    // 0x564cdc: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x564cdcu;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_564ce0:
    // 0x564ce0: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x564ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_564ce4:
    // 0x564ce4: 0x34473333  ori         $a3, $v0, 0x3333
    ctx->pc = 0x564ce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_564ce8:
    // 0x564ce8: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x564ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_564cec:
    // 0x564cec: 0x2c42824  and         $a1, $s6, $a0
    ctx->pc = 0x564cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
label_564cf0:
    // 0x564cf0: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x564cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_564cf4:
    // 0x564cf4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x564cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_564cf8:
    // 0x564cf8: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x564cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_564cfc:
    // 0x564cfc: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x564cfcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_564d00:
    // 0x564d00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x564d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_564d04:
    // 0x564d04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x564d04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564d08:
    // 0x564d08: 0x86680002  lh          $t0, 0x2($s3)
    ctx->pc = 0x564d08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_564d0c:
    // 0x564d0c: 0x460f0382  mul.s       $f14, $f0, $f15
    ctx->pc = 0x564d0cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
label_564d10:
    // 0x564d10: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x564d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_564d14:
    // 0x564d14: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x564d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_564d18:
    // 0x564d18: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x564d18u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564d1c:
    // 0x564d1c: 0x0  nop
    ctx->pc = 0x564d1cu;
    // NOP
label_564d20:
    // 0x564d20: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x564d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_564d24:
    // 0x564d24: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x564d24u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564d28:
    // 0x564d28: 0x0  nop
    ctx->pc = 0x564d28u;
    // NOP
label_564d2c:
    // 0x564d2c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x564d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_564d30:
    // 0x564d30: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x564d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_564d34:
    // 0x564d34: 0x46007307  neg.s       $f12, $f14
    ctx->pc = 0x564d34u;
    ctx->f[12] = FPU_NEG_S(ctx->f[14]);
label_564d38:
    // 0x564d38: 0xc0bc284  jal         func_2F0A10
label_564d3c:
    if (ctx->pc == 0x564D3Cu) {
        ctx->pc = 0x564D3Cu;
            // 0x564d3c: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->pc = 0x564D40u;
        goto label_564d40;
    }
    ctx->pc = 0x564D38u;
    SET_GPR_U32(ctx, 31, 0x564D40u);
    ctx->pc = 0x564D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564D38u;
            // 0x564d3c: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564D40u; }
        if (ctx->pc != 0x564D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564D40u; }
        if (ctx->pc != 0x564D40u) { return; }
    }
    ctx->pc = 0x564D40u;
label_564d40:
    // 0x564d40: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x564d40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_564d44:
    // 0x564d44: 0x1680ff7a  bnez        $s4, . + 4 + (-0x86 << 2)
label_564d48:
    if (ctx->pc == 0x564D48u) {
        ctx->pc = 0x564D48u;
            // 0x564d48: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x564D4Cu;
        goto label_564d4c;
    }
    ctx->pc = 0x564D44u;
    {
        const bool branch_taken_0x564d44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x564D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564D44u;
            // 0x564d48: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564d44) {
            ctx->pc = 0x564B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_564b30;
        }
    }
    ctx->pc = 0x564D4Cu;
label_564d4c:
    // 0x564d4c: 0x8fd90000  lw          $t9, 0x0($fp)
    ctx->pc = 0x564d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_564d50:
    // 0x564d50: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x564d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_564d54:
    // 0x564d54: 0x320f809  jalr        $t9
label_564d58:
    if (ctx->pc == 0x564D58u) {
        ctx->pc = 0x564D58u;
            // 0x564d58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x564D5Cu;
        goto label_564d5c;
    }
    ctx->pc = 0x564D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x564D5Cu);
        ctx->pc = 0x564D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564D54u;
            // 0x564d58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x564D5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x564D5Cu; }
            if (ctx->pc != 0x564D5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x564D5Cu;
label_564d5c:
    // 0x564d5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x564d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_564d60:
    // 0x564d60: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x564d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_564d64:
    // 0x564d64: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x564d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_564d68:
    // 0x564d68: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x564d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_564d6c:
    // 0x564d6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x564d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_564d70:
    // 0x564d70: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x564d70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_564d74:
    // 0x564d74: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x564d74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_564d78:
    // 0x564d78: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x564d78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_564d7c:
    // 0x564d7c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x564d7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_564d80:
    // 0x564d80: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x564d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_564d84:
    // 0x564d84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x564d84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_564d88:
    // 0x564d88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x564d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_564d8c:
    // 0x564d8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x564d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_564d90:
    // 0x564d90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x564d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_564d94:
    // 0x564d94: 0x3e00008  jr          $ra
label_564d98:
    if (ctx->pc == 0x564D98u) {
        ctx->pc = 0x564D98u;
            // 0x564d98: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x564D9Cu;
        goto label_564d9c;
    }
    ctx->pc = 0x564D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x564D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564D94u;
            // 0x564d98: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x564D9Cu;
label_564d9c:
    // 0x564d9c: 0x0  nop
    ctx->pc = 0x564d9cu;
    // NOP
}
