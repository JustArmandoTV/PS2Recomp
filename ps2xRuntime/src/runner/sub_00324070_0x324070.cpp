#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324070
// Address: 0x324070 - 0x3240f0
void sub_00324070_0x324070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324070_0x324070");
#endif

    switch (ctx->pc) {
        case 0x3240dcu: goto label_3240dc;
        default: break;
    }

    ctx->pc = 0x324070u;

    // 0x324070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324074: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x324074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x324078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32407c: 0x8c66a140  lw          $a2, -0x5EC0($v1)
    ctx->pc = 0x32407cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
    // 0x324080: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x324080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324084: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x324084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x324088: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x324088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x32408c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x32408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x324090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324094: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x324094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x324098: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x324098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32409c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32409Cu;
    {
        const bool branch_taken_0x32409c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32409c) {
            ctx->pc = 0x3240A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32409Cu;
            // 0x3240a0: 0xc4810090  lwc1        $f1, 0x90($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3240ACu;
            goto label_3240ac;
        }
    }
    ctx->pc = 0x3240A4u;
    // 0x3240a4: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x3240a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x3240a8: 0xc4810090  lwc1        $f1, 0x90($a0)
    ctx->pc = 0x3240a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3240ac:
    // 0x3240ac: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x3240acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x3240b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3240b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3240b4: 0x0  nop
    ctx->pc = 0x3240b4u;
    // NOP
    // 0x3240b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3240b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3240bc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x3240BCu;
    {
        const bool branch_taken_0x3240bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3240bc) {
            ctx->pc = 0x3240C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3240BCu;
            // 0x3240c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3240E0u;
            goto label_3240e0;
        }
    }
    ctx->pc = 0x3240C4u;
    // 0x3240c4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3240c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3240c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3240c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3240cc: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x3240ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x3240d0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3240d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3240d4: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x3240D4u;
    SET_GPR_U32(ctx, 31, 0x3240DCu);
    ctx->pc = 0x3240D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3240D4u;
            // 0x3240d8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3240DCu; }
        if (ctx->pc != 0x3240DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3240DCu; }
        if (ctx->pc != 0x3240DCu) { return; }
    }
    ctx->pc = 0x3240DCu;
label_3240dc:
    // 0x3240dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3240dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3240e0:
    // 0x3240e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3240E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3240E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3240E0u;
            // 0x3240e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3240E8u;
    // 0x3240e8: 0x0  nop
    ctx->pc = 0x3240e8u;
    // NOP
    // 0x3240ec: 0x0  nop
    ctx->pc = 0x3240ecu;
    // NOP
}
