#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304F90
// Address: 0x304f90 - 0x305060
void sub_00304F90_0x304f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304F90_0x304f90");
#endif

    switch (ctx->pc) {
        case 0x305020u: goto label_305020;
        case 0x305048u: goto label_305048;
        default: break;
    }

    ctx->pc = 0x304f90u;

    // 0x304f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304f94: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x304f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x304f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x304fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304fa4: 0x8c840d60  lw          $a0, 0xD60($a0)
    ctx->pc = 0x304fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x304fa8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x304fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x304fac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x304facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x304fb0: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x304FB0u;
    {
        const bool branch_taken_0x304fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304fb0) {
            ctx->pc = 0x304FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304FB0u;
            // 0x304fb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30504Cu;
            goto label_30504c;
        }
    }
    ctx->pc = 0x304FB8u;
    // 0x304fb8: 0xc6010a94  lwc1        $f1, 0xA94($s0)
    ctx->pc = 0x304fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304fbc: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x304fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x304fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x304fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304fc4: 0x0  nop
    ctx->pc = 0x304fc4u;
    // NOP
    // 0x304fc8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x304fc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304fcc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x304FCCu;
    {
        const bool branch_taken_0x304fcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x304FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304FCCu;
            // 0x304fd0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304fcc) {
            ctx->pc = 0x304FD8u;
            goto label_304fd8;
        }
    }
    ctx->pc = 0x304FD4u;
    // 0x304fd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x304fd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304fd8:
    // 0x304fd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x304FD8u;
    {
        const bool branch_taken_0x304fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304fd8) {
            ctx->pc = 0x304FE8u;
            goto label_304fe8;
        }
    }
    ctx->pc = 0x304FE0u;
    // 0x304fe0: 0x90830050  lbu         $v1, 0x50($a0)
    ctx->pc = 0x304fe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x304fe4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x304fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_304fe8:
    // 0x304fe8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x304FE8u;
    {
        const bool branch_taken_0x304fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304fe8) {
            ctx->pc = 0x305048u;
            goto label_305048;
        }
    }
    ctx->pc = 0x304FF0u;
    // 0x304ff0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x304ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x304ff4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x304ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x304ff8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x304ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x304ffc: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x304ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x305000: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x305000u;
    {
        const bool branch_taken_0x305000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x305000) {
            ctx->pc = 0x305048u;
            goto label_305048;
        }
    }
    ctx->pc = 0x305008u;
    // 0x305008: 0x8e020a78  lw          $v0, 0xA78($s0)
    ctx->pc = 0x305008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2680)));
    // 0x30500c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x305010: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x305010u;
    {
        const bool branch_taken_0x305010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305010) {
            ctx->pc = 0x305014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305010u;
            // 0x305014: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305034u;
            goto label_305034;
        }
    }
    ctx->pc = 0x305018u;
    // 0x305018: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x305018u;
    SET_GPR_U32(ctx, 31, 0x305020u);
    ctx->pc = 0x30501Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305018u;
            // 0x30501c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305020u; }
        if (ctx->pc != 0x305020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305020u; }
        if (ctx->pc != 0x305020u) { return; }
    }
    ctx->pc = 0x305020u;
label_305020:
    // 0x305020: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x305020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x305024: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x305024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x305028: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x305028u;
    {
        const bool branch_taken_0x305028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305028) {
            ctx->pc = 0x305048u;
            goto label_305048;
        }
    }
    ctx->pc = 0x305030u;
    // 0x305030: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x305030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_305034:
    // 0x305034: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x305034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x305038: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30503c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30503cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305040: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x305040u;
    SET_GPR_U32(ctx, 31, 0x305048u);
    ctx->pc = 0x305044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305040u;
            // 0x305044: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305048u; }
        if (ctx->pc != 0x305048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305048u; }
        if (ctx->pc != 0x305048u) { return; }
    }
    ctx->pc = 0x305048u;
label_305048:
    // 0x305048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30504c:
    // 0x30504c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30504cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305050: 0x3e00008  jr          $ra
    ctx->pc = 0x305050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305050u;
            // 0x305054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305058u;
    // 0x305058: 0x0  nop
    ctx->pc = 0x305058u;
    // NOP
    // 0x30505c: 0x0  nop
    ctx->pc = 0x30505cu;
    // NOP
}
