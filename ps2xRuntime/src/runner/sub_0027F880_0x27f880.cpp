#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F880
// Address: 0x27f880 - 0x27f970
void sub_0027F880_0x27f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F880_0x27f880");
#endif

    switch (ctx->pc) {
        case 0x27f8b8u: goto label_27f8b8;
        case 0x27f930u: goto label_27f930;
        default: break;
    }

    ctx->pc = 0x27f880u;

    // 0x27f880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27f884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27f888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27f88c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27f890: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27f890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f898: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27f898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f8a0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x27f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27f8a4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27f8a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f8a8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x27F8A8u;
    {
        const bool branch_taken_0x27f8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8A8u;
            // 0x27f8ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8a8) {
            ctx->pc = 0x27F948u;
            goto label_27f948;
        }
    }
    ctx->pc = 0x27F8B0u;
    // 0x27f8b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27f8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f8b4: 0x0  nop
    ctx->pc = 0x27f8b4u;
    // NOP
label_27f8b8:
    // 0x27f8b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x27f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27f8bc: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x27f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x27f8c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27f8c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x27f8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f8c8: 0x8cc30068  lw          $v1, 0x68($a2)
    ctx->pc = 0x27f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x27f8cc: 0xc4c00180  lwc1        $f0, 0x180($a2)
    ctx->pc = 0x27f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f8d0: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x27f8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27f8d4: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x27f8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x27f8d8: 0xc4c00184  lwc1        $f0, 0x184($a2)
    ctx->pc = 0x27f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f8dc: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x27f8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x27f8e0: 0xc4c00188  lwc1        $f0, 0x188($a2)
    ctx->pc = 0x27f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f8e4: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x27f8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x27f8e8: 0xc4c0018c  lwc1        $f0, 0x18C($a2)
    ctx->pc = 0x27f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f8ec: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x27f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x27f8f0: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x27f8f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x27f8f4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27F8F4u;
    {
        const bool branch_taken_0x27f8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8F4u;
            // 0x27f8f8: 0x24c500a0  addiu       $a1, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8f4) {
            ctx->pc = 0x27F920u;
            goto label_27f920;
        }
    }
    ctx->pc = 0x27F8FCu;
    // 0x27f8fc: 0xc4a000f0  lwc1        $f0, 0xF0($a1)
    ctx->pc = 0x27f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f900: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x27f900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x27f904: 0xc4a000f4  lwc1        $f0, 0xF4($a1)
    ctx->pc = 0x27f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f908: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x27f908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x27f90c: 0xc4a000f8  lwc1        $f0, 0xF8($a1)
    ctx->pc = 0x27f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f910: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x27f910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x27f914: 0xc4a000fc  lwc1        $f0, 0xFC($a1)
    ctx->pc = 0x27f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27F918u;
    {
        const bool branch_taken_0x27f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F918u;
            // 0x27f91c: 0xe4e0002c  swc1        $f0, 0x2C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f918) {
            ctx->pc = 0x27F930u;
            goto label_27f930;
        }
    }
    ctx->pc = 0x27F920u;
label_27f920:
    // 0x27f920: 0x24a600f0  addiu       $a2, $a1, 0xF0
    ctx->pc = 0x27f920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x27f924: 0x24e40020  addiu       $a0, $a3, 0x20
    ctx->pc = 0x27f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x27f928: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x27F928u;
    SET_GPR_U32(ctx, 31, 0x27F930u);
    ctx->pc = 0x27F92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F928u;
            // 0x27f92c: 0x24e50050  addiu       $a1, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F930u; }
        if (ctx->pc != 0x27F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F930u; }
        if (ctx->pc != 0x27F930u) { return; }
    }
    ctx->pc = 0x27F930u;
label_27f930:
    // 0x27f930: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x27f930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27f934: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27f934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27f938: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x27f938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f93c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x27F93Cu;
    {
        const bool branch_taken_0x27f93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F93Cu;
            // 0x27f940: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f93c) {
            ctx->pc = 0x27F8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f8b8;
        }
    }
    ctx->pc = 0x27F944u;
    // 0x27f944: 0x0  nop
    ctx->pc = 0x27f944u;
    // NOP
label_27f948:
    // 0x27f948: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27f948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f94c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f95c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F95Cu;
            // 0x27f960: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F964u;
    // 0x27f964: 0x0  nop
    ctx->pc = 0x27f964u;
    // NOP
    // 0x27f968: 0x0  nop
    ctx->pc = 0x27f968u;
    // NOP
    // 0x27f96c: 0x0  nop
    ctx->pc = 0x27f96cu;
    // NOP
}
