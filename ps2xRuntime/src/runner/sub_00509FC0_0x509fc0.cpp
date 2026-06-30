#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509FC0
// Address: 0x509fc0 - 0x50a0c0
void sub_00509FC0_0x509fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509FC0_0x509fc0");
#endif

    ctx->pc = 0x509fc0u;

    // 0x509fc0: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x509fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x509fc4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x509FC4u;
    {
        const bool branch_taken_0x509fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x509fc4) {
            ctx->pc = 0x509FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509FC4u;
            // 0x509fc8: 0x8ca60064  lw          $a2, 0x64($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509FD8u;
            goto label_509fd8;
        }
    }
    ctx->pc = 0x509FCCu;
    // 0x509fcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x509fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x509fd0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x509FD0u;
    {
        const bool branch_taken_0x509fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509FD0u;
            // 0x509fd4: 0xaca30070  sw          $v1, 0x70($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509fd0) {
            ctx->pc = 0x50A0B8u;
            goto label_50a0b8;
        }
    }
    ctx->pc = 0x509FD8u;
label_509fd8:
    // 0x509fd8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x509fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x509fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x509fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x509fe0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x509fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x509fe4: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x509fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x509fe8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x509fe8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x509fec: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x509fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x509ff0: 0x24841ae0  addiu       $a0, $a0, 0x1AE0
    ctx->pc = 0x509ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    // 0x509ff4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x509ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x509ff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x509ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x509ffc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x509FFCu;
    {
        const bool branch_taken_0x509ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x50A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509FFCu;
            // 0x50a000: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509ffc) {
            ctx->pc = 0x50A00Cu;
            goto label_50a00c;
        }
    }
    ctx->pc = 0x50A004u;
    // 0x50a004: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x50A004u;
    {
        const bool branch_taken_0x50a004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A004u;
            // 0x50a008: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a004) {
            ctx->pc = 0x50A048u;
            goto label_50a048;
        }
    }
    ctx->pc = 0x50A00Cu;
label_50a00c:
    // 0x50a00c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x50a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50a010: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x50a010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50a014: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x50A014u;
    {
        const bool branch_taken_0x50a014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a014) {
            ctx->pc = 0x50A018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A014u;
            // 0x50a018: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A024u;
            goto label_50a024;
        }
    }
    ctx->pc = 0x50A01Cu;
    // 0x50a01c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x50A01Cu;
    {
        const bool branch_taken_0x50a01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A01Cu;
            // 0x50a020: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a01c) {
            ctx->pc = 0x50A048u;
            goto label_50a048;
        }
    }
    ctx->pc = 0x50A024u;
label_50a024:
    // 0x50a024: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x50a024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50a028: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x50A028u;
    {
        const bool branch_taken_0x50a028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a028) {
            ctx->pc = 0x50A02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A028u;
            // 0x50a02c: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A038u;
            goto label_50a038;
        }
    }
    ctx->pc = 0x50A030u;
    // 0x50a030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x50A030u;
    {
        const bool branch_taken_0x50a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A030u;
            // 0x50a034: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a030) {
            ctx->pc = 0x50A048u;
            goto label_50a048;
        }
    }
    ctx->pc = 0x50A038u;
label_50a038:
    // 0x50a038: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x50a038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50a03c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x50A03Cu;
    {
        const bool branch_taken_0x50a03c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a03c) {
            ctx->pc = 0x50A040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A03Cu;
            // 0x50a040: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A048u;
            goto label_50a048;
        }
    }
    ctx->pc = 0x50A044u;
    // 0x50a044: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x50a044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50a048:
    // 0x50a048: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50a048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x50a04c: 0x1503000c  bne         $t0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x50A04Cu;
    {
        const bool branch_taken_0x50a04c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x50A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A04Cu;
            // 0x50a050: 0xaca8006c  sw          $t0, 0x6C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a04c) {
            ctx->pc = 0x50A080u;
            goto label_50a080;
        }
    }
    ctx->pc = 0x50A054u;
    // 0x50a054: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x50a054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x50a058: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x50a058u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x50a05c: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x50a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x50a060: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x50a064: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x50a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50a068: 0xc4e00dec  lwc1        $f0, 0xDEC($a3)
    ctx->pc = 0x50a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50a06c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x50a06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50a070: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x50A070u;
    {
        const bool branch_taken_0x50a070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a070) {
            ctx->pc = 0x50A074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50A070u;
            // 0x50a074: 0xaca80070  sw          $t0, 0x70($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50A0B8u;
            goto label_50a0b8;
        }
    }
    ctx->pc = 0x50A078u;
    // 0x50a078: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x50A078u;
    {
        const bool branch_taken_0x50a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50A078u;
            // 0x50a07c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a078) {
            ctx->pc = 0x50A0B4u;
            goto label_50a0b4;
        }
    }
    ctx->pc = 0x50A080u;
label_50a080:
    // 0x50a080: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x50a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50a084: 0x1503000b  bne         $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x50A084u;
    {
        const bool branch_taken_0x50a084 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x50a084) {
            ctx->pc = 0x50A0B4u;
            goto label_50a0b4;
        }
    }
    ctx->pc = 0x50A08Cu;
    // 0x50a08c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x50a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x50a090: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x50a090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x50a094: 0x24630870  addiu       $v1, $v1, 0x870
    ctx->pc = 0x50a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2160));
    // 0x50a098: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x50a09c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x50a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50a0a0: 0xc4e00dec  lwc1        $f0, 0xDEC($a3)
    ctx->pc = 0x50a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50a0a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x50a0a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50a0a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x50A0A8u;
    {
        const bool branch_taken_0x50a0a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50a0a8) {
            ctx->pc = 0x50A0B4u;
            goto label_50a0b4;
        }
    }
    ctx->pc = 0x50A0B0u;
    // 0x50a0b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x50a0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_50a0b4:
    // 0x50a0b4: 0xaca80070  sw          $t0, 0x70($a1)
    ctx->pc = 0x50a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 8));
label_50a0b8:
    // 0x50a0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x50A0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50A0C0u;
}
