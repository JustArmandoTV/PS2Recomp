#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FB00
// Address: 0x26fb00 - 0x26fc50
void sub_0026FB00_0x26fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FB00_0x26fb00");
#endif

    ctx->pc = 0x26fb00u;

    // 0x26fb00: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fb04: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x26fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x26fb08: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26fb0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26fb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26fb10: 0x0  nop
    ctx->pc = 0x26fb10u;
    // NOP
    // 0x26fb14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26fb14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fb18: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x26FB18u;
    {
        const bool branch_taken_0x26fb18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fb18) {
            ctx->pc = 0x26FBF0u;
            goto label_26fbf0;
        }
    }
    ctx->pc = 0x26FB20u;
    // 0x26fb20: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x26fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fb24: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x26fb24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fb28: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x26FB28u;
    {
        const bool branch_taken_0x26fb28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB28u;
            // 0x26fb2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb28) {
            ctx->pc = 0x26FB70u;
            goto label_26fb70;
        }
    }
    ctx->pc = 0x26FB30u;
    // 0x26fb30: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x26fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fb34: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x26fb34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fb38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x26FB38u;
    {
        const bool branch_taken_0x26fb38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB38u;
            // 0x26fb3c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb38) {
            ctx->pc = 0x26FB48u;
            goto label_26fb48;
        }
    }
    ctx->pc = 0x26FB40u;
    // 0x26fb40: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26FB40u;
    {
        const bool branch_taken_0x26fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB40u;
            // 0x26fb44: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb40) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FB48u;
label_26fb48:
    // 0x26fb48: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x26fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x26fb4c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x26fb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x26fb50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26fb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fb54: 0x0  nop
    ctx->pc = 0x26fb54u;
    // NOP
    // 0x26fb58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26fb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fb5c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x26FB5Cu;
    {
        const bool branch_taken_0x26fb5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fb5c) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FB64u;
    // 0x26fb64: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x26FB64u;
    {
        const bool branch_taken_0x26fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB64u;
            // 0x26fb68: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb64) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FB6Cu;
    // 0x26fb6c: 0x0  nop
    ctx->pc = 0x26fb6cu;
    // NOP
label_26fb70:
    // 0x26fb70: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x26fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x26fb74: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x26fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x26fb78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26fb78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fb7c: 0x0  nop
    ctx->pc = 0x26fb7cu;
    // NOP
    // 0x26fb80: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26fb80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fb84: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x26FB84u;
    {
        const bool branch_taken_0x26fb84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fb84) {
            ctx->pc = 0x26FBC0u;
            goto label_26fbc0;
        }
    }
    ctx->pc = 0x26FB8Cu;
    // 0x26fb8c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x26fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fb90: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x26fb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fb94: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26FB94u;
    {
        const bool branch_taken_0x26fb94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB94u;
            // 0x26fb98: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb94) {
            ctx->pc = 0x26FBA8u;
            goto label_26fba8;
        }
    }
    ctx->pc = 0x26FB9Cu;
    // 0x26fb9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x26FB9Cu;
    {
        const bool branch_taken_0x26fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB9Cu;
            // 0x26fba0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb9c) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FBA4u;
    // 0x26fba4: 0x0  nop
    ctx->pc = 0x26fba4u;
    // NOP
label_26fba8:
    // 0x26fba8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26fba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fbac: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x26FBACu;
    {
        const bool branch_taken_0x26fbac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fbac) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FBB4u;
    // 0x26fbb4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x26FBB4u;
    {
        const bool branch_taken_0x26fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBB4u;
            // 0x26fbb8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbb4) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FBBCu;
    // 0x26fbbc: 0x0  nop
    ctx->pc = 0x26fbbcu;
    // NOP
label_26fbc0:
    // 0x26fbc0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x26fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fbc4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x26fbc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fbc8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x26FBC8u;
    {
        const bool branch_taken_0x26fbc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fbc8) {
            ctx->pc = 0x26FBD8u;
            goto label_26fbd8;
        }
    }
    ctx->pc = 0x26FBD0u;
    // 0x26fbd0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26FBD0u;
    {
        const bool branch_taken_0x26fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBD0u;
            // 0x26fbd4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbd0) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FBD8u;
label_26fbd8:
    // 0x26fbd8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26fbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fbdc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x26FBDCu;
    {
        const bool branch_taken_0x26fbdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fbdc) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FBE4u;
    // 0x26fbe4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26FBE4u;
    {
        const bool branch_taken_0x26fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FBE4u;
            // 0x26fbe8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbe4) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FBECu;
    // 0x26fbec: 0x0  nop
    ctx->pc = 0x26fbecu;
    // NOP
label_26fbf0:
    // 0x26fbf0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x26fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fbf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26fbf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fbf8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x26FBF8u;
    {
        const bool branch_taken_0x26fbf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fbf8) {
            ctx->pc = 0x26FC40u;
            goto label_26fc40;
        }
    }
    ctx->pc = 0x26FC00u;
    // 0x26fc00: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x26fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fc04: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x26fc04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fc08: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC08u;
    {
        const bool branch_taken_0x26fc08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC08u;
            // 0x26fc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc08) {
            ctx->pc = 0x26FC18u;
            goto label_26fc18;
        }
    }
    ctx->pc = 0x26FC10u;
    // 0x26fc10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26FC10u;
    {
        const bool branch_taken_0x26fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC10u;
            // 0x26fc14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc10) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FC18u;
label_26fc18:
    // 0x26fc18: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x26fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x26fc1c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x26fc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x26fc20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26fc20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fc24: 0x0  nop
    ctx->pc = 0x26fc24u;
    // NOP
    // 0x26fc28: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26fc28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fc2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26FC2Cu;
    {
        const bool branch_taken_0x26fc2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fc2c) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FC34u;
    // 0x26fc34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC34u;
    {
        const bool branch_taken_0x26fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC34u;
            // 0x26fc38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc34) {
            ctx->pc = 0x26FC48u;
            goto label_26fc48;
        }
    }
    ctx->pc = 0x26FC3Cu;
    // 0x26fc3c: 0x0  nop
    ctx->pc = 0x26fc3cu;
    // NOP
label_26fc40:
    // 0x26fc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26fc44: 0x0  nop
    ctx->pc = 0x26fc44u;
    // NOP
label_26fc48:
    // 0x26fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x26FC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FC50u;
}
