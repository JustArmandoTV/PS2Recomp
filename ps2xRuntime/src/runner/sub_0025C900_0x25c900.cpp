#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025C900
// Address: 0x25c900 - 0x25c9f0
void sub_0025C900_0x25c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C900_0x25c900");
#endif

    switch (ctx->pc) {
        case 0x25c940u: goto label_25c940;
        case 0x25c954u: goto label_25c954;
        case 0x25c978u: goto label_25c978;
        case 0x25c9c8u: goto label_25c9c8;
        default: break;
    }

    ctx->pc = 0x25c900u;

    // 0x25c900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25c904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25c908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25c90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c910: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25c910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c918: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25c918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c920: 0xa3a60058  sb          $a2, 0x58($sp)
    ctx->pc = 0x25c920u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 6));
    // 0x25c924: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C924u;
    {
        const bool branch_taken_0x25c924 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x25C928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C924u;
            // 0x25c928: 0x58043  sra         $s0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c924) {
            ctx->pc = 0x25C934u;
            goto label_25c934;
        }
    }
    ctx->pc = 0x25C92Cu;
    // 0x25c92c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x25c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25c930: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x25c930u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_25c934:
    // 0x25c934: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x25C934u;
    {
        const bool branch_taken_0x25c934 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x25c934) {
            ctx->pc = 0x25C960u;
            goto label_25c960;
        }
    }
    ctx->pc = 0x25C93Cu;
    // 0x25c93c: 0x0  nop
    ctx->pc = 0x25c93cu;
    // NOP
label_25c940:
    // 0x25c940: 0x83a70058  lb          $a3, 0x58($sp)
    ctx->pc = 0x25c940u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25c944: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c94c: 0xc0972b0  jal         func_25CAC0
    ctx->pc = 0x25C94Cu;
    SET_GPR_U32(ctx, 31, 0x25C954u);
    ctx->pc = 0x25C950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C94Cu;
            // 0x25c950: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CAC0u;
    if (runtime->hasFunction(0x25CAC0u)) {
        auto targetFn = runtime->lookupFunction(0x25CAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C954u; }
        if (ctx->pc != 0x25C954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CAC0_0x25cac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C954u; }
        if (ctx->pc != 0x25C954u) { return; }
    }
    ctx->pc = 0x25C954u;
label_25c954:
    // 0x25c954: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25c954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x25c958: 0x1e00fff9  bgtz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25C958u;
    {
        const bool branch_taken_0x25c958 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x25c958) {
            ctx->pc = 0x25C940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c940;
        }
    }
    ctx->pc = 0x25C960u;
label_25c960:
    // 0x25c960: 0x1a40001b  blez        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x25C960u;
    {
        const bool branch_taken_0x25c960 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x25c960) {
            ctx->pc = 0x25C9D0u;
            goto label_25c9d0;
        }
    }
    ctx->pc = 0x25C968u;
    // 0x25c968: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25c968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25c96c: 0x27b0005e  addiu       $s0, $sp, 0x5E
    ctx->pc = 0x25c96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
    // 0x25c970: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x25c970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25c974: 0x0  nop
    ctx->pc = 0x25c974u;
    // NOP
label_25c978:
    // 0x25c978: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x25c978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25c97c: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x25c97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25c980: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x25c980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x25c984: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25c984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25c988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25c988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c98c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c990: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25c990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c994: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x25c994u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25c998: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x25c998u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c99c: 0x9622fffc  lhu         $v0, -0x4($s1)
    ctx->pc = 0x25c99cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x25c9a0: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x25c9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c9a4: 0x9622fffe  lhu         $v0, -0x2($s1)
    ctx->pc = 0x25c9a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967294)));
    // 0x25c9a8: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x25c9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c9ac: 0x97a2005c  lhu         $v0, 0x5C($sp)
    ctx->pc = 0x25c9acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x25c9b0: 0xa622fffc  sh          $v0, -0x4($s1)
    ctx->pc = 0x25c9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967292), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c9b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x25c9b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c9b8: 0xa622fffe  sh          $v0, -0x2($s1)
    ctx->pc = 0x25c9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967294), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c9bc: 0x83a70058  lb          $a3, 0x58($sp)
    ctx->pc = 0x25c9bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25c9c0: 0xc0972b0  jal         func_25CAC0
    ctx->pc = 0x25C9C0u;
    SET_GPR_U32(ctx, 31, 0x25C9C8u);
    ctx->pc = 0x25C9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C9C0u;
            // 0x25c9c4: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CAC0u;
    if (runtime->hasFunction(0x25CAC0u)) {
        auto targetFn = runtime->lookupFunction(0x25CAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C9C8u; }
        if (ctx->pc != 0x25C9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CAC0_0x25cac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C9C8u; }
        if (ctx->pc != 0x25C9C8u) { return; }
    }
    ctx->pc = 0x25C9C8u;
label_25c9c8:
    // 0x25c9c8: 0x1e40ffeb  bgtz        $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x25C9C8u;
    {
        const bool branch_taken_0x25c9c8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x25c9c8) {
            ctx->pc = 0x25C978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c978;
        }
    }
    ctx->pc = 0x25C9D0u;
label_25c9d0:
    // 0x25c9d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25c9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c9d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c9d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c9d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C9E4u;
            // 0x25c9e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C9ECu;
    // 0x25c9ec: 0x0  nop
    ctx->pc = 0x25c9ecu;
    // NOP
}
