#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BAFC0
// Address: 0x3bafc0 - 0x3bb090
void sub_003BAFC0_0x3bafc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAFC0_0x3bafc0");
#endif

    ctx->pc = 0x3bafc0u;

    // 0x3bafc0: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x3bafc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bafc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3bafc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bafc8: 0x0  nop
    ctx->pc = 0x3bafc8u;
    // NOP
    // 0x3bafcc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3bafccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bafd0: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x3BAFD0u;
    {
        const bool branch_taken_0x3bafd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bafd0) {
            ctx->pc = 0x3BAFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAFD0u;
            // 0x3bafd4: 0xc480002c  lwc1        $f0, 0x2C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BAFFCu;
            goto label_3baffc;
        }
    }
    ctx->pc = 0x3BAFD8u;
    // 0x3bafd8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3bafd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3bafdc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3bafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3bafe0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3bafe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bafe4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3bafe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3bafe8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3bafe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bafec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BAFECu;
    {
        const bool branch_taken_0x3bafec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BAFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAFECu;
            // 0x3baff0: 0xe4800044  swc1        $f0, 0x44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bafec) {
            ctx->pc = 0x3BAFF8u;
            goto label_3baff8;
        }
    }
    ctx->pc = 0x3BAFF4u;
    // 0x3baff4: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x3baff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_3baff8:
    // 0x3baff8: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x3baff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3baffc:
    // 0x3baffc: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x3baffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb000: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3bb000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb004: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3BB004u;
    {
        const bool branch_taken_0x3bb004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb004) {
            ctx->pc = 0x3BB040u;
            goto label_3bb040;
        }
    }
    ctx->pc = 0x3BB00Cu;
    // 0x3bb00c: 0x3c03becc  lui         $v1, 0xBECC
    ctx->pc = 0x3bb00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48844 << 16));
    // 0x3bb010: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3bb010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3bb014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bb014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb018: 0x0  nop
    ctx->pc = 0x3bb018u;
    // NOP
    // 0x3bb01c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3bb01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bb020: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x3bb020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x3bb024: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x3bb024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb028: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x3bb028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb02c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bb02cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb030: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3BB030u;
    {
        const bool branch_taken_0x3bb030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb030) {
            ctx->pc = 0x3BB07Cu;
            goto label_3bb07c;
        }
    }
    ctx->pc = 0x3BB038u;
    // 0x3bb038: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3BB038u;
    {
        const bool branch_taken_0x3bb038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB038u;
            // 0x3bb03c: 0xe4810034  swc1        $f1, 0x34($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb038) {
            ctx->pc = 0x3BB07Cu;
            goto label_3bb07c;
        }
    }
    ctx->pc = 0x3BB040u;
label_3bb040:
    // 0x3bb040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bb040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb044: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3BB044u;
    {
        const bool branch_taken_0x3bb044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb044) {
            ctx->pc = 0x3BB07Cu;
            goto label_3bb07c;
        }
    }
    ctx->pc = 0x3BB04Cu;
    // 0x3bb04c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3bb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x3bb050: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3bb050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3bb054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bb054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb058: 0x0  nop
    ctx->pc = 0x3bb058u;
    // NOP
    // 0x3bb05c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3bb05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bb060: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x3bb060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x3bb064: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x3bb064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb068: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x3bb068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb06c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3bb06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb070: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB070u;
    {
        const bool branch_taken_0x3bb070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb070) {
            ctx->pc = 0x3BB07Cu;
            goto label_3bb07c;
        }
    }
    ctx->pc = 0x3BB078u;
    // 0x3bb078: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x3bb078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_3bb07c:
    // 0x3bb07c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BB084u;
    // 0x3bb084: 0x0  nop
    ctx->pc = 0x3bb084u;
    // NOP
    // 0x3bb088: 0x0  nop
    ctx->pc = 0x3bb088u;
    // NOP
    // 0x3bb08c: 0x0  nop
    ctx->pc = 0x3bb08cu;
    // NOP
}
