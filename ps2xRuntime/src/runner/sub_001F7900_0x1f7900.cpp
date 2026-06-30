#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7900
// Address: 0x1f7900 - 0x1f7e10
void sub_001F7900_0x1f7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7900_0x1f7900");
#endif

    switch (ctx->pc) {
        case 0x1f791cu: goto label_1f791c;
        case 0x1f79ccu: goto label_1f79cc;
        case 0x1f7a10u: goto label_1f7a10;
        case 0x1f7a28u: goto label_1f7a28;
        case 0x1f7c84u: goto label_1f7c84;
        case 0x1f7cacu: goto label_1f7cac;
        case 0x1f7d08u: goto label_1f7d08;
        case 0x1f7d58u: goto label_1f7d58;
        case 0x1f7da0u: goto label_1f7da0;
        case 0x1f7df0u: goto label_1f7df0;
        default: break;
    }

    ctx->pc = 0x1f7900u;

label_1f7900:
    // 0x1f7900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7904: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f7904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7908: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f7908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f790c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7910: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1f7910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7914: 0xc07dd8c  jal         func_1F7630
    ctx->pc = 0x1F7914u;
    SET_GPR_U32(ctx, 31, 0x1F791Cu);
    ctx->pc = 0x1F7918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7914u;
            // 0x1f7918: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7630u;
    if (runtime->hasFunction(0x1F7630u)) {
        auto targetFn = runtime->lookupFunction(0x1F7630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F791Cu; }
        if (ctx->pc != 0x1F791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7630_0x1f7630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F791Cu; }
        if (ctx->pc != 0x1F791Cu) { return; }
    }
    ctx->pc = 0x1F791Cu;
label_1f791c:
    // 0x1f791c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f791cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7920: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7920u;
            // 0x1f7924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7928u;
    // 0x1f7928: 0x0  nop
    ctx->pc = 0x1f7928u;
    // NOP
    // 0x1f792c: 0x0  nop
    ctx->pc = 0x1f792cu;
    // NOP
    // 0x1f7930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f793c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f793cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7940: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F7940u;
    {
        const bool branch_taken_0x1f7940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7940) {
            ctx->pc = 0x1F7944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7940u;
            // 0x1f7944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F79D0u;
            goto label_1f79d0;
        }
    }
    ctx->pc = 0x1F7948u;
    // 0x1f7948: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f794c: 0x2442dd10  addiu       $v0, $v0, -0x22F0
    ctx->pc = 0x1f794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
    // 0x1f7950: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F7950u;
    {
        const bool branch_taken_0x1f7950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7950u;
            // 0x1f7954: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7950) {
            ctx->pc = 0x1F79A4u;
            goto label_1f79a4;
        }
    }
    ctx->pc = 0x1F7958u;
    // 0x1f7958: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f795c: 0x2442dcd0  addiu       $v0, $v0, -0x2330
    ctx->pc = 0x1f795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958288));
    // 0x1f7960: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7960u;
    {
        const bool branch_taken_0x1f7960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7960u;
            // 0x1f7964: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7960) {
            ctx->pc = 0x1F79A4u;
            goto label_1f79a4;
        }
    }
    ctx->pc = 0x1F7968u;
    // 0x1f7968: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f796c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1f796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
    // 0x1f7970: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7970u;
    {
        const bool branch_taken_0x1f7970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7970u;
            // 0x1f7974: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7970) {
            ctx->pc = 0x1F79A4u;
            goto label_1f79a4;
        }
    }
    ctx->pc = 0x1F7978u;
    // 0x1f7978: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f797c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1f7980: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7980u;
    {
        const bool branch_taken_0x1f7980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7980u;
            // 0x1f7984: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7980) {
            ctx->pc = 0x1F79A4u;
            goto label_1f79a4;
        }
    }
    ctx->pc = 0x1F7988u;
    // 0x1f7988: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f798c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1f7990: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7990u;
    {
        const bool branch_taken_0x1f7990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7990u;
            // 0x1f7994: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7990) {
            ctx->pc = 0x1F79A4u;
            goto label_1f79a4;
        }
    }
    ctx->pc = 0x1F7998u;
    // 0x1f7998: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f799c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1f79a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f79a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f79a4:
    // 0x1f79a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f79a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1f79a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f79a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f79ac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F79ACu;
    {
        const bool branch_taken_0x1f79ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f79ac) {
            ctx->pc = 0x1F79CCu;
            goto label_1f79cc;
        }
    }
    ctx->pc = 0x1F79B4u;
    // 0x1f79b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f79b8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f79b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f79bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f79c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f79c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f79c4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F79C4u;
    SET_GPR_U32(ctx, 31, 0x1F79CCu);
    ctx->pc = 0x1F79C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79C4u;
            // 0x1f79c8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79CCu; }
        if (ctx->pc != 0x1F79CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F79CCu; }
        if (ctx->pc != 0x1F79CCu) { return; }
    }
    ctx->pc = 0x1F79CCu;
label_1f79cc:
    // 0x1f79cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f79ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f79d0:
    // 0x1f79d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f79d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f79d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f79d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f79d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F79D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F79DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F79D8u;
            // 0x1f79dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F79E0u;
    // 0x1f79e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f79e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f79e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f79e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f79e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f79ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f79ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f79f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f79f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f79f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f79f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f79f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f79f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f79fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f79fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f7a00: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1f7a00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f7a04: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1f7a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7a08: 0xc07d970  jal         func_1F65C0
    ctx->pc = 0x1F7A08u;
    SET_GPR_U32(ctx, 31, 0x1F7A10u);
    ctx->pc = 0x1F7A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7A08u;
            // 0x1f7a0c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F65C0u;
    if (runtime->hasFunction(0x1F65C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F65C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7A10u; }
        if (ctx->pc != 0x1F7A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F65C0_0x1f65c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7A10u; }
        if (ctx->pc != 0x1F7A10u) { return; }
    }
    ctx->pc = 0x1F7A10u;
label_1f7a10:
    // 0x1f7a10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f7a14: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1f7a14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f7a18: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F7A18u;
    {
        const bool branch_taken_0x1f7a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a18) {
            ctx->pc = 0x1F7AB8u;
            goto label_1f7ab8;
        }
    }
    ctx->pc = 0x1F7A20u;
    // 0x1f7a20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f7a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f7a24: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7a28:
    // 0x1f7a28: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1f7a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7a2c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1f7a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7a30: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f7a30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f7a34: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f7a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x1f7a38: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f7a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f7a3c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1f7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a40: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1f7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7a44: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f7a44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f7a48: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f7a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x1f7a4c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1f7a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1f7a50: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f7a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a54: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1f7a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7a58: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f7a58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f7a5c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f7a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x1f7a60: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f7a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f7a64: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1f7a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a68: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1f7a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7a6c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f7a6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f7a70: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f7a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x1f7a74: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1f7a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1f7a78: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1f7a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7a7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f7a80: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1f7a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1f7a84: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1f7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7a88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f7a8c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f7a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1f7a90: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1f7a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7a94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f7a98: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1f7a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1f7a9c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f7a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7aa0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f7aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1f7aa4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f7aa8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1f7aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f7aac: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1f7aacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f7ab0: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1F7AB0u;
    {
        const bool branch_taken_0x1f7ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ab0) {
            ctx->pc = 0x1F7AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7AB0u;
            // 0x1f7ab4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f7a28;
        }
    }
    ctx->pc = 0x1F7AB8u;
label_1f7ab8:
    // 0x1f7ab8: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1f7ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7abc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f7abcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7ac0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
    ctx->pc = 0x1F7AC0u;
    {
        const bool branch_taken_0x1f7ac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7ac0) {
            ctx->pc = 0x1F7AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7AC0u;
            // 0x1f7ac4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B68u;
            goto label_1f7b68;
        }
    }
    ctx->pc = 0x1F7AC8u;
    // 0x1f7ac8: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1f7ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7acc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f7accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7ad0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7ad0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f7ad4: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1f7ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
    // 0x1f7ad8: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1f7ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7adc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7adcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f7ae0: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1f7ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
    // 0x1f7ae4: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1f7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7ae8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7ae8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f7aec: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1f7aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
    // 0x1f7af0: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1f7af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7af4: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1f7af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
    // 0x1f7af8: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1f7af8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
    // 0x1f7afc: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1f7afcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
    // 0x1f7b00: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1f7b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7b04: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1f7b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f7b08: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f7b08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x1f7b0c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f7b0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
    // 0x1f7b10: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1f7b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7b14: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1f7b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f7b18: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f7b18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x1f7b1c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f7b1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
    // 0x1f7b20: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1f7b20u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
    // 0x1f7b24: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f7b28: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f7b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f7b2c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1f7b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f7b30: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1f7b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1f7b34: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1f7b34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
    // 0x1f7b38: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1f7b38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f7b3c: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1f7b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f7b40: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f7b40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
    // 0x1f7b44: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f7b44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
    // 0x1f7b48: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1f7b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1f7b4c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7B4Cu;
    {
        const bool branch_taken_0x1f7b4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7b4c) {
            ctx->pc = 0x1F7B64u;
            goto label_1f7b64;
        }
    }
    ctx->pc = 0x1F7B54u;
    // 0x1f7b54: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1f7b54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
    // 0x1f7b58: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1f7b58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
    // 0x1f7b5c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1f7b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7b60: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1f7b60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1f7b64:
    // 0x1f7b64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7b68:
    // 0x1f7b68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f7b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7b6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f7b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7b70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f7b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7B74u;
            // 0x1f7b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7B7Cu;
    // 0x1f7b7c: 0x0  nop
    ctx->pc = 0x1f7b7cu;
    // NOP
    // 0x1f7b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7B88u;
    // 0x1f7b88: 0x0  nop
    ctx->pc = 0x1f7b88u;
    // NOP
    // 0x1f7b8c: 0x0  nop
    ctx->pc = 0x1f7b8cu;
    // NOP
    // 0x1f7b90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f7b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f7b94: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1f7b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7b9c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1f7b9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ba0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f7ba4: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f7ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1f7ba8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f7bac: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1f7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
    // 0x1f7bb0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1f7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1f7bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7bb8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1f7bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7bbc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1f7bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f7bc0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1f7bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f7bc4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1f7bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x1f7bc8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1f7bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1f7bcc: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1f7bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x1f7bd0: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1f7bd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1f7bd4: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1f7bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7bd8: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1f7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1f7bdc: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1f7bdcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f7be0: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1f7be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1f7be4: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1f7be4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
    // 0x1f7be8: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1f7be8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f7bec: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1f7becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1f7bf0: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1f7bf0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
    // 0x1f7bf4: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1f7bf4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f7bf8: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1f7bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1f7bfc: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1f7bfcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x1f7c00: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1f7c00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f7c04: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1f7c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f7c08: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1f7c08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x1f7c0c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f7c0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1f7c10: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1f7c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f7c14: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1f7c14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1f7c18: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1f7c1c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1f7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1f7c20: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1f7c20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f7c24: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f7c24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f7c28: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1f7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1f7c2c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f7c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f7c30: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1f7c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1f7c34: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f7c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f7c38: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1f7c3c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1f7c3cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f7c40: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1f7c40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f7c44: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1f7c44u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f7c48: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7C48u;
    {
        const bool branch_taken_0x1f7c48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C48u;
            // 0x1f7c4c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c48) {
            ctx->pc = 0x1F7C94u;
            goto label_1f7c94;
        }
    }
    ctx->pc = 0x1F7C50u;
    // 0x1f7c50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f7c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c54: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1f7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1f7c58: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f7c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1f7c5c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1f7c60: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f7c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c64: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f7c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f7c68: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1f7c68u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f7c6c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f7c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7c70: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1f7c70u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f7c74: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1f7c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f7c78: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1f7c78u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f7c7c: 0xc07c364  jal         func_1F0D90
    ctx->pc = 0x1F7C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F7C84u);
    ctx->pc = 0x1F7C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C7Cu;
            // 0x1f7c80: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D90u;
    if (runtime->hasFunction(0x1F0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1F0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C84u; }
        if (ctx->pc != 0x1F7C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0D90_0x1f0d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C84u; }
        if (ctx->pc != 0x1F7C84u) { return; }
    }
    ctx->pc = 0x1F7C84u;
label_1f7c84:
    // 0x1f7c84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f7c88: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1f7c8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7C8Cu;
    {
        const bool branch_taken_0x1f7c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C8Cu;
            // 0x1f7c90: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c8c) {
            ctx->pc = 0x1F7CACu;
            goto label_1f7cac;
        }
    }
    ctx->pc = 0x1F7C94u;
label_1f7c94:
    // 0x1f7c94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f7c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c98: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f7c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f7c9c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f7c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ca0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f7ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7ca4: 0xc07c364  jal         func_1F0D90
    ctx->pc = 0x1F7CA4u;
    SET_GPR_U32(ctx, 31, 0x1F7CACu);
    ctx->pc = 0x1F7CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7CA4u;
            // 0x1f7ca8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D90u;
    if (runtime->hasFunction(0x1F0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1F0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7CACu; }
        if (ctx->pc != 0x1F7CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0D90_0x1f0d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7CACu; }
        if (ctx->pc != 0x1F7CACu) { return; }
    }
    ctx->pc = 0x1F7CACu;
label_1f7cac:
    // 0x1f7cac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f7cb0: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f7cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1f7cb4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1f7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1f7cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7CBCu;
            // 0x1f7cc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7CC4u;
    // 0x1f7cc4: 0x0  nop
    ctx->pc = 0x1f7cc4u;
    // NOP
    // 0x1f7cc8: 0x0  nop
    ctx->pc = 0x1f7cc8u;
    // NOP
    // 0x1f7ccc: 0x0  nop
    ctx->pc = 0x1f7cccu;
    // NOP
    // 0x1f7cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7cd4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f7cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1f7cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7cdc: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f7cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1f7ce0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1f7ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1f7ce4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f7ce8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f7ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cec: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1f7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x1f7cf0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f7cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cf4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1f7cf8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f7cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cfc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f7cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1f7d00: 0xc07dc38  jal         func_1F70E0
    ctx->pc = 0x1F7D00u;
    SET_GPR_U32(ctx, 31, 0x1F7D08u);
    ctx->pc = 0x1F7D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D00u;
            // 0x1f7d04: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F70E0u;
    if (runtime->hasFunction(0x1F70E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F70E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D08u; }
        if (ctx->pc != 0x1F7D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F70E0_0x1f70e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D08u; }
        if (ctx->pc != 0x1F7D08u) { return; }
    }
    ctx->pc = 0x1F7D08u;
label_1f7d08:
    // 0x1f7d08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f7d0c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1f7d10: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1f7d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D18u;
            // 0x1f7d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7D20u;
    // 0x1f7d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7d24: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1f7d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7d2c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f7d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1f7d30: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1f7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x1f7d34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f7d38: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1f7d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d3c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1f7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x1f7d40: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f7d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d44: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f7d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1f7d48: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1f7d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d4c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1f7d50: 0xc07dae4  jal         func_1F6B90
    ctx->pc = 0x1F7D50u;
    SET_GPR_U32(ctx, 31, 0x1F7D58u);
    ctx->pc = 0x1F7D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D50u;
            // 0x1f7d54: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B90u;
    if (runtime->hasFunction(0x1F6B90u)) {
        auto targetFn = runtime->lookupFunction(0x1F6B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D58u; }
        if (ctx->pc != 0x1F7D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6B90_0x1f6b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D58u; }
        if (ctx->pc != 0x1F7D58u) { return; }
    }
    ctx->pc = 0x1F7D58u;
label_1f7d58:
    // 0x1f7d58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f7d5c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1f7d60: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1f7d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D68u;
            // 0x1f7d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7D70u;
    // 0x1f7d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7d74: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f7d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7d7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f7d80: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1f7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1f7d84: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1f7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x1f7d88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f7d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d8c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f7d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1f7d90: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f7d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d94: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1f7d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f7d98: 0xc07dd8c  jal         func_1F7630
    ctx->pc = 0x1F7D98u;
    SET_GPR_U32(ctx, 31, 0x1F7DA0u);
    ctx->pc = 0x1F7D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D98u;
            // 0x1f7d9c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7630u;
    if (runtime->hasFunction(0x1F7630u)) {
        auto targetFn = runtime->lookupFunction(0x1F7630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7DA0u; }
        if (ctx->pc != 0x1F7DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7630_0x1f7630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7DA0u; }
        if (ctx->pc != 0x1F7DA0u) { return; }
    }
    ctx->pc = 0x1F7DA0u;
label_1f7da0:
    // 0x1f7da0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f7da4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1f7da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x1f7da8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f7da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1f7dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7db0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DB0u;
            // 0x1f7db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7DB8u;
    // 0x1f7db8: 0x0  nop
    ctx->pc = 0x1f7db8u;
    // NOP
    // 0x1f7dbc: 0x0  nop
    ctx->pc = 0x1f7dbcu;
    // NOP
    // 0x1f7dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7dc4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f7dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7dcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f7dd0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1f7dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x1f7dd4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1f7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x1f7dd8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f7dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ddc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f7ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1f7de0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f7de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7de4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1f7de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f7de8: 0xc07de40  jal         func_1F7900
    ctx->pc = 0x1F7DE8u;
    SET_GPR_U32(ctx, 31, 0x1F7DF0u);
    ctx->pc = 0x1F7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DE8u;
            // 0x1f7dec: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7900u;
    goto label_1f7900;
    ctx->pc = 0x1F7DF0u;
label_1f7df0:
    // 0x1f7df0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f7df4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1f7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
    // 0x1f7df8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1f7dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E00u;
            // 0x1f7e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7E08u;
    // 0x1f7e08: 0x0  nop
    ctx->pc = 0x1f7e08u;
    // NOP
    // 0x1f7e0c: 0x0  nop
    ctx->pc = 0x1f7e0cu;
    // NOP
}
