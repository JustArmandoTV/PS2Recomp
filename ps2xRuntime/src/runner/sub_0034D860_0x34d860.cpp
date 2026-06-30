#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034D860
// Address: 0x34d860 - 0x34d9f0
void sub_0034D860_0x34d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D860_0x34d860");
#endif

    switch (ctx->pc) {
        case 0x34d8f0u: goto label_34d8f0;
        case 0x34d924u: goto label_34d924;
        case 0x34d98cu: goto label_34d98c;
        case 0x34d9d0u: goto label_34d9d0;
        default: break;
    }

    ctx->pc = 0x34d860u;

    // 0x34d860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34d864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34d868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d870: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34d870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d874: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x34d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x34d878: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x34d878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x34d87c: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x34d87cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34d880: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x34D880u;
    {
        const bool branch_taken_0x34d880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D880u;
            // 0x34d884: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d880) {
            ctx->pc = 0x34D8F0u;
            goto label_34d8f0;
        }
    }
    ctx->pc = 0x34D888u;
    // 0x34d888: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34d888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34d88c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x34d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x34d890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d894: 0xc4610844  lwc1        $f1, 0x844($v1)
    ctx->pc = 0x34d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d898: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x34d898u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d89c: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x34D89Cu;
    {
        const bool branch_taken_0x34d89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d89c) {
            ctx->pc = 0x34D8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D89Cu;
            // 0x34d8a0: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D8F4u;
            goto label_34d8f4;
        }
    }
    ctx->pc = 0x34D8A4u;
    // 0x34d8a4: 0x8c640cb4  lw          $a0, 0xCB4($v1)
    ctx->pc = 0x34d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
    // 0x34d8a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34d8ac: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34D8ACu;
    {
        const bool branch_taken_0x34d8ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34d8ac) {
            ctx->pc = 0x34D8F0u;
            goto label_34d8f0;
        }
    }
    ctx->pc = 0x34D8B4u;
    // 0x34d8b4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x34d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x34d8b8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x34d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x34d8bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34d8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d8c0: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x34d8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x34d8c4: 0x8c4502c0  lw          $a1, 0x2C0($v0)
    ctx->pc = 0x34d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x34d8c8: 0x8c4302c4  lw          $v1, 0x2C4($v0)
    ctx->pc = 0x34d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
    // 0x34d8cc: 0x8c4202c8  lw          $v0, 0x2C8($v0)
    ctx->pc = 0x34d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    // 0x34d8d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x34d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34d8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d8d8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x34d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x34d8dc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x34d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x34d8e0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x34d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x34d8e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34d8e8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x34D8E8u;
    SET_GPR_U32(ctx, 31, 0x34D8F0u);
    ctx->pc = 0x34D8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D8E8u;
            // 0x34d8ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8F0u; }
        if (ctx->pc != 0x34D8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8F0u; }
        if (ctx->pc != 0x34D8F0u) { return; }
    }
    ctx->pc = 0x34D8F0u;
label_34d8f0:
    // 0x34d8f0: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x34d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_34d8f4:
    // 0x34d8f4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x34d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x34d8f8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x34d8f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34d8fc: 0x50200018  beql        $at, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x34D8FCu;
    {
        const bool branch_taken_0x34d8fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d8fc) {
            ctx->pc = 0x34D900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D8FCu;
            // 0x34d900: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D960u;
            goto label_34d960;
        }
    }
    ctx->pc = 0x34D904u;
    // 0x34d904: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x34d904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x34d908: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x34d908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x34d90c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x34d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x34d910: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34d910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d914: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34d914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d918: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34d918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34d91c: 0xc0d36b4  jal         func_34DAD0
    ctx->pc = 0x34D91Cu;
    SET_GPR_U32(ctx, 31, 0x34D924u);
    ctx->pc = 0x34D920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D91Cu;
            // 0x34d920: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DAD0u;
    if (runtime->hasFunction(0x34DAD0u)) {
        auto targetFn = runtime->lookupFunction(0x34DAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D924u; }
        if (ctx->pc != 0x34D924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DAD0_0x34dad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D924u; }
        if (ctx->pc != 0x34D924u) { return; }
    }
    ctx->pc = 0x34D924u;
label_34d924:
    // 0x34d924: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x34d924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34d928: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34d928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34d92c: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x34d92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x34d930: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x34d930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x34d934: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x34d934u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34d938: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x34d938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x34d93c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x34d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34d940: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x34d940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x34d944: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x34d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d948: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34d948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34d94c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x34d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d950: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x34d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x34d954: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x34d954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x34d958: 0xaca3fff8  sw          $v1, -0x8($a1)
    ctx->pc = 0x34d958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 3));
    // 0x34d95c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34d95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34d960:
    // 0x34d960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d968: 0x3e00008  jr          $ra
    ctx->pc = 0x34D968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D968u;
            // 0x34d96c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D970u;
    // 0x34d970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d97c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x34d97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34d980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d984: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34D984u;
    SET_GPR_U32(ctx, 31, 0x34D98Cu);
    ctx->pc = 0x34D988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D984u;
            // 0x34d988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D98Cu; }
        if (ctx->pc != 0x34D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D98Cu; }
        if (ctx->pc != 0x34D98Cu) { return; }
    }
    ctx->pc = 0x34D98Cu;
label_34d98c:
    // 0x34d98c: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x34d98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d990: 0x2e3c  dsll32      $a1, $zero, 24
    ctx->pc = 0x34d990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 24));
    // 0x34d994: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x34d994u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x34d998: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x34d998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d99c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x34d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x34d9a0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x34d9a4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x34d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x34d9a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d9ac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x34d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x34d9b0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x34d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x34d9b4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x34d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x34d9b8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x34d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x34d9bc: 0x8c63095c  lw          $v1, 0x95C($v1)
    ctx->pc = 0x34d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2396)));
    // 0x34d9c0: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D9C0u;
    {
        const bool branch_taken_0x34d9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x34d9c0) {
            ctx->pc = 0x34D9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D9C0u;
            // 0x34d9c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D9D8u;
            goto label_34d9d8;
        }
    }
    ctx->pc = 0x34D9C8u;
    // 0x34d9c8: 0xc075e98  jal         func_1D7A60
    ctx->pc = 0x34D9C8u;
    SET_GPR_U32(ctx, 31, 0x34D9D0u);
    ctx->pc = 0x34D9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D9C8u;
            // 0x34d9cc: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7A60u;
    if (runtime->hasFunction(0x1D7A60u)) {
        auto targetFn = runtime->lookupFunction(0x1D7A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D9D0u; }
        if (ctx->pc != 0x34D9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7A60_0x1d7a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D9D0u; }
        if (ctx->pc != 0x34D9D0u) { return; }
    }
    ctx->pc = 0x34D9D0u;
label_34d9d0:
    // 0x34d9d0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x34d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x34d9d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34d9d8:
    // 0x34d9d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x34D9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D9DCu;
            // 0x34d9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D9E4u;
    // 0x34d9e4: 0x0  nop
    ctx->pc = 0x34d9e4u;
    // NOP
    // 0x34d9e8: 0x0  nop
    ctx->pc = 0x34d9e8u;
    // NOP
    // 0x34d9ec: 0x0  nop
    ctx->pc = 0x34d9ecu;
    // NOP
}
