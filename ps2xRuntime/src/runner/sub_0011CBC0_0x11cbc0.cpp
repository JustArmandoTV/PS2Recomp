#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011CBC0
// Address: 0x11cbc0 - 0x11ceb8
void sub_0011CBC0_0x11cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CBC0_0x11cbc0");
#endif

    switch (ctx->pc) {
        case 0x11cc14u: goto label_11cc14;
        case 0x11cc30u: goto label_11cc30;
        case 0x11cc34u: goto label_11cc34;
        default: break;
    }

    ctx->pc = 0x11cbc0u;

    // 0x11cbc0: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11cbc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11cbc4: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11cbc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11cbc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cbcc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11cbccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11cbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cbd4: 0x3c0f317f  lui         $t7, 0x317F
    ctx->pc = 0x11cbd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12671 << 16));
    // 0x11cbd8: 0x16e6824  and         $t5, $t3, $t6
    ctx->pc = 0x11cbd8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
    // 0x11cbdc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11cbdcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11cbe0: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11cbe0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11cbe4: 0x15e00020  bnez        $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x11CBE4u;
    {
        const bool branch_taken_0x11cbe4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBE4u;
            // 0x11cbe8: 0x46006146  mov.s       $f5, $f12 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe4) {
            ctx->pc = 0x11CC68u;
            goto label_11cc68;
        }
    }
    ctx->pc = 0x11CBECu;
    // 0x11cbec: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11cbecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11cbf0: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x11cbf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11cbf4: 0x15e0001d  bnez        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x11CBF4u;
    {
        const bool branch_taken_0x11cbf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CBF4u;
            // 0x11cbf8: 0x3c0f3f2c  lui         $t7, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbf4) {
            ctx->pc = 0x11CC6Cu;
            goto label_11cc6c;
        }
    }
    ctx->pc = 0x11CBFCu;
    // 0x11cbfc: 0x248f0001  addiu       $t7, $a0, 0x1
    ctx->pc = 0x11cbfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11cc00: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x11cc00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x11cc04: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x11CC04u;
    {
        const bool branch_taken_0x11cc04 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC04u;
            // 0x11cc08: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc04) {
            ctx->pc = 0x11CC3Cu;
            goto label_11cc3c;
        }
    }
    ctx->pc = 0x11CC0Cu;
    // 0x11cc0c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x11CC0Cu;
    SET_GPR_U32(ctx, 31, 0x11CC14u);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC14u; }
        if (ctx->pc != 0x11CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC14u; }
        if (ctx->pc != 0x11CC14u) { return; }
    }
    ctx->pc = 0x11CC14u;
label_11cc14:
    // 0x11cc14: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x11cc14u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
    // 0x11cc18: 0x258cfecc  addiu       $t4, $t4, -0x134
    ctx->pc = 0x11cc18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966988));
    // 0x11cc1c: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x11cc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cc20: 0x0  nop
    ctx->pc = 0x11cc20u;
    // NOP
    // 0x11cc24: 0x0  nop
    ctx->pc = 0x11cc24u;
    // NOP
    // 0x11cc28: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11cc28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x11cc2c: 0x0  nop
    ctx->pc = 0x11cc2cu;
    // NOP
label_11cc30:
    // 0x11cc30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cc34:
    // 0x11cc34: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC34u;
            // 0x11cc38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CC3Cu;
label_11cc3c:
    // 0x11cc3c: 0x108f0008  beq         $a0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CC3Cu;
    {
        const bool branch_taken_0x11cc3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x11CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC3Cu;
            // 0x11cc40: 0x3c0d0063  lui         $t5, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc3c) {
            ctx->pc = 0x11CC60u;
            goto label_11cc60;
        }
    }
    ctx->pc = 0x11CC44u;
    // 0x11cc44: 0x25adfed0  addiu       $t5, $t5, -0x130
    ctx->pc = 0x11cc44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294966992));
    // 0x11cc48: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cc4c: 0x0  nop
    ctx->pc = 0x11cc4cu;
    // NOP
    // 0x11cc50: 0x0  nop
    ctx->pc = 0x11cc50u;
    // NOP
    // 0x11cc54: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x11cc54u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x11cc58: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11CC58u;
    {
        const bool branch_taken_0x11cc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC58u;
            // 0x11cc5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc58) {
            ctx->pc = 0x11CC34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cc34;
        }
    }
    ctx->pc = 0x11CC60u;
label_11cc60:
    // 0x11cc60: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11CC60u;
    {
        const bool branch_taken_0x11cc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC60u;
            // 0x11cc64: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc60) {
            ctx->pc = 0x11CC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cc30;
        }
    }
    ctx->pc = 0x11CC68u;
label_11cc68:
    // 0x11cc68: 0x3c0f3f2c  lui         $t7, 0x3F2C
    ctx->pc = 0x11cc68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16172 << 16));
label_11cc6c:
    // 0x11cc6c: 0x35efa13f  ori         $t7, $t7, 0xA13F
    ctx->pc = 0x11cc6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)41279);
    // 0x11cc70: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11cc70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11cc74: 0x51e0000f  beql        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11CC74u;
    {
        const bool branch_taken_0x11cc74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cc74) {
            ctx->pc = 0x11CC78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC74u;
            // 0x11cc78: 0x46052802  mul.s       $f0, $f5, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CCB4u;
            goto label_11ccb4;
        }
    }
    ctx->pc = 0x11CC7Cu;
    // 0x11cc7c: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CC7Cu;
    {
        const bool branch_taken_0x11cc7c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x11CC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CC7Cu;
            // 0x11cc80: 0x3c0e0063  lui         $t6, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc7c) {
            ctx->pc = 0x11CC8Cu;
            goto label_11cc8c;
        }
    }
    ctx->pc = 0x11CC84u;
    // 0x11cc84: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x11cc84u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x11cc88: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x11cc88u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_11cc8c:
    // 0x11cc8c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11cc8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11cc90: 0x25cefed4  addiu       $t6, $t6, -0x12C
    ctx->pc = 0x11cc90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966996));
    // 0x11cc94: 0x25effed8  addiu       $t7, $t7, -0x128
    ctx->pc = 0x11cc94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967000));
    // 0x11cc98: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cc9c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cca0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x11cca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x11cca4: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x11cca4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x11cca8: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x11cca8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ccac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11ccacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11ccb0: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x11ccb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_11ccb4:
    // 0x11ccb4: 0x3c0f3f2c  lui         $t7, 0x3F2C
    ctx->pc = 0x11ccb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16172 << 16));
    // 0x11ccb8: 0x35efa13f  ori         $t7, $t7, 0xA13F
    ctx->pc = 0x11ccb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)41279);
    // 0x11ccbc: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11ccbcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11ccc0: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11ccc0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11ccc4: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x11ccc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11ccc8: 0x25adfedc  addiu       $t5, $t5, -0x124
    ctx->pc = 0x11ccc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967004));
    // 0x11cccc: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x11ccccu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ccd0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x11ccd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11ccd4: 0x46050902  mul.s       $f4, $f1, $f5
    ctx->pc = 0x11ccd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x11ccd8: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11ccd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11ccdc: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cce0: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11cce0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cce4: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cce4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cce8: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11cce8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ccec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11ccecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11ccf0: 0x25adfee0  addiu       $t5, $t5, -0x120
    ctx->pc = 0x11ccf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967008));
    // 0x11ccf4: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ccf8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11ccf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11ccfc: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11ccfcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cd00: 0x25adfee4  addiu       $t5, $t5, -0x11C
    ctx->pc = 0x11cd00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967012));
    // 0x11cd04: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cd08: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cd08u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cd0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11cd0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11cd10: 0x25adfee8  addiu       $t5, $t5, -0x118
    ctx->pc = 0x11cd10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967016));
    // 0x11cd14: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cd18: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11cd18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11cd1c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cd1cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cd20: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11cd20u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cd24: 0x25adfeec  addiu       $t5, $t5, -0x114
    ctx->pc = 0x11cd24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967020));
    // 0x11cd28: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11cd28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11cd2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11cd2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11cd30: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11cd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cd34: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cd34u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cd38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11cd38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11cd3c: 0x25adfef0  addiu       $t5, $t5, -0x110
    ctx->pc = 0x11cd3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967024));
    // 0x11cd40: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cd44: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11cd44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11cd48: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cd48u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cd4c: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11cd4cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cd50: 0x25adfef4  addiu       $t5, $t5, -0x10C
    ctx->pc = 0x11cd50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967028));
    // 0x11cd54: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11cd54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11cd58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11cd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11cd5c: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11cd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cd60: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cd60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cd64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11cd64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11cd68: 0x25adfef8  addiu       $t5, $t5, -0x108
    ctx->pc = 0x11cd68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967032));
    // 0x11cd6c: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cd70: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11cd70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11cd74: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cd74u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cd78: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11cd78u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cd7c: 0x25adfefc  addiu       $t5, $t5, -0x104
    ctx->pc = 0x11cd7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967036));
    // 0x11cd80: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11cd80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11cd84: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11cd84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11cd88: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cd8c: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cd90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11cd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11cd94: 0x25adff00  addiu       $t5, $t5, -0x100
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967040));
    // 0x11cd98: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cd9c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11cd9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11cda0: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x11cda0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x11cda4: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11cda4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cda8: 0x25adff04  addiu       $t5, $t5, -0xFC
    ctx->pc = 0x11cda8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967044));
    // 0x11cdac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11cdacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11cdb0: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x11cdb0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x11cdb4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11cdb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11cdb8: 0x25ceff08  addiu       $t6, $t6, -0xF8
    ctx->pc = 0x11cdb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967048));
    // 0x11cdbc: 0xc5c30000  lwc1        $f3, 0x0($t6)
    ctx->pc = 0x11cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11cdc0: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11cdc4: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x11cdc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11cdc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11cdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11cdcc: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x11cdccu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cdd0: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x11cdd0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
    // 0x11cdd4: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x11cdd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x11cdd8: 0x258cff0c  addiu       $t4, $t4, -0xF4
    ctx->pc = 0x11cdd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967052));
    // 0x11cddc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11cddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11cde0: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x11cde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x11cde4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11cde4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11cde8: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x11cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cdec: 0x46006818  adda.s      $f13, $f0
    ctx->pc = 0x11cdecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x11cdf0: 0x460120dc  madd.s      $f3, $f4, $f1
    ctx->pc = 0x11cdf0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x11cdf4: 0x46032800  add.s       $f0, $f5, $f3
    ctx->pc = 0x11cdf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x11cdf8: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x11CDF8u;
    {
        const bool branch_taken_0x11cdf8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CDF8u;
            // 0x11cdfc: 0x440e0000  mfc1        $t6, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdf8) {
            ctx->pc = 0x11CE50u;
            goto label_11ce50;
        }
    }
    ctx->pc = 0x11CE00u;
    // 0x11ce00: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11ce00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ce04: 0xb7783  sra         $t6, $t3, 30
    ctx->pc = 0x11ce04u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 11), 30));
    // 0x11ce08: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11ce08u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x11ce0c: 0x31ce0002  andi        $t6, $t6, 0x2
    ctx->pc = 0x11ce0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x11ce10: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x11ce10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x11ce14: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ce18: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x11ce1c: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x11ce1cu;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ce20: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x11ce20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11ce24: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x11ce24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x11ce28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11ce28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11ce2c: 0x0  nop
    ctx->pc = 0x11ce2cu;
    // NOP
    // 0x11ce30: 0x0  nop
    ctx->pc = 0x11ce30u;
    // NOP
    // 0x11ce34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11ce34u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x11ce38: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11ce38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11ce3c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x11ce3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x11ce40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11ce40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11ce44: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11ce44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11ce48: 0x1000ff79  b           . + 4 + (-0x87 << 2)
    ctx->pc = 0x11CE48u;
    {
        const bool branch_taken_0x11ce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE48u;
            // 0x11ce4c: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce48) {
            ctx->pc = 0x11CC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cc30;
        }
    }
    ctx->pc = 0x11CE50u;
label_11ce50:
    // 0x11ce50: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11ce50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ce54: 0x108fff76  beq         $a0, $t7, . + 4 + (-0x8A << 2)
    ctx->pc = 0x11CE54u;
    {
        const bool branch_taken_0x11ce54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x11CE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE54u;
            // 0x11ce58: 0x3c0c0063  lui         $t4, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce54) {
            ctx->pc = 0x11CC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cc30;
        }
    }
    ctx->pc = 0x11CE5Cu;
    // 0x11ce5c: 0x240df000  addiu       $t5, $zero, -0x1000
    ctx->pc = 0x11ce5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11ce60: 0x258cfed0  addiu       $t4, $t4, -0x130
    ctx->pc = 0x11ce60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966992));
    // 0x11ce64: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x11ce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ce68: 0x0  nop
    ctx->pc = 0x11ce68u;
    // NOP
    // 0x11ce6c: 0x0  nop
    ctx->pc = 0x11ce6cu;
    // NOP
    // 0x11ce70: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x11ce70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x11ce74: 0x1cd6024  and         $t4, $t6, $t5
    ctx->pc = 0x11ce74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x11ce78: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x11ce78u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ce7c: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x11ce7cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
    // 0x11ce80: 0x258cfecc  addiu       $t4, $t4, -0x134
    ctx->pc = 0x11ce80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966988));
    // 0x11ce84: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x11ce84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x11ce88: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x11ce88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ce8c: 0x1ed7024  and         $t6, $t7, $t5
    ctx->pc = 0x11ce8cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ce90: 0x46001b01  sub.s       $f12, $f3, $f0
    ctx->pc = 0x11ce90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x11ce94: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x11ce94u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ce98: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x11ce98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ce9c: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x11ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cea0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x11cea0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x11cea4: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x11cea4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cea8: 0x460c005c  madd.s      $f1, $f0, $f12
    ctx->pc = 0x11cea8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[12]));
    // 0x11ceac: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x11ceacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11ceb0: 0x1000ff5f  b           . + 4 + (-0xA1 << 2)
    ctx->pc = 0x11CEB0u;
    {
        const bool branch_taken_0x11ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEB0u;
            // 0x11ceb4: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ceb0) {
            ctx->pc = 0x11CC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cc30;
        }
    }
    ctx->pc = 0x11CEB8u;
}
