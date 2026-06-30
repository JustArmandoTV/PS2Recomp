#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EFE40
// Address: 0x4efe40 - 0x4f0010
void sub_004EFE40_0x4efe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFE40_0x4efe40");
#endif

    switch (ctx->pc) {
        case 0x4eff80u: goto label_4eff80;
        case 0x4effd8u: goto label_4effd8;
        case 0x4efff0u: goto label_4efff0;
        default: break;
    }

    ctx->pc = 0x4efe40u;

    // 0x4efe40: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4efe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4efe44: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x4efe44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x4efe48: 0x8c630df8  lw          $v1, 0xDF8($v1)
    ctx->pc = 0x4efe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3576)));
    // 0x4efe4c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x4efe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x4efe50: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x4efe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x4efe54: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4efe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4efe58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4efe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4efe5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4EFE5Cu;
    {
        const bool branch_taken_0x4efe5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFE5Cu;
            // 0x4efe60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efe5c) {
            ctx->pc = 0x4EFE68u;
            goto label_4efe68;
        }
    }
    ctx->pc = 0x4EFE64u;
    // 0x4efe64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4efe64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4efe68:
    // 0x4efe68: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4efe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4efe6c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EFE6Cu;
    {
        const bool branch_taken_0x4efe6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4efe6c) {
            ctx->pc = 0x4EFE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFE6Cu;
            // 0x4efe70: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EFE88u;
            goto label_4efe88;
        }
    }
    ctx->pc = 0x4EFE74u;
    // 0x4efe74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4efe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4efe78: 0x54c30002  bnel        $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4EFE78u;
    {
        const bool branch_taken_0x4efe78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4efe78) {
            ctx->pc = 0x4EFE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFE78u;
            // 0x4efe7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EFE84u;
            goto label_4efe84;
        }
    }
    ctx->pc = 0x4EFE80u;
    // 0x4efe80: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4efe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4efe84:
    // 0x4efe84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4efe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4efe88:
    // 0x4efe88: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x4EFE88u;
    {
        const bool branch_taken_0x4efe88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4efe88) {
            ctx->pc = 0x4EFF30u;
            goto label_4eff30;
        }
    }
    ctx->pc = 0x4EFE90u;
    // 0x4efe90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4efe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4efe94: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4EFE94u;
    {
        const bool branch_taken_0x4efe94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4efe94) {
            ctx->pc = 0x4EFF08u;
            goto label_4eff08;
        }
    }
    ctx->pc = 0x4EFE9Cu;
    // 0x4efe9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4efe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4efea0: 0x10c3000f  beq         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4EFEA0u;
    {
        const bool branch_taken_0x4efea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4efea0) {
            ctx->pc = 0x4EFEE0u;
            goto label_4efee0;
        }
    }
    ctx->pc = 0x4EFEA8u;
    // 0x4efea8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EFEA8u;
    {
        const bool branch_taken_0x4efea8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4efea8) {
            ctx->pc = 0x4EFEB8u;
            goto label_4efeb8;
        }
    }
    ctx->pc = 0x4EFEB0u;
    // 0x4efeb0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4EFEB0u;
    {
        const bool branch_taken_0x4efeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4efeb0) {
            ctx->pc = 0x4EFF54u;
            goto label_4eff54;
        }
    }
    ctx->pc = 0x4EFEB8u;
label_4efeb8:
    // 0x4efeb8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4efeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4efebc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4efebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x4efec0: 0xc462cb50  lwc1        $f2, -0x34B0($v1)
    ctx->pc = 0x4efec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4efec4: 0xc4a1cb54  lwc1        $f1, -0x34AC($a1)
    ctx->pc = 0x4efec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294953812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4efec8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4efec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4efecc: 0xc460cb58  lwc1        $f0, -0x34A8($v1)
    ctx->pc = 0x4efeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4efed0: 0xe4820050  swc1        $f2, 0x50($a0)
    ctx->pc = 0x4efed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4efed4: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x4efed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x4efed8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x4EFED8u;
    {
        const bool branch_taken_0x4efed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFED8u;
            // 0x4efedc: 0xe4800058  swc1        $f0, 0x58($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efed8) {
            ctx->pc = 0x4EFF54u;
            goto label_4eff54;
        }
    }
    ctx->pc = 0x4EFEE0u;
label_4efee0:
    // 0x4efee0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4efee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4efee4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4efee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x4efee8: 0xc462cb60  lwc1        $f2, -0x34A0($v1)
    ctx->pc = 0x4efee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4efeec: 0xc4a1cb64  lwc1        $f1, -0x349C($a1)
    ctx->pc = 0x4efeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294953828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4efef0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4efef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4efef4: 0xc460cb68  lwc1        $f0, -0x3498($v1)
    ctx->pc = 0x4efef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4efef8: 0xe4820050  swc1        $f2, 0x50($a0)
    ctx->pc = 0x4efef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4efefc: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x4efefcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x4eff00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4EFF00u;
    {
        const bool branch_taken_0x4eff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFF00u;
            // 0x4eff04: 0xe4800058  swc1        $f0, 0x58($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eff00) {
            ctx->pc = 0x4EFF54u;
            goto label_4eff54;
        }
    }
    ctx->pc = 0x4EFF08u;
label_4eff08:
    // 0x4eff08: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4eff08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4eff0c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4eff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x4eff10: 0xc462cb70  lwc1        $f2, -0x3490($v1)
    ctx->pc = 0x4eff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4eff14: 0xc4a1cb74  lwc1        $f1, -0x348C($a1)
    ctx->pc = 0x4eff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294953844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4eff18: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4eff18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4eff1c: 0xc460cb78  lwc1        $f0, -0x3488($v1)
    ctx->pc = 0x4eff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4eff20: 0xe4820050  swc1        $f2, 0x50($a0)
    ctx->pc = 0x4eff20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4eff24: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x4eff24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x4eff28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4EFF28u;
    {
        const bool branch_taken_0x4eff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFF28u;
            // 0x4eff2c: 0xe4800058  swc1        $f0, 0x58($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eff28) {
            ctx->pc = 0x4EFF54u;
            goto label_4eff54;
        }
    }
    ctx->pc = 0x4EFF30u;
label_4eff30:
    // 0x4eff30: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4eff30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4eff34: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4eff34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x4eff38: 0xc462cb80  lwc1        $f2, -0x3480($v1)
    ctx->pc = 0x4eff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4eff3c: 0xc4a1cb84  lwc1        $f1, -0x347C($a1)
    ctx->pc = 0x4eff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294953860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4eff40: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4eff40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4eff44: 0xc460cb88  lwc1        $f0, -0x3478($v1)
    ctx->pc = 0x4eff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4eff48: 0xe4820050  swc1        $f2, 0x50($a0)
    ctx->pc = 0x4eff48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x4eff4c: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x4eff4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x4eff50: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x4eff50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_4eff54:
    // 0x4eff54: 0x3e00008  jr          $ra
    ctx->pc = 0x4EFF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EFF5Cu;
    // 0x4eff5c: 0x0  nop
    ctx->pc = 0x4eff5cu;
    // NOP
    // 0x4eff60: 0x3e00008  jr          $ra
    ctx->pc = 0x4EFF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFF60u;
            // 0x4eff64: 0x2402082d  addiu       $v0, $zero, 0x82D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2093));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EFF68u;
    // 0x4eff68: 0x0  nop
    ctx->pc = 0x4eff68u;
    // NOP
    // 0x4eff6c: 0x0  nop
    ctx->pc = 0x4eff6cu;
    // NOP
    // 0x4eff70: 0x813bd78  j           func_4EF5E0
    ctx->pc = 0x4EFF70u;
    ctx->pc = 0x4EFF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFF70u;
            // 0x4eff74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EF5E0u;
    {
        auto targetFn = runtime->lookupFunction(0x4EF5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4EFF78u;
    // 0x4eff78: 0x0  nop
    ctx->pc = 0x4eff78u;
    // NOP
    // 0x4eff7c: 0x0  nop
    ctx->pc = 0x4eff7cu;
    // NOP
label_4eff80:
    // 0x4eff80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4eff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4eff84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4eff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4eff88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4eff8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4eff90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eff90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eff94: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4EFF94u;
    {
        const bool branch_taken_0x4eff94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFF94u;
            // 0x4eff98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eff94) {
            ctx->pc = 0x4EFFF0u;
            goto label_4efff0;
        }
    }
    ctx->pc = 0x4EFF9Cu;
    // 0x4eff9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4eff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4effa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4effa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4effa4: 0x24633eb0  addiu       $v1, $v1, 0x3EB0
    ctx->pc = 0x4effa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16048));
    // 0x4effa8: 0x24423ee8  addiu       $v0, $v0, 0x3EE8
    ctx->pc = 0x4effa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16104));
    // 0x4effac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4effacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4effb0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4EFFB0u;
    {
        const bool branch_taken_0x4effb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFFB0u;
            // 0x4effb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4effb0) {
            ctx->pc = 0x4EFFD8u;
            goto label_4effd8;
        }
    }
    ctx->pc = 0x4EFFB8u;
    // 0x4effb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4effb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4effbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4effbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4effc0: 0x24633f60  addiu       $v1, $v1, 0x3F60
    ctx->pc = 0x4effc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16224));
    // 0x4effc4: 0x24423f98  addiu       $v0, $v0, 0x3F98
    ctx->pc = 0x4effc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16280));
    // 0x4effc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4effc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4effcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4effccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4effd0: 0xc13c004  jal         func_4F0010
    ctx->pc = 0x4EFFD0u;
    SET_GPR_U32(ctx, 31, 0x4EFFD8u);
    ctx->pc = 0x4EFFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFFD0u;
            // 0x4effd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F0010u;
    if (runtime->hasFunction(0x4F0010u)) {
        auto targetFn = runtime->lookupFunction(0x4F0010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFFD8u; }
        if (ctx->pc != 0x4EFFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F0010_0x4f0010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFFD8u; }
        if (ctx->pc != 0x4EFFD8u) { return; }
    }
    ctx->pc = 0x4EFFD8u;
label_4effd8:
    // 0x4effd8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4effd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4effdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4effdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4effe0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EFFE0u;
    {
        const bool branch_taken_0x4effe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4effe0) {
            ctx->pc = 0x4EFFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFFE0u;
            // 0x4effe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EFFF4u;
            goto label_4efff4;
        }
    }
    ctx->pc = 0x4EFFE8u;
    // 0x4effe8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4EFFE8u;
    SET_GPR_U32(ctx, 31, 0x4EFFF0u);
    ctx->pc = 0x4EFFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EFFE8u;
            // 0x4effec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFFF0u; }
        if (ctx->pc != 0x4EFFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EFFF0u; }
        if (ctx->pc != 0x4EFFF0u) { return; }
    }
    ctx->pc = 0x4EFFF0u;
label_4efff0:
    // 0x4efff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4efff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4efff4:
    // 0x4efff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4efff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4efff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4efff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4efffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4efffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0000: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0000u;
            // 0x4f0004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0008u;
    // 0x4f0008: 0x0  nop
    ctx->pc = 0x4f0008u;
    // NOP
    // 0x4f000c: 0x0  nop
    ctx->pc = 0x4f000cu;
    // NOP
}
