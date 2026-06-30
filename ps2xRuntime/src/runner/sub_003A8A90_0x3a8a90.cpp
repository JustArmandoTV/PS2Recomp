#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A8A90
// Address: 0x3a8a90 - 0x3a8cf0
void sub_003A8A90_0x3a8a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8A90_0x3a8a90");
#endif

    switch (ctx->pc) {
        case 0x3a8a90u: goto label_3a8a90;
        case 0x3a8a94u: goto label_3a8a94;
        case 0x3a8a98u: goto label_3a8a98;
        case 0x3a8a9cu: goto label_3a8a9c;
        case 0x3a8aa0u: goto label_3a8aa0;
        case 0x3a8aa4u: goto label_3a8aa4;
        case 0x3a8aa8u: goto label_3a8aa8;
        case 0x3a8aacu: goto label_3a8aac;
        case 0x3a8ab0u: goto label_3a8ab0;
        case 0x3a8ab4u: goto label_3a8ab4;
        case 0x3a8ab8u: goto label_3a8ab8;
        case 0x3a8abcu: goto label_3a8abc;
        case 0x3a8ac0u: goto label_3a8ac0;
        case 0x3a8ac4u: goto label_3a8ac4;
        case 0x3a8ac8u: goto label_3a8ac8;
        case 0x3a8accu: goto label_3a8acc;
        case 0x3a8ad0u: goto label_3a8ad0;
        case 0x3a8ad4u: goto label_3a8ad4;
        case 0x3a8ad8u: goto label_3a8ad8;
        case 0x3a8adcu: goto label_3a8adc;
        case 0x3a8ae0u: goto label_3a8ae0;
        case 0x3a8ae4u: goto label_3a8ae4;
        case 0x3a8ae8u: goto label_3a8ae8;
        case 0x3a8aecu: goto label_3a8aec;
        case 0x3a8af0u: goto label_3a8af0;
        case 0x3a8af4u: goto label_3a8af4;
        case 0x3a8af8u: goto label_3a8af8;
        case 0x3a8afcu: goto label_3a8afc;
        case 0x3a8b00u: goto label_3a8b00;
        case 0x3a8b04u: goto label_3a8b04;
        case 0x3a8b08u: goto label_3a8b08;
        case 0x3a8b0cu: goto label_3a8b0c;
        case 0x3a8b10u: goto label_3a8b10;
        case 0x3a8b14u: goto label_3a8b14;
        case 0x3a8b18u: goto label_3a8b18;
        case 0x3a8b1cu: goto label_3a8b1c;
        case 0x3a8b20u: goto label_3a8b20;
        case 0x3a8b24u: goto label_3a8b24;
        case 0x3a8b28u: goto label_3a8b28;
        case 0x3a8b2cu: goto label_3a8b2c;
        case 0x3a8b30u: goto label_3a8b30;
        case 0x3a8b34u: goto label_3a8b34;
        case 0x3a8b38u: goto label_3a8b38;
        case 0x3a8b3cu: goto label_3a8b3c;
        case 0x3a8b40u: goto label_3a8b40;
        case 0x3a8b44u: goto label_3a8b44;
        case 0x3a8b48u: goto label_3a8b48;
        case 0x3a8b4cu: goto label_3a8b4c;
        case 0x3a8b50u: goto label_3a8b50;
        case 0x3a8b54u: goto label_3a8b54;
        case 0x3a8b58u: goto label_3a8b58;
        case 0x3a8b5cu: goto label_3a8b5c;
        case 0x3a8b60u: goto label_3a8b60;
        case 0x3a8b64u: goto label_3a8b64;
        case 0x3a8b68u: goto label_3a8b68;
        case 0x3a8b6cu: goto label_3a8b6c;
        case 0x3a8b70u: goto label_3a8b70;
        case 0x3a8b74u: goto label_3a8b74;
        case 0x3a8b78u: goto label_3a8b78;
        case 0x3a8b7cu: goto label_3a8b7c;
        case 0x3a8b80u: goto label_3a8b80;
        case 0x3a8b84u: goto label_3a8b84;
        case 0x3a8b88u: goto label_3a8b88;
        case 0x3a8b8cu: goto label_3a8b8c;
        case 0x3a8b90u: goto label_3a8b90;
        case 0x3a8b94u: goto label_3a8b94;
        case 0x3a8b98u: goto label_3a8b98;
        case 0x3a8b9cu: goto label_3a8b9c;
        case 0x3a8ba0u: goto label_3a8ba0;
        case 0x3a8ba4u: goto label_3a8ba4;
        case 0x3a8ba8u: goto label_3a8ba8;
        case 0x3a8bacu: goto label_3a8bac;
        case 0x3a8bb0u: goto label_3a8bb0;
        case 0x3a8bb4u: goto label_3a8bb4;
        case 0x3a8bb8u: goto label_3a8bb8;
        case 0x3a8bbcu: goto label_3a8bbc;
        case 0x3a8bc0u: goto label_3a8bc0;
        case 0x3a8bc4u: goto label_3a8bc4;
        case 0x3a8bc8u: goto label_3a8bc8;
        case 0x3a8bccu: goto label_3a8bcc;
        case 0x3a8bd0u: goto label_3a8bd0;
        case 0x3a8bd4u: goto label_3a8bd4;
        case 0x3a8bd8u: goto label_3a8bd8;
        case 0x3a8bdcu: goto label_3a8bdc;
        case 0x3a8be0u: goto label_3a8be0;
        case 0x3a8be4u: goto label_3a8be4;
        case 0x3a8be8u: goto label_3a8be8;
        case 0x3a8becu: goto label_3a8bec;
        case 0x3a8bf0u: goto label_3a8bf0;
        case 0x3a8bf4u: goto label_3a8bf4;
        case 0x3a8bf8u: goto label_3a8bf8;
        case 0x3a8bfcu: goto label_3a8bfc;
        case 0x3a8c00u: goto label_3a8c00;
        case 0x3a8c04u: goto label_3a8c04;
        case 0x3a8c08u: goto label_3a8c08;
        case 0x3a8c0cu: goto label_3a8c0c;
        case 0x3a8c10u: goto label_3a8c10;
        case 0x3a8c14u: goto label_3a8c14;
        case 0x3a8c18u: goto label_3a8c18;
        case 0x3a8c1cu: goto label_3a8c1c;
        case 0x3a8c20u: goto label_3a8c20;
        case 0x3a8c24u: goto label_3a8c24;
        case 0x3a8c28u: goto label_3a8c28;
        case 0x3a8c2cu: goto label_3a8c2c;
        case 0x3a8c30u: goto label_3a8c30;
        case 0x3a8c34u: goto label_3a8c34;
        case 0x3a8c38u: goto label_3a8c38;
        case 0x3a8c3cu: goto label_3a8c3c;
        case 0x3a8c40u: goto label_3a8c40;
        case 0x3a8c44u: goto label_3a8c44;
        case 0x3a8c48u: goto label_3a8c48;
        case 0x3a8c4cu: goto label_3a8c4c;
        case 0x3a8c50u: goto label_3a8c50;
        case 0x3a8c54u: goto label_3a8c54;
        case 0x3a8c58u: goto label_3a8c58;
        case 0x3a8c5cu: goto label_3a8c5c;
        case 0x3a8c60u: goto label_3a8c60;
        case 0x3a8c64u: goto label_3a8c64;
        case 0x3a8c68u: goto label_3a8c68;
        case 0x3a8c6cu: goto label_3a8c6c;
        case 0x3a8c70u: goto label_3a8c70;
        case 0x3a8c74u: goto label_3a8c74;
        case 0x3a8c78u: goto label_3a8c78;
        case 0x3a8c7cu: goto label_3a8c7c;
        case 0x3a8c80u: goto label_3a8c80;
        case 0x3a8c84u: goto label_3a8c84;
        case 0x3a8c88u: goto label_3a8c88;
        case 0x3a8c8cu: goto label_3a8c8c;
        case 0x3a8c90u: goto label_3a8c90;
        case 0x3a8c94u: goto label_3a8c94;
        case 0x3a8c98u: goto label_3a8c98;
        case 0x3a8c9cu: goto label_3a8c9c;
        case 0x3a8ca0u: goto label_3a8ca0;
        case 0x3a8ca4u: goto label_3a8ca4;
        case 0x3a8ca8u: goto label_3a8ca8;
        case 0x3a8cacu: goto label_3a8cac;
        case 0x3a8cb0u: goto label_3a8cb0;
        case 0x3a8cb4u: goto label_3a8cb4;
        case 0x3a8cb8u: goto label_3a8cb8;
        case 0x3a8cbcu: goto label_3a8cbc;
        case 0x3a8cc0u: goto label_3a8cc0;
        case 0x3a8cc4u: goto label_3a8cc4;
        case 0x3a8cc8u: goto label_3a8cc8;
        case 0x3a8cccu: goto label_3a8ccc;
        case 0x3a8cd0u: goto label_3a8cd0;
        case 0x3a8cd4u: goto label_3a8cd4;
        case 0x3a8cd8u: goto label_3a8cd8;
        case 0x3a8cdcu: goto label_3a8cdc;
        case 0x3a8ce0u: goto label_3a8ce0;
        case 0x3a8ce4u: goto label_3a8ce4;
        case 0x3a8ce8u: goto label_3a8ce8;
        case 0x3a8cecu: goto label_3a8cec;
        default: break;
    }

    ctx->pc = 0x3a8a90u;

label_3a8a90:
    // 0x3a8a90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a8a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3a8a94:
    // 0x3a8a94: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3a8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3a8a98:
    // 0x3a8a98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a8a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3a8a9c:
    // 0x3a8a9c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a8aa0:
    // 0x3a8aa0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a8aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a8aa4:
    // 0x3a8aa4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3a8aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a8aa8:
    // 0x3a8aa8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a8aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a8aac:
    // 0x3a8aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a8ab0:
    // 0x3a8ab0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a8ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a8ab4:
    // 0x3a8ab4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a8ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a8ab8:
    // 0x3a8ab8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a8ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a8abc:
    // 0x3a8abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a8abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ac0:
    // 0x3a8ac0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3a8ac0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3a8ac4:
    // 0x3a8ac4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3a8ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3a8ac8:
    // 0x3a8ac8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3a8ac8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a8acc:
    // 0x3a8acc: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x3a8accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3a8ad0:
    // 0x3a8ad0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a8ad0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a8ad4:
    // 0x3a8ad4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3a8ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3a8ad8:
    // 0x3a8ad8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a8ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a8adc:
    // 0x3a8adc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3a8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3a8ae0:
    // 0x3a8ae0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3a8ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a8ae4:
    // 0x3a8ae4: 0x24720038  addiu       $s2, $v1, 0x38
    ctx->pc = 0x3a8ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_3a8ae8:
    // 0x3a8ae8: 0x90c311a1  lbu         $v1, 0x11A1($a2)
    ctx->pc = 0x3a8ae8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4513)));
label_3a8aec:
    // 0x3a8aec: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
label_3a8af0:
    if (ctx->pc == 0x3A8AF0u) {
        ctx->pc = 0x3A8AF0u;
            // 0x3a8af0: 0x26130008  addiu       $s3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x3A8AF4u;
        goto label_3a8af4;
    }
    ctx->pc = 0x3A8AECu;
    {
        const bool branch_taken_0x3a8aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8AECu;
            // 0x3a8af0: 0x26130008  addiu       $s3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8aec) {
            ctx->pc = 0x3A8CBCu;
            goto label_3a8cbc;
        }
    }
    ctx->pc = 0x3A8AF4u;
label_3a8af4:
    // 0x3a8af4: 0x8cc30da0  lw          $v1, 0xDA0($a2)
    ctx->pc = 0x3a8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3488)));
label_3a8af8:
    // 0x3a8af8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3a8af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a8afc:
    // 0x3a8afc: 0x54600070  bnel        $v1, $zero, . + 4 + (0x70 << 2)
label_3a8b00:
    if (ctx->pc == 0x3A8B00u) {
        ctx->pc = 0x3A8B00u;
            // 0x3a8b00: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3A8B04u;
        goto label_3a8b04;
    }
    ctx->pc = 0x3A8AFCu;
    {
        const bool branch_taken_0x3a8afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8afc) {
            ctx->pc = 0x3A8B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8AFCu;
            // 0x3a8b00: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8CC0u;
            goto label_3a8cc0;
        }
    }
    ctx->pc = 0x3A8B04u;
label_3a8b04:
    // 0x3a8b04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a8b08:
    // 0x3a8b08: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3a8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a8b0c:
    // 0x3a8b0c: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x3a8b0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3a8b10:
    // 0x3a8b10: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3a8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3a8b14:
    // 0x3a8b14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a8b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a8b18:
    // 0x3a8b18: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
label_3a8b1c:
    if (ctx->pc == 0x3A8B1Cu) {
        ctx->pc = 0x3A8B20u;
        goto label_3a8b20;
    }
    ctx->pc = 0x3A8B18u;
    {
        const bool branch_taken_0x3a8b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8b18) {
            ctx->pc = 0x3A8CBCu;
            goto label_3a8cbc;
        }
    }
    ctx->pc = 0x3A8B20u;
label_3a8b20:
    // 0x3a8b20: 0x8cc30d6c  lw          $v1, 0xD6C($a2)
    ctx->pc = 0x3a8b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3436)));
label_3a8b24:
    // 0x3a8b24: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3a8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3a8b28:
    // 0x3a8b28: 0x2442cd10  addiu       $v0, $v0, -0x32F0
    ctx->pc = 0x3a8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954256));
label_3a8b2c:
    // 0x3a8b2c: 0xc4d70a7c  lwc1        $f23, 0xA7C($a2)
    ctx->pc = 0x3a8b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3a8b30:
    // 0x3a8b30: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x3a8b30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_3a8b34:
    // 0x3a8b34: 0xc4d60a84  lwc1        $f22, 0xA84($a2)
    ctx->pc = 0x3a8b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a8b38:
    // 0x3a8b38: 0xc6540024  lwc1        $f20, 0x24($s2)
    ctx->pc = 0x3a8b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a8b3c:
    // 0x3a8b3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a8b40:
    // 0x3a8b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a8b44:
    // 0x3a8b44: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3a8b44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a8b48:
    // 0x3a8b48: 0xc0754b4  jal         func_1D52D0
label_3a8b4c:
    if (ctx->pc == 0x3A8B4Cu) {
        ctx->pc = 0x3A8B4Cu;
            // 0x3a8b4c: 0x24c40440  addiu       $a0, $a2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
        ctx->pc = 0x3A8B50u;
        goto label_3a8b50;
    }
    ctx->pc = 0x3A8B48u;
    SET_GPR_U32(ctx, 31, 0x3A8B50u);
    ctx->pc = 0x3A8B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8B48u;
            // 0x3a8b4c: 0x24c40440  addiu       $a0, $a2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8B50u; }
        if (ctx->pc != 0x3A8B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8B50u; }
        if (ctx->pc != 0x3A8B50u) { return; }
    }
    ctx->pc = 0x3A8B50u;
label_3a8b50:
    // 0x3a8b50: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x3a8b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8b54:
    // 0x3a8b54: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x3a8b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8b58:
    // 0x3a8b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a8b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8b5c:
    // 0x3a8b5c: 0x0  nop
    ctx->pc = 0x3a8b5cu;
    // NOP
label_3a8b60:
    // 0x3a8b60: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3a8b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a8b64:
    // 0x3a8b64: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3a8b68:
    if (ctx->pc == 0x3A8B68u) {
        ctx->pc = 0x3A8B68u;
            // 0x3a8b68: 0x46011541  sub.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x3A8B6Cu;
        goto label_3a8b6c;
    }
    ctx->pc = 0x3A8B64u;
    {
        const bool branch_taken_0x3a8b64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A8B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8B64u;
            // 0x3a8b68: 0x46011541  sub.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b64) {
            ctx->pc = 0x3A8B7Cu;
            goto label_3a8b7c;
        }
    }
    ctx->pc = 0x3A8B6Cu;
label_3a8b6c:
    // 0x3a8b6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a8b70:
    // 0x3a8b70: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3a8b70u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3a8b74:
    // 0x3a8b74: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3a8b74u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3a8b78:
    // 0x3a8b78: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3a8b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a8b7c:
    // 0x3a8b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a8b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8b80:
    // 0x3a8b80: 0x0  nop
    ctx->pc = 0x3a8b80u;
    // NOP
label_3a8b84:
    // 0x3a8b84: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x3a8b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a8b88:
    // 0x3a8b88: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3a8b8c:
    if (ctx->pc == 0x3A8B8Cu) {
        ctx->pc = 0x3A8B8Cu;
            // 0x3a8b8c: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x3A8B90u;
        goto label_3a8b90;
    }
    ctx->pc = 0x3A8B88u;
    {
        const bool branch_taken_0x3a8b88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a8b88) {
            ctx->pc = 0x3A8B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8B88u;
            // 0x3a8b8c: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8B9Cu;
            goto label_3a8b9c;
        }
    }
    ctx->pc = 0x3A8B90u;
label_3a8b90:
    // 0x3a8b90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a8b94:
    // 0x3a8b94: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x3a8b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3a8b98:
    // 0x3a8b98: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3a8b9c:
    // 0x3a8b9c: 0x86540008  lh          $s4, 0x8($s2)
    ctx->pc = 0x3a8b9cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_3a8ba0:
    // 0x3a8ba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a8ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a8ba4:
    // 0x3a8ba4: 0x0  nop
    ctx->pc = 0x3a8ba4u;
    // NOP
label_3a8ba8:
    // 0x3a8ba8: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x3a8ba8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
label_3a8bac:
    // 0x3a8bac: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x3a8bacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_3a8bb0:
    // 0x3a8bb0: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x3a8bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8bb4:
    // 0x3a8bb4: 0x8653000a  lh          $s3, 0xA($s2)
    ctx->pc = 0x3a8bb4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_3a8bb8:
    // 0x3a8bb8: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x3a8bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3a8bbc:
    // 0x3a8bbc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3a8bc0:
    if (ctx->pc == 0x3A8BC0u) {
        ctx->pc = 0x3A8BC0u;
            // 0x3a8bc0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A8BC4u;
        goto label_3a8bc4;
    }
    ctx->pc = 0x3A8BBCu;
    {
        const bool branch_taken_0x3a8bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8BBCu;
            // 0x3a8bc0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bbc) {
            ctx->pc = 0x3A8BE4u;
            goto label_3a8be4;
        }
    }
    ctx->pc = 0x3A8BC4u;
label_3a8bc4:
    // 0x3a8bc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a8bc8:
    // 0x3a8bc8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a8bcc:
    // 0x3a8bcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a8bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a8bd0:
    // 0x3a8bd0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a8bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a8bd4:
    // 0x3a8bd4: 0x320f809  jalr        $t9
label_3a8bd8:
    if (ctx->pc == 0x3A8BD8u) {
        ctx->pc = 0x3A8BD8u;
            // 0x3a8bd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A8BDCu;
        goto label_3a8bdc;
    }
    ctx->pc = 0x3A8BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A8BDCu);
        ctx->pc = 0x3A8BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8BD4u;
            // 0x3a8bd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A8BDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A8BDCu; }
            if (ctx->pc != 0x3A8BDCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A8BDCu;
label_3a8bdc:
    // 0x3a8bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8be0:
    // 0x3a8be0: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x3a8be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_3a8be4:
    // 0x3a8be4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3a8be4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8be8:
    // 0x3a8be8: 0x8e0b0034  lw          $t3, 0x34($s0)
    ctx->pc = 0x3a8be8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3a8bec:
    // 0x3a8bec: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3a8becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3a8bf0:
    // 0x3a8bf0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3a8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3a8bf4:
    // 0x3a8bf4: 0x84492100  lh          $t1, 0x2100($v0)
    ctx->pc = 0x3a8bf4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_3a8bf8:
    // 0x3a8bf8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a8bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a8bfc:
    // 0x3a8bfc: 0x856a0020  lh          $t2, 0x20($t3)
    ctx->pc = 0x3a8bfcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 32)));
label_3a8c00:
    // 0x3a8c00: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x3a8c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_3a8c04:
    // 0x3a8c04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a8c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a8c08:
    // 0x3a8c08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a8c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a8c0c:
    // 0x3a8c0c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3a8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3a8c10:
    // 0x3a8c10: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x3a8c10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_3a8c14:
    // 0x3a8c14: 0x84482102  lh          $t0, 0x2102($v0)
    ctx->pc = 0x3a8c14u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_3a8c18:
    // 0x3a8c18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a8c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8c1c:
    // 0x3a8c1c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3a8c1cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8c20:
    // 0x3a8c20: 0x90630116  lbu         $v1, 0x116($v1)
    ctx->pc = 0x3a8c20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_3a8c24:
    // 0x3a8c24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a8c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a8c28:
    // 0x3a8c28: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3a8c28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3a8c2c:
    // 0x3a8c2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a8c30:
    // 0x3a8c30: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3a8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3a8c34:
    // 0x3a8c34: 0x2233025  or          $a2, $s1, $v1
    ctx->pc = 0x3a8c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_3a8c38:
    // 0x3a8c38: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a8c38u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8c3c:
    // 0x3a8c3c: 0x0  nop
    ctx->pc = 0x3a8c3cu;
    // NOP
label_3a8c40:
    // 0x3a8c40: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a8c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a8c44:
    // 0x3a8c44: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x3a8c44u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a8c48:
    // 0x3a8c48: 0x0  nop
    ctx->pc = 0x3a8c48u;
    // NOP
label_3a8c4c:
    // 0x3a8c4c: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x3a8c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3a8c50:
    // 0x3a8c50: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a8c50u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8c54:
    // 0x3a8c54: 0x0  nop
    ctx->pc = 0x3a8c54u;
    // NOP
label_3a8c58:
    // 0x3a8c58: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a8c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a8c5c:
    // 0x3a8c5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3a8c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a8c60:
    // 0x3a8c60: 0x0  nop
    ctx->pc = 0x3a8c60u;
    // NOP
label_3a8c64:
    // 0x3a8c64: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x3a8c64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a8c68:
    // 0x3a8c68: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x3a8c68u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a8c6c:
    // 0x3a8c6c: 0xc5650008  lwc1        $f5, 0x8($t3)
    ctx->pc = 0x3a8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8c70:
    // 0x3a8c70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a8c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a8c74:
    // 0x3a8c74: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x3a8c74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_3a8c78:
    // 0x3a8c78: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x3a8c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8c7c:
    // 0x3a8c7c: 0x46011b01  sub.s       $f12, $f3, $f1
    ctx->pc = 0x3a8c7cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_3a8c80:
    // 0x3a8c80: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3a8c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3a8c84:
    // 0x3a8c84: 0x46011b80  add.s       $f14, $f3, $f1
    ctx->pc = 0x3a8c84u;
    ctx->f[14] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3a8c88:
    // 0x3a8c88: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x3a8c88u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3a8c8c:
    // 0x3a8c8c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a8c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a8c90:
    // 0x3a8c90: 0xc0bc284  jal         func_2F0A10
label_3a8c94:
    if (ctx->pc == 0x3A8C94u) {
        ctx->pc = 0x3A8C94u;
            // 0x3a8c94: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3A8C98u;
        goto label_3a8c98;
    }
    ctx->pc = 0x3A8C90u;
    SET_GPR_U32(ctx, 31, 0x3A8C98u);
    ctx->pc = 0x3A8C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8C90u;
            // 0x3a8c94: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8C98u; }
        if (ctx->pc != 0x3A8C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8C98u; }
        if (ctx->pc != 0x3A8C98u) { return; }
    }
    ctx->pc = 0x3A8C98u;
label_3a8c98:
    // 0x3a8c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a8c9c:
    // 0x3a8c9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a8c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ca0:
    // 0x3a8ca0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a8ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ca4:
    // 0x3a8ca4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a8ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ca8:
    // 0x3a8ca8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a8ca8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a8cac:
    // 0x3a8cac: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a8cacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3a8cb0:
    // 0x3a8cb0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a8cb0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3a8cb4:
    // 0x3a8cb4: 0xc0eac24  jal         func_3AB090
label_3a8cb8:
    if (ctx->pc == 0x3A8CB8u) {
        ctx->pc = 0x3A8CB8u;
            // 0x3a8cb8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3A8CBCu;
        goto label_3a8cbc;
    }
    ctx->pc = 0x3A8CB4u;
    SET_GPR_U32(ctx, 31, 0x3A8CBCu);
    ctx->pc = 0x3A8CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8CB4u;
            // 0x3a8cb8: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AB090u;
    if (runtime->hasFunction(0x3AB090u)) {
        auto targetFn = runtime->lookupFunction(0x3AB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8CBCu; }
        if (ctx->pc != 0x3A8CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AB090_0x3ab090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8CBCu; }
        if (ctx->pc != 0x3A8CBCu) { return; }
    }
    ctx->pc = 0x3A8CBCu;
label_3a8cbc:
    // 0x3a8cbc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a8cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a8cc0:
    // 0x3a8cc0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3a8cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3a8cc4:
    // 0x3a8cc4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a8cc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a8cc8:
    // 0x3a8cc8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3a8cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a8ccc:
    // 0x3a8ccc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a8cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a8cd0:
    // 0x3a8cd0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a8cd4:
    // 0x3a8cd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a8cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a8cd8:
    // 0x3a8cd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a8cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a8cdc:
    // 0x3a8cdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a8cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8ce0:
    // 0x3a8ce0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a8ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a8ce4:
    // 0x3a8ce4: 0x3e00008  jr          $ra
label_3a8ce8:
    if (ctx->pc == 0x3A8CE8u) {
        ctx->pc = 0x3A8CE8u;
            // 0x3a8ce8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3A8CECu;
        goto label_3a8cec;
    }
    ctx->pc = 0x3A8CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8CE4u;
            // 0x3a8ce8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A8CECu;
label_3a8cec:
    // 0x3a8cec: 0x0  nop
    ctx->pc = 0x3a8cecu;
    // NOP
}
