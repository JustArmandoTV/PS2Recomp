#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF6B8
// Address: 0x1af6b8 - 0x1af780
void sub_001AF6B8_0x1af6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF6B8_0x1af6b8");
#endif

    switch (ctx->pc) {
        case 0x1af6f8u: goto label_1af6f8;
        case 0x1af710u: goto label_1af710;
        case 0x1af744u: goto label_1af744;
        default: break;
    }

    ctx->pc = 0x1af6b8u;

    // 0x1af6b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af6c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af6cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1af6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1af6d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1af6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1af6d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1af6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1af6d8: 0x18c0001f  blez        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AF6D8u;
    {
        const bool branch_taken_0x1af6d8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1AF6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6D8u;
            // 0x1af6dc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6d8) {
            ctx->pc = 0x1AF758u;
            goto label_1af758;
        }
    }
    ctx->pc = 0x1AF6E0u;
    // 0x1af6e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1af6e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1af6e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af6e8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1af6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af6ec: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1af6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af6f0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1af6f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af6f4: 0x0  nop
    ctx->pc = 0x1af6f4u;
    // NOP
label_1af6f8:
    // 0x1af6f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1af6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1af6fc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1af6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1af700: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1af700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1af704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af708: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1AF708u;
    SET_GPR_U32(ctx, 31, 0x1AF710u);
    ctx->pc = 0x1AF70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF708u;
            // 0x1af70c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF710u; }
        if (ctx->pc != 0x1AF710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF710u; }
        if (ctx->pc != 0x1AF710u) { return; }
    }
    ctx->pc = 0x1AF710u;
label_1af710:
    // 0x1af710: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1af710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1af714: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1af714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1af718: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x1af718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1af71c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1af71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1af720: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1af720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1af724: 0xae15003c  sw          $s5, 0x3C($s0)
    ctx->pc = 0x1af724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 21));
    // 0x1af728: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1af728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1af72c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1af72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1af730: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1af730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1af734: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1af734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1af738: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1af738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1af73c: 0xc06bde0  jal         func_1AF780
    ctx->pc = 0x1AF73Cu;
    SET_GPR_U32(ctx, 31, 0x1AF744u);
    ctx->pc = 0x1AF740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF73Cu;
            // 0x1af740: 0xae140058  sw          $s4, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF780u;
    if (runtime->hasFunction(0x1AF780u)) {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF744u; }
        if (ctx->pc != 0x1AF744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF744u; }
        if (ctx->pc != 0x1AF744u) { return; }
    }
    ctx->pc = 0x1AF744u;
label_1af744:
    // 0x1af744: 0xfe1300e0  sd          $s3, 0xE0($s0)
    ctx->pc = 0x1af744u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 19));
    // 0x1af748: 0xa60000e8  sh          $zero, 0xE8($s0)
    ctx->pc = 0x1af748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 0));
    // 0x1af74c: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x1af74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x1af750: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1AF750u;
    {
        const bool branch_taken_0x1af750 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF750u;
            // 0x1af754: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af750) {
            ctx->pc = 0x1AF6F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af6f8;
        }
    }
    ctx->pc = 0x1AF758u;
label_1af758:
    // 0x1af758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af75c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af760: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af764: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af768: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1af768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af76c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1af76cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1af770: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af774: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF774u;
            // 0x1af778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF77Cu;
    // 0x1af77c: 0x0  nop
    ctx->pc = 0x1af77cu;
    // NOP
}
