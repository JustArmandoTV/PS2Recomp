#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4EB0
// Address: 0x2e4eb0 - 0x2e5010
void sub_002E4EB0_0x2e4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4EB0_0x2e4eb0");
#endif

    switch (ctx->pc) {
        case 0x2e4ffcu: goto label_2e4ffc;
        default: break;
    }

    ctx->pc = 0x2e4eb0u;

    // 0x2e4eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4eb4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2e4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2e4eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4ebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ec0: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x2e4ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4ec4: 0x8c688a08  lw          $t0, -0x75F8($v1)
    ctx->pc = 0x2e4ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2e4ec8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4ecc: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x2e4eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4ed0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4ED0u;
    {
        const bool branch_taken_0x2e4ed0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4ED0u;
            // 0x2e4ed4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ed0) {
            ctx->pc = 0x2E4EE8u;
            goto label_2e4ee8;
        }
    }
    ctx->pc = 0x2E4ED8u;
    // 0x2e4ed8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e4ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e4edc: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x2e4edcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e4ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4EE0u;
    {
        const bool branch_taken_0x2e4ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4EE0u;
            // 0x2e4ee4: 0xe4a000a8  swc1        $f0, 0xA8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ee0) {
            ctx->pc = 0x2E4EECu;
            goto label_2e4eec;
        }
    }
    ctx->pc = 0x2E4EE8u;
label_2e4ee8:
    // 0x2e4ee8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e4ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4eec:
    // 0x2e4eec: 0x54600044  bnel        $v1, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2E4EECu;
    {
        const bool branch_taken_0x2e4eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4eec) {
            ctx->pc = 0x2E4EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4EECu;
            // 0x2e4ef0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5000u;
            goto label_2e5000;
        }
    }
    ctx->pc = 0x2E4EF4u;
    // 0x2e4ef4: 0x8ca300b0  lw          $v1, 0xB0($a1)
    ctx->pc = 0x2e4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x2e4ef8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e4ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4efc: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E4EFCu;
    {
        const bool branch_taken_0x2e4efc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4EFCu;
            // 0x2e4f00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4efc) {
            ctx->pc = 0x2E4F64u;
            goto label_2e4f64;
        }
    }
    ctx->pc = 0x2E4F04u;
    // 0x2e4f04: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e4f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e4f08: 0x8ca600b4  lw          $a2, 0xB4($a1)
    ctx->pc = 0x2e4f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x2e4f0c: 0x8c64e4d8  lw          $a0, -0x1B28($v1)
    ctx->pc = 0x2e4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960344)));
    // 0x2e4f10: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x2e4f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4f14: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x2e4f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4f18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e4f1c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2e4f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2e4f20: 0x8c63e4e0  lw          $v1, -0x1B20($v1)
    ctx->pc = 0x2e4f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960352)));
    // 0x2e4f24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e4f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e4f28: 0xe4a000a0  swc1        $f0, 0xA0($a1)
    ctx->pc = 0x2e4f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
    // 0x2e4f2c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2e4f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4f30: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x2e4f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4f34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e4f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4f38: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4F38u;
    {
        const bool branch_taken_0x2e4f38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F38u;
            // 0x2e4f3c: 0xc31824  and         $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f38) {
            ctx->pc = 0x2E4F5Cu;
            goto label_2e4f5c;
        }
    }
    ctx->pc = 0x2E4F40u;
    // 0x2e4f40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4F40u;
    {
        const bool branch_taken_0x2e4f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4f40) {
            ctx->pc = 0x2E4F50u;
            goto label_2e4f50;
        }
    }
    ctx->pc = 0x2E4F48u;
    // 0x2e4f48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4F48u;
    {
        const bool branch_taken_0x2e4f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F48u;
            // 0x2e4f4c: 0xaca000a0  sw          $zero, 0xA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f48) {
            ctx->pc = 0x2E4F5Cu;
            goto label_2e4f5c;
        }
    }
    ctx->pc = 0x2E4F50u;
label_2e4f50:
    // 0x2e4f50: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4F50u;
    {
        const bool branch_taken_0x2e4f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4f50) {
            ctx->pc = 0x2E4F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4F50u;
            // 0x2e4f54: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4F60u;
            goto label_2e4f60;
        }
    }
    ctx->pc = 0x2E4F58u;
    // 0x2e4f58: 0xe4a100a0  swc1        $f1, 0xA0($a1)
    ctx->pc = 0x2e4f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
label_2e4f5c:
    // 0x2e4f5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e4f5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4f60:
    // 0x2e4f60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e4f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e4f64:
    // 0x2e4f64: 0x8ca300b0  lw          $v1, 0xB0($a1)
    ctx->pc = 0x2e4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x2e4f68: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2e4f6c: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E4F6Cu;
    {
        const bool branch_taken_0x2e4f6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4f6c) {
            ctx->pc = 0x2E4FD4u;
            goto label_2e4fd4;
        }
    }
    ctx->pc = 0x2E4F74u;
    // 0x2e4f74: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x2e4f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4f78: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e4f7c: 0xc4a000a4  lwc1        $f0, 0xA4($a1)
    ctx->pc = 0x2e4f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4f80: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e4f84: 0x8ca600b4  lw          $a2, 0xB4($a1)
    ctx->pc = 0x2e4f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x2e4f88: 0x8c84e4e8  lw          $a0, -0x1B18($a0)
    ctx->pc = 0x2e4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960360)));
    // 0x2e4f8c: 0x8c63e4f0  lw          $v1, -0x1B10($v1)
    ctx->pc = 0x2e4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960368)));
    // 0x2e4f90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e4f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e4f94: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2e4f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2e4f98: 0xe4a000a4  swc1        $f0, 0xA4($a1)
    ctx->pc = 0x2e4f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
    // 0x2e4f9c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2e4f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4fa0: 0xc4a000a4  lwc1        $f0, 0xA4($a1)
    ctx->pc = 0x2e4fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4fa4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e4fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4fa8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4FA8u;
    {
        const bool branch_taken_0x2e4fa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4FA8u;
            // 0x2e4fac: 0xc31824  and         $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fa8) {
            ctx->pc = 0x2E4FCCu;
            goto label_2e4fcc;
        }
    }
    ctx->pc = 0x2E4FB0u;
    // 0x2e4fb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4FB0u;
    {
        const bool branch_taken_0x2e4fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4fb0) {
            ctx->pc = 0x2E4FC0u;
            goto label_2e4fc0;
        }
    }
    ctx->pc = 0x2E4FB8u;
    // 0x2e4fb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4FB8u;
    {
        const bool branch_taken_0x2e4fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4FB8u;
            // 0x2e4fbc: 0xaca000a4  sw          $zero, 0xA4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fb8) {
            ctx->pc = 0x2E4FCCu;
            goto label_2e4fcc;
        }
    }
    ctx->pc = 0x2E4FC0u;
label_2e4fc0:
    // 0x2e4fc0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4FC0u;
    {
        const bool branch_taken_0x2e4fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4fc0) {
            ctx->pc = 0x2E4FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4FC0u;
            // 0x2e4fc4: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E4FD0u;
            goto label_2e4fd0;
        }
    }
    ctx->pc = 0x2E4FC8u;
    // 0x2e4fc8: 0xe4a100a4  swc1        $f1, 0xA4($a1)
    ctx->pc = 0x2e4fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
label_2e4fcc:
    // 0x2e4fcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e4fccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4fd0:
    // 0x2e4fd0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e4fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e4fd4:
    // 0x2e4fd4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4FD4u;
    {
        const bool branch_taken_0x2e4fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4fd4) {
            ctx->pc = 0x2E4FFCu;
            goto label_2e4ffc;
        }
    }
    ctx->pc = 0x2E4FDCu;
    // 0x2e4fdc: 0x8ca400b4  lw          $a0, 0xB4($a1)
    ctx->pc = 0x2e4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x2e4fe0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e4fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e4fe4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2e4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2e4fe8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e4fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e4fec: 0xaca300b4  sw          $v1, 0xB4($a1)
    ctx->pc = 0x2e4fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 3));
    // 0x2e4ff0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x2e4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x2e4ff4: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x2E4FF4u;
    SET_GPR_U32(ctx, 31, 0x2E4FFCu);
    ctx->pc = 0x2E4FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4FF4u;
            // 0x2e4ff8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4FFCu; }
        if (ctx->pc != 0x2E4FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4FFCu; }
        if (ctx->pc != 0x2E4FFCu) { return; }
    }
    ctx->pc = 0x2E4FFCu;
label_2e4ffc:
    // 0x2e4ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5000:
    // 0x2e5000: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5000u;
            // 0x2e5004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5008u;
    // 0x2e5008: 0x0  nop
    ctx->pc = 0x2e5008u;
    // NOP
    // 0x2e500c: 0x0  nop
    ctx->pc = 0x2e500cu;
    // NOP
}
