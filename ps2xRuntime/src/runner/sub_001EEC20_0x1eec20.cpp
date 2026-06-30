#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEC20
// Address: 0x1eec20 - 0x1eed90
void sub_001EEC20_0x1eec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEC20_0x1eec20");
#endif

    switch (ctx->pc) {
        case 0x1eeca8u: goto label_1eeca8;
        case 0x1eecccu: goto label_1eeccc;
        case 0x1eece4u: goto label_1eece4;
        case 0x1eed0cu: goto label_1eed0c;
        case 0x1eed34u: goto label_1eed34;
        default: break;
    }

    ctx->pc = 0x1eec20u;

    // 0x1eec20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1eec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1eec24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eec24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1eec28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1eec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1eec2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1eec30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eec34: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1eec34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x1eec38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eec3c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1eec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1eec40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eec44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1eec44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eec4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1eec4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eec54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1eec54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eec58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1eec58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1eec5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1eec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1eec60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eec64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eec64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1eec68: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1eec68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eec6c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1eec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1eec70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1eec70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1eec74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1eec74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1eec78: 0x2463da20  addiu       $v1, $v1, -0x25E0
    ctx->pc = 0x1eec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957600));
    // 0x1eec7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1eec80: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1eec80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x1eec84: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x1eec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
    // 0x1eec88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1eec88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1eec8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1eec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1eec90: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x1eec90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eec94: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x1eec94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1eec98: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1eec98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1eec9c: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1eeca0: 0xc0a45a0  jal         func_291680
    ctx->pc = 0x1EECA0u;
    SET_GPR_U32(ctx, 31, 0x1EECA8u);
    ctx->pc = 0x1EECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECA0u;
            // 0x1eeca4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECA8u; }
        if (ctx->pc != 0x1EECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECA8u; }
        if (ctx->pc != 0x1EECA8u) { return; }
    }
    ctx->pc = 0x1EECA8u;
label_1eeca8:
    // 0x1eeca8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1eeca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eecac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1eecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eecb0: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EECB0u;
    {
        const bool branch_taken_0x1eecb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eecb0) {
            ctx->pc = 0x1EECB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECB0u;
            // 0x1eecb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EECD4u;
            goto label_1eecd4;
        }
    }
    ctx->pc = 0x1EECB8u;
    // 0x1eecb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eecb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eecbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eecc0: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x1eecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1eecc4: 0xc09978c  jal         func_265E30
    ctx->pc = 0x1EECC4u;
    SET_GPR_U32(ctx, 31, 0x1EECCCu);
    ctx->pc = 0x1EECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECC4u;
            // 0x1eecc8: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265E30u;
    if (runtime->hasFunction(0x265E30u)) {
        auto targetFn = runtime->lookupFunction(0x265E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECCCu; }
        if (ctx->pc != 0x1EECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265E30_0x265e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECCCu; }
        if (ctx->pc != 0x1EECCCu) { return; }
    }
    ctx->pc = 0x1EECCCu;
label_1eeccc:
    // 0x1eeccc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EECCCu;
    {
        const bool branch_taken_0x1eeccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECCCu;
            // 0x1eecd0: 0xae80002c  sw          $zero, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eeccc) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECD4u;
label_1eecd4:
    // 0x1eecd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eecd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eecd8: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x1eecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x1eecdc: 0xc099878  jal         func_2661E0
    ctx->pc = 0x1EECDCu;
    SET_GPR_U32(ctx, 31, 0x1EECE4u);
    ctx->pc = 0x1EECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EECDCu;
            // 0x1eece0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2661E0u;
    if (runtime->hasFunction(0x2661E0u)) {
        auto targetFn = runtime->lookupFunction(0x2661E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECE4u; }
        if (ctx->pc != 0x1EECE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002661E0_0x2661e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECE4u; }
        if (ctx->pc != 0x1EECE4u) { return; }
    }
    ctx->pc = 0x1EECE4u;
label_1eece4:
    // 0x1eece4: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x1eece4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_1eece8:
    // 0x1eece8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1eece8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1eecec: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x1eececu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x1eecf0: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x1eecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x1eecf4: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x1eecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x1eecf8: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x1eecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x1eecfc: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1eecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1eed00: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1eed04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EED04u;
    {
        const bool branch_taken_0x1eed04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eed04) {
            ctx->pc = 0x1EED28u;
            goto label_1eed28;
        }
    }
    ctx->pc = 0x1EED0Cu;
label_1eed0c:
    // 0x1eed0c: 0x8e73000c  lw          $s3, 0xC($s3)
    ctx->pc = 0x1eed0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1eed10: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1eed10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1eed14: 0x0  nop
    ctx->pc = 0x1eed14u;
    // NOP
    // 0x1eed18: 0x0  nop
    ctx->pc = 0x1eed18u;
    // NOP
    // 0x1eed1c: 0x0  nop
    ctx->pc = 0x1eed1cu;
    // NOP
    // 0x1eed20: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EED20u;
    {
        const bool branch_taken_0x1eed20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eed20) {
            ctx->pc = 0x1EED0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eed0c;
        }
    }
    ctx->pc = 0x1EED28u;
label_1eed28:
    // 0x1eed28: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1eed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1eed2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EED2Cu;
    {
        const bool branch_taken_0x1eed2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED2Cu;
            // 0x1eed30: 0xc6610020  lwc1        $f1, 0x20($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed2c) {
            ctx->pc = 0x1EED50u;
            goto label_1eed50;
        }
    }
    ctx->pc = 0x1EED34u;
label_1eed34:
    // 0x1eed34: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x1eed34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1eed38: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1eed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1eed3c: 0x0  nop
    ctx->pc = 0x1eed3cu;
    // NOP
    // 0x1eed40: 0x0  nop
    ctx->pc = 0x1eed40u;
    // NOP
    // 0x1eed44: 0x0  nop
    ctx->pc = 0x1eed44u;
    // NOP
    // 0x1eed48: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EED48u;
    {
        const bool branch_taken_0x1eed48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eed48) {
            ctx->pc = 0x1EED34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eed34;
        }
    }
    ctx->pc = 0x1EED50u;
label_1eed50:
    // 0x1eed50: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1eed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eed54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eed54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eed58: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EED58u;
    {
        const bool branch_taken_0x1eed58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eed58) {
            ctx->pc = 0x1EED5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED58u;
            // 0x1eed5c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EED60u;
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EED60u;
label_1eed60:
    // 0x1eed60: 0xe681001c  swc1        $f1, 0x1C($s4)
    ctx->pc = 0x1eed60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x1eed64: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1eed64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1eed68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eed6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eed6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eed70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eed70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eed74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eed74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eed78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eed78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eed7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eed7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eed80: 0x3e00008  jr          $ra
    ctx->pc = 0x1EED80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED80u;
            // 0x1eed84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EED88u;
    // 0x1eed88: 0x0  nop
    ctx->pc = 0x1eed88u;
    // NOP
    // 0x1eed8c: 0x0  nop
    ctx->pc = 0x1eed8cu;
    // NOP
}
