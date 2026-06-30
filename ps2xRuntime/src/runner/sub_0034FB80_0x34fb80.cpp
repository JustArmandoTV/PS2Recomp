#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034FB80
// Address: 0x34fb80 - 0x34fc20
void sub_0034FB80_0x34fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FB80_0x34fb80");
#endif

    switch (ctx->pc) {
        case 0x34fb90u: goto label_34fb90;
        case 0x34fc0cu: goto label_34fc0c;
        default: break;
    }

    ctx->pc = 0x34fb80u;

    // 0x34fb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34fb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34fb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34fb88: 0xc04cc08  jal         func_133020
    ctx->pc = 0x34FB88u;
    SET_GPR_U32(ctx, 31, 0x34FB90u);
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB90u; }
        if (ctx->pc != 0x34FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB90u; }
        if (ctx->pc != 0x34FB90u) { return; }
    }
    ctx->pc = 0x34FB90u;
label_34fb90:
    // 0x34fb90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x34fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x34fb94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34fb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34fb98: 0x0  nop
    ctx->pc = 0x34fb98u;
    // NOP
    // 0x34fb9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34fb9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34fba0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34FBA0u;
    {
        const bool branch_taken_0x34fba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34FBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FBA0u;
            // 0x34fba4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fba0) {
            ctx->pc = 0x34FBACu;
            goto label_34fbac;
        }
    }
    ctx->pc = 0x34FBA8u;
    // 0x34fba8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34fba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34fbac:
    // 0x34fbac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34fbb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34fbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34fbb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34fbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34fbb8: 0x0  nop
    ctx->pc = 0x34fbb8u;
    // NOP
    // 0x34fbbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34fbbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34fbc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x34FBC0u;
    {
        const bool branch_taken_0x34fbc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34FBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FBC0u;
            // 0x34fbc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fbc0) {
            ctx->pc = 0x34FBCCu;
            goto label_34fbcc;
        }
    }
    ctx->pc = 0x34FBC8u;
    // 0x34fbc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34fbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34fbcc:
    // 0x34fbcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34fbd0: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x34fbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x34fbd4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x34fbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x34fbd8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34fbd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34fbdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x34fbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x34fbe0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34fbe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34fbe4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34fbe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34fbe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34fbe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fbec: 0x0  nop
    ctx->pc = 0x34fbecu;
    // NOP
    // 0x34fbf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34fbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34fbf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34fbf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34fbf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34fbf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fbfc: 0x0  nop
    ctx->pc = 0x34fbfcu;
    // NOP
    // 0x34fc00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34fc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34fc04: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x34FC04u;
    SET_GPR_U32(ctx, 31, 0x34FC0Cu);
    ctx->pc = 0x34FC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC04u;
            // 0x34fc08: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC0Cu; }
        if (ctx->pc != 0x34FC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC0Cu; }
        if (ctx->pc != 0x34FC0Cu) { return; }
    }
    ctx->pc = 0x34FC0Cu;
label_34fc0c:
    // 0x34fc0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34fc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fc10: 0x3e00008  jr          $ra
    ctx->pc = 0x34FC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC10u;
            // 0x34fc14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FC18u;
    // 0x34fc18: 0x0  nop
    ctx->pc = 0x34fc18u;
    // NOP
    // 0x34fc1c: 0x0  nop
    ctx->pc = 0x34fc1cu;
    // NOP
}
