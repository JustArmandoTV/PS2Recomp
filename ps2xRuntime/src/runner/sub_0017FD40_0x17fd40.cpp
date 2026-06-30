#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FD40
// Address: 0x17fd40 - 0x17fdd0
void sub_0017FD40_0x17fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FD40_0x17fd40");
#endif

    ctx->pc = 0x17fd40u;

    // 0x17fd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17fd44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17fd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd48: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17FD48u;
    {
        const bool branch_taken_0x17fd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD48u;
            // 0x17fd4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd48) {
            ctx->pc = 0x17FD68u;
            goto label_17fd68;
        }
    }
    ctx->pc = 0x17FD50u;
    // 0x17fd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd54: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17fd58: 0xa0406b18  sb          $zero, 0x6B18($v0)
    ctx->pc = 0x17fd58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27416), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD5Cu;
            // 0x17fd60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FD64u;
    // 0x17fd64: 0x0  nop
    ctx->pc = 0x17fd64u;
    // NOP
label_17fd68:
    // 0x17fd68: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17fd6c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17fd70: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17FD70u;
    {
        const bool branch_taken_0x17fd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD70u;
            // 0x17fd74: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd70) {
            ctx->pc = 0x17FDA8u;
            goto label_17fda8;
        }
    }
    ctx->pc = 0x17FD78u;
    // 0x17fd78: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17FD78u;
    {
        const bool branch_taken_0x17fd78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD78u;
            // 0x17fd7c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd78) {
            ctx->pc = 0x17FDA8u;
            goto label_17fda8;
        }
    }
    ctx->pc = 0x17FD80u;
    // 0x17fd80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x17fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x17fd84: 0x24486540  addiu       $t0, $v0, 0x6540
    ctx->pc = 0x17fd84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x17fd88: 0x24876b18  addiu       $a3, $a0, 0x6B18
    ctx->pc = 0x17fd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 27416));
    // 0x17fd8c: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x17fd8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17fd90: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x17fd94: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x17fd94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17fd98: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x17fd98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x17fd9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17FD9Cu;
    {
        const bool branch_taken_0x17fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FD9Cu;
            // 0x17fda0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd9c) {
            ctx->pc = 0x17FDB4u;
            goto label_17fdb4;
        }
    }
    ctx->pc = 0x17FDA4u;
    // 0x17fda4: 0x0  nop
    ctx->pc = 0x17fda4u;
    // NOP
label_17fda8:
    // 0x17fda8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17fdac: 0xa0806b18  sb          $zero, 0x6B18($a0)
    ctx->pc = 0x17fdacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27416), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17fdb4:
    // 0x17fdb4: 0x24846b18  addiu       $a0, $a0, 0x6B18
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27416));
    // 0x17fdb8: 0x804afe8  j           func_12BFA0
    ctx->pc = 0x17FDB8u;
    ctx->pc = 0x17FDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDB8u;
            // 0x17fdbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17FDC0u;
    // 0x17fdc0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17fdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x17FDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDC4u;
            // 0x17fdc8: 0x24426b18  addiu       $v0, $v0, 0x6B18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FDCCu;
    // 0x17fdcc: 0x0  nop
    ctx->pc = 0x17fdccu;
    // NOP
}
