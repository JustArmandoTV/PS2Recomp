#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F62E0
// Address: 0x3f62e0 - 0x3f63a0
void sub_003F62E0_0x3f62e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F62E0_0x3f62e0");
#endif

    switch (ctx->pc) {
        case 0x3f630cu: goto label_3f630c;
        default: break;
    }

    ctx->pc = 0x3f62e0u;

    // 0x3f62e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f62e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f62e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3f62e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3f62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3f62ec: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x3f62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x3f62f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f62f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f62f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f62f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f62fc: 0x24850090  addiu       $a1, $a0, 0x90
    ctx->pc = 0x3f62fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x3f6300: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f6300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f6304: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3F6304u;
    SET_GPR_U32(ctx, 31, 0x3F630Cu);
    ctx->pc = 0x3F6308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6304u;
            // 0x3f6308: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F630Cu; }
        if (ctx->pc != 0x3F630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F630Cu; }
        if (ctx->pc != 0x3F630Cu) { return; }
    }
    ctx->pc = 0x3F630Cu;
label_3f630c:
    // 0x3f630c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3f630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f6310: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f6310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3f6314: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f6314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f6318: 0x0  nop
    ctx->pc = 0x3f6318u;
    // NOP
    // 0x3f631c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3f631cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f6320: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x3F6320u;
    {
        const bool branch_taken_0x3f6320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6320) {
            ctx->pc = 0x3F6324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6320u;
            // 0x3f6324: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6384u;
            goto label_3f6384;
        }
    }
    ctx->pc = 0x3F6328u;
    // 0x3f6328: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3f6328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3f632c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f632cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f6330: 0x0  nop
    ctx->pc = 0x3f6330u;
    // NOP
    // 0x3f6334: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f6334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f6338: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x3F6338u;
    {
        const bool branch_taken_0x3f6338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6338) {
            ctx->pc = 0x3F6380u;
            goto label_3f6380;
        }
    }
    ctx->pc = 0x3F6340u;
    // 0x3f6340: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3f6340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f6344: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3f6344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f6348: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3F6348u;
    {
        const bool branch_taken_0x3f6348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6348) {
            ctx->pc = 0x3F6380u;
            goto label_3f6380;
        }
    }
    ctx->pc = 0x3F6350u;
    // 0x3f6350: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f6350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f6354: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x3F6354u;
    {
        const bool branch_taken_0x3f6354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6354) {
            ctx->pc = 0x3F6380u;
            goto label_3f6380;
        }
    }
    ctx->pc = 0x3F635Cu;
    // 0x3f635c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3f635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f6360: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3f6360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f6364: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6364u;
    {
        const bool branch_taken_0x3f6364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6364) {
            ctx->pc = 0x3F6380u;
            goto label_3f6380;
        }
    }
    ctx->pc = 0x3F636Cu;
    // 0x3f636c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f636cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f6370: 0x0  nop
    ctx->pc = 0x3f6370u;
    // NOP
    // 0x3f6374: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f6374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f6378: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6378u;
    {
        const bool branch_taken_0x3f6378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6378) {
            ctx->pc = 0x3F6388u;
            goto label_3f6388;
        }
    }
    ctx->pc = 0x3F6380u;
label_3f6380:
    // 0x3f6380: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3f6380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3f6384:
    // 0x3f6384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6388:
    // 0x3f6388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f6388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f638c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F638Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F638Cu;
            // 0x3f6390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F6394u;
    // 0x3f6394: 0x0  nop
    ctx->pc = 0x3f6394u;
    // NOP
    // 0x3f6398: 0x0  nop
    ctx->pc = 0x3f6398u;
    // NOP
    // 0x3f639c: 0x0  nop
    ctx->pc = 0x3f639cu;
    // NOP
}
