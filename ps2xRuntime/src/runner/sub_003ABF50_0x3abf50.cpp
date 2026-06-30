#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003ABF50
// Address: 0x3abf50 - 0x3ac030
void sub_003ABF50_0x3abf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABF50_0x3abf50");
#endif

    switch (ctx->pc) {
        case 0x3abf50u: goto label_3abf50;
        case 0x3abf54u: goto label_3abf54;
        case 0x3abf58u: goto label_3abf58;
        case 0x3abf5cu: goto label_3abf5c;
        case 0x3abf60u: goto label_3abf60;
        case 0x3abf64u: goto label_3abf64;
        case 0x3abf68u: goto label_3abf68;
        case 0x3abf6cu: goto label_3abf6c;
        case 0x3abf70u: goto label_3abf70;
        case 0x3abf74u: goto label_3abf74;
        case 0x3abf78u: goto label_3abf78;
        case 0x3abf7cu: goto label_3abf7c;
        case 0x3abf80u: goto label_3abf80;
        case 0x3abf84u: goto label_3abf84;
        case 0x3abf88u: goto label_3abf88;
        case 0x3abf8cu: goto label_3abf8c;
        case 0x3abf90u: goto label_3abf90;
        case 0x3abf94u: goto label_3abf94;
        case 0x3abf98u: goto label_3abf98;
        case 0x3abf9cu: goto label_3abf9c;
        case 0x3abfa0u: goto label_3abfa0;
        case 0x3abfa4u: goto label_3abfa4;
        case 0x3abfa8u: goto label_3abfa8;
        case 0x3abfacu: goto label_3abfac;
        case 0x3abfb0u: goto label_3abfb0;
        case 0x3abfb4u: goto label_3abfb4;
        case 0x3abfb8u: goto label_3abfb8;
        case 0x3abfbcu: goto label_3abfbc;
        case 0x3abfc0u: goto label_3abfc0;
        case 0x3abfc4u: goto label_3abfc4;
        case 0x3abfc8u: goto label_3abfc8;
        case 0x3abfccu: goto label_3abfcc;
        case 0x3abfd0u: goto label_3abfd0;
        case 0x3abfd4u: goto label_3abfd4;
        case 0x3abfd8u: goto label_3abfd8;
        case 0x3abfdcu: goto label_3abfdc;
        case 0x3abfe0u: goto label_3abfe0;
        case 0x3abfe4u: goto label_3abfe4;
        case 0x3abfe8u: goto label_3abfe8;
        case 0x3abfecu: goto label_3abfec;
        case 0x3abff0u: goto label_3abff0;
        case 0x3abff4u: goto label_3abff4;
        case 0x3abff8u: goto label_3abff8;
        case 0x3abffcu: goto label_3abffc;
        case 0x3ac000u: goto label_3ac000;
        case 0x3ac004u: goto label_3ac004;
        case 0x3ac008u: goto label_3ac008;
        case 0x3ac00cu: goto label_3ac00c;
        case 0x3ac010u: goto label_3ac010;
        case 0x3ac014u: goto label_3ac014;
        case 0x3ac018u: goto label_3ac018;
        case 0x3ac01cu: goto label_3ac01c;
        case 0x3ac020u: goto label_3ac020;
        case 0x3ac024u: goto label_3ac024;
        case 0x3ac028u: goto label_3ac028;
        case 0x3ac02cu: goto label_3ac02c;
        default: break;
    }

    ctx->pc = 0x3abf50u;

label_3abf50:
    // 0x3abf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3abf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3abf54:
    // 0x3abf54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3abf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3abf58:
    // 0x3abf58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3abf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3abf5c:
    // 0x3abf5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3abf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3abf60:
    // 0x3abf60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3abf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3abf64:
    // 0x3abf64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3abf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3abf68:
    // 0x3abf68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3abf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3abf6c:
    // 0x3abf6c: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3abf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3abf70:
    // 0x3abf70: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3abf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3abf74:
    // 0x3abf74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3abf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3abf78:
    // 0x3abf78: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_3abf7c:
    if (ctx->pc == 0x3ABF7Cu) {
        ctx->pc = 0x3ABF7Cu;
            // 0x3abf7c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x3ABF80u;
        goto label_3abf80;
    }
    ctx->pc = 0x3ABF78u;
    {
        const bool branch_taken_0x3abf78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ABF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABF78u;
            // 0x3abf7c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf78) {
            ctx->pc = 0x3ABFD4u;
            goto label_3abfd4;
        }
    }
    ctx->pc = 0x3ABF80u;
label_3abf80:
    // 0x3abf80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3abf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3abf84:
    // 0x3abf84: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_3abf88:
    if (ctx->pc == 0x3ABF88u) {
        ctx->pc = 0x3ABF88u;
            // 0x3abf88: 0xc4a10004  lwc1        $f1, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3ABF8Cu;
        goto label_3abf8c;
    }
    ctx->pc = 0x3ABF84u;
    {
        const bool branch_taken_0x3abf84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3abf84) {
            ctx->pc = 0x3ABF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABF84u;
            // 0x3abf88: 0xc4a10004  lwc1        $f1, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABFA4u;
            goto label_3abfa4;
        }
    }
    ctx->pc = 0x3ABF8Cu;
label_3abf8c:
    // 0x3abf8c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3abf90:
    if (ctx->pc == 0x3ABF90u) {
        ctx->pc = 0x3ABF90u;
            // 0x3abf90: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3ABF94u;
        goto label_3abf94;
    }
    ctx->pc = 0x3ABF8Cu;
    {
        const bool branch_taken_0x3abf8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abf8c) {
            ctx->pc = 0x3ABF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABF8Cu;
            // 0x3abf90: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF9Cu;
            goto label_3abf9c;
        }
    }
    ctx->pc = 0x3ABF94u;
label_3abf94:
    // 0x3abf94: 0x1000000f  b           . + 4 + (0xF << 2)
label_3abf98:
    if (ctx->pc == 0x3ABF98u) {
        ctx->pc = 0x3ABF9Cu;
        goto label_3abf9c;
    }
    ctx->pc = 0x3ABF94u;
    {
        const bool branch_taken_0x3abf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abf94) {
            ctx->pc = 0x3ABFD4u;
            goto label_3abfd4;
        }
    }
    ctx->pc = 0x3ABF9Cu;
label_3abf9c:
    // 0x3abf9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3abf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3abfa0:
    // 0x3abfa0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3abfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3abfa4:
    // 0x3abfa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3abfa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3abfa8:
    // 0x3abfa8: 0x0  nop
    ctx->pc = 0x3abfa8u;
    // NOP
label_3abfac:
    // 0x3abfac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3abfacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3abfb0:
    // 0x3abfb0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3abfb4:
    if (ctx->pc == 0x3ABFB4u) {
        ctx->pc = 0x3ABFB4u;
            // 0x3abfb4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x3ABFB8u;
        goto label_3abfb8;
    }
    ctx->pc = 0x3ABFB0u;
    {
        const bool branch_taken_0x3abfb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3abfb0) {
            ctx->pc = 0x3ABFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABFB0u;
            // 0x3abfb4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABFCCu;
            goto label_3abfcc;
        }
    }
    ctx->pc = 0x3ABFB8u;
label_3abfb8:
    // 0x3abfb8: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x3abfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3abfbc:
    // 0x3abfbc: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x3abfbcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3abfc0:
    // 0x3abfc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3abfc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3abfc4:
    // 0x3abfc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3abfc8:
    if (ctx->pc == 0x3ABFC8u) {
        ctx->pc = 0x3ABFC8u;
            // 0x3abfc8: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->pc = 0x3ABFCCu;
        goto label_3abfcc;
    }
    ctx->pc = 0x3ABFC4u;
    {
        const bool branch_taken_0x3abfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABFC4u;
            // 0x3abfc8: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abfc4) {
            ctx->pc = 0x3ABFD4u;
            goto label_3abfd4;
        }
    }
    ctx->pc = 0x3ABFCCu;
label_3abfcc:
    // 0x3abfcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3abfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3abfd0:
    // 0x3abfd0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3abfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3abfd4:
    // 0x3abfd4: 0x54e0000f  bnel        $a3, $zero, . + 4 + (0xF << 2)
label_3abfd8:
    if (ctx->pc == 0x3ABFD8u) {
        ctx->pc = 0x3ABFD8u;
            // 0x3abfd8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3ABFDCu;
        goto label_3abfdc;
    }
    ctx->pc = 0x3ABFD4u;
    {
        const bool branch_taken_0x3abfd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abfd4) {
            ctx->pc = 0x3ABFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABFD4u;
            // 0x3abfd8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC014u;
            goto label_3ac014;
        }
    }
    ctx->pc = 0x3ABFDCu;
label_3abfdc:
    // 0x3abfdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3abfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3abfe0:
    // 0x3abfe0: 0x8e190128  lw          $t9, 0x128($s0)
    ctx->pc = 0x3abfe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_3abfe4:
    // 0x3abfe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abfe8:
    // 0x3abfe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3abfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3abfec:
    // 0x3abfec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3abfecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3abff0:
    // 0x3abff0: 0x320f809  jalr        $t9
label_3abff4:
    if (ctx->pc == 0x3ABFF4u) {
        ctx->pc = 0x3ABFF4u;
            // 0x3abff4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ABFF8u;
        goto label_3abff8;
    }
    ctx->pc = 0x3ABFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ABFF8u);
        ctx->pc = 0x3ABFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ABFF0u;
            // 0x3abff4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ABFF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ABFF8u; }
            if (ctx->pc != 0x3ABFF8u) { return; }
        }
        }
    }
    ctx->pc = 0x3ABFF8u;
label_3abff8:
    // 0x3abff8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3abff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3abffc:
    // 0x3abffc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3abffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3ac000:
    // 0x3ac000: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3ac000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_3ac004:
    // 0x3ac004: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3ac004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3ac008:
    // 0x3ac008: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
label_3ac00c:
    if (ctx->pc == 0x3AC00Cu) {
        ctx->pc = 0x3AC00Cu;
            // 0x3ac00c: 0x8e190128  lw          $t9, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->pc = 0x3AC010u;
        goto label_3ac010;
    }
    ctx->pc = 0x3AC008u;
    {
        const bool branch_taken_0x3ac008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac008) {
            ctx->pc = 0x3AC00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC008u;
            // 0x3ac00c: 0x8e190128  lw          $t9, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ABFE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3abfe4;
        }
    }
    ctx->pc = 0x3AC010u;
label_3ac010:
    // 0x3ac010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ac010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac014:
    // 0x3ac014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ac014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac018:
    // 0x3ac018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ac018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac01c:
    // 0x3ac01c: 0x3e00008  jr          $ra
label_3ac020:
    if (ctx->pc == 0x3AC020u) {
        ctx->pc = 0x3AC020u;
            // 0x3ac020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3AC024u;
        goto label_3ac024;
    }
    ctx->pc = 0x3AC01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC01Cu;
            // 0x3ac020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC024u;
label_3ac024:
    // 0x3ac024: 0x0  nop
    ctx->pc = 0x3ac024u;
    // NOP
label_3ac028:
    // 0x3ac028: 0x0  nop
    ctx->pc = 0x3ac028u;
    // NOP
label_3ac02c:
    // 0x3ac02c: 0x0  nop
    ctx->pc = 0x3ac02cu;
    // NOP
}
