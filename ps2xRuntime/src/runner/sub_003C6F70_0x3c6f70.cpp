#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C6F70
// Address: 0x3c6f70 - 0x3c7050
void sub_003C6F70_0x3c6f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6F70_0x3c6f70");
#endif

    switch (ctx->pc) {
        case 0x3c6f90u: goto label_3c6f90;
        case 0x3c6fbcu: goto label_3c6fbc;
        default: break;
    }

    ctx->pc = 0x3c6f70u;

    // 0x3c6f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c6f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c6f74: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3c6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3c6f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c6f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c6f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c6f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6f80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c6f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c6f84: 0x3445aeec  ori         $a1, $v0, 0xAEEC
    ctx->pc = 0x3c6f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44780);
    // 0x3c6f88: 0xc0ee760  jal         func_3B9D80
    ctx->pc = 0x3C6F88u;
    SET_GPR_U32(ctx, 31, 0x3C6F90u);
    ctx->pc = 0x3C6F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6F88u;
            // 0x3c6f8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6F90u; }
        if (ctx->pc != 0x3C6F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C6F90u; }
        if (ctx->pc != 0x3C6F90u) { return; }
    }
    ctx->pc = 0x3C6F90u;
label_3c6f90:
    // 0x3c6f90: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3c6f94: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x3c6f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x3c6f98: 0x24638db0  addiu       $v1, $v1, -0x7250
    ctx->pc = 0x3c6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938032));
    // 0x3c6f9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c6fa0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3c6fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3c6fa4: 0x2484a890  addiu       $a0, $a0, -0x5770
    ctx->pc = 0x3c6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944912));
    // 0x3c6fa8: 0xa600005c  sh          $zero, 0x5C($s0)
    ctx->pc = 0x3c6fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c6fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c6facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6fb0: 0x8c460eac  lw          $a2, 0xEAC($v0)
    ctx->pc = 0x3c6fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
    // 0x3c6fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c6fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6fb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3c6fbc:
    // 0x3c6fbc: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x3c6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x3c6fc0: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x3c6fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c6fc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c6fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3c6fc8: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x3c6fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x3c6fcc: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3c6fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c6fd0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C6FD0u;
    {
        const bool branch_taken_0x3c6fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6FD0u;
            // 0x3c6fd4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6fd0) {
            ctx->pc = 0x3C6FBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c6fbc;
        }
    }
    ctx->pc = 0x3C6FD8u;
    // 0x3c6fd8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3c6fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6fdc: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x3c6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x3c6fe0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3c6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3c6fe4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3c6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x3c6fe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c6fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6fec: 0x8cc40088  lw          $a0, 0x88($a2)
    ctx->pc = 0x3c6fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x3c6ff0: 0xa6040058  sh          $a0, 0x58($s0)
    ctx->pc = 0x3c6ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c6ff4: 0x8cc4008c  lw          $a0, 0x8C($a2)
    ctx->pc = 0x3c6ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x3c6ff8: 0xa604005a  sh          $a0, 0x5A($s0)
    ctx->pc = 0x3c6ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c6ffc: 0x8cc50088  lw          $a1, 0x88($a2)
    ctx->pc = 0x3c6ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
    // 0x3c7000: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x3c7000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x3c7004: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3c7004u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c7008: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c7008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c700c: 0x0  nop
    ctx->pc = 0x3c700cu;
    // NOP
    // 0x3c7010: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c7010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c7014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c7014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c7018: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c701c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c701cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c7020: 0x0  nop
    ctx->pc = 0x3c7020u;
    // NOP
    // 0x3c7024: 0xa604005e  sh          $a0, 0x5E($s0)
    ctx->pc = 0x3c7024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c7028: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x3c7028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x3c702c: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x3c702cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x3c7030: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x3c7030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x3c7034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c7034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c7038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c703c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C703Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C703Cu;
            // 0x3c7040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C7044u;
    // 0x3c7044: 0x0  nop
    ctx->pc = 0x3c7044u;
    // NOP
    // 0x3c7048: 0x0  nop
    ctx->pc = 0x3c7048u;
    // NOP
    // 0x3c704c: 0x0  nop
    ctx->pc = 0x3c704cu;
    // NOP
}
