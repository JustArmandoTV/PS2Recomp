#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5928
// Address: 0x1c5928 - 0x1c5b60
void sub_001C5928_0x1c5928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5928_0x1c5928");
#endif

    switch (ctx->pc) {
        case 0x1c59a8u: goto label_1c59a8;
        case 0x1c5a00u: goto label_1c5a00;
        case 0x1c5a68u: goto label_1c5a68;
        case 0x1c5accu: goto label_1c5acc;
        case 0x1c5b10u: goto label_1c5b10;
        default: break;
    }

    ctx->pc = 0x1c5928u;

label_1c5928:
    // 0x1c5928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c592c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5934: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c5934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c5938: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c5938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c593c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c5940: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c5940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5944: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c5944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c5948: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c5948u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c594c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5954: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c5954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c5958: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5958u;
    {
        const bool branch_taken_0x1c5958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5958u;
            // 0x1c595c: 0x2405012b  addiu       $a1, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5958) {
            ctx->pc = 0x1C5968u;
            goto label_1c5968;
        }
    }
    ctx->pc = 0x1C5960u;
    // 0x1c5960: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1C5960u;
    {
        const bool branch_taken_0x1c5960 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5960) {
            ctx->pc = 0x1C59A0u;
            goto label_1c59a0;
        }
    }
    ctx->pc = 0x1C5968u;
label_1c5968:
    // 0x1c5968: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c596c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c596cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c5970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5974: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c5974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x1c5978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c597c: 0x24c6bf60  addiu       $a2, $a2, -0x40A0
    ctx->pc = 0x1c597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950752));
    // 0x1c5980: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c5980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5984: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c5984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c5988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c5988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c598c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c598cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5990: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c5990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5994: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C5994u;
    ctx->pc = 0x1C5998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5994u;
            // 0x1c5998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C599Cu;
    // 0x1c599c: 0x0  nop
    ctx->pc = 0x1c599cu;
    // NOP
label_1c59a0:
    // 0x1c59a0: 0xc0715fe  jal         func_1C57F8
    ctx->pc = 0x1C59A0u;
    SET_GPR_U32(ctx, 31, 0x1C59A8u);
    ctx->pc = 0x1C57F8u;
    if (runtime->hasFunction(0x1C57F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C57F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C59A8u; }
        if (ctx->pc != 0x1C59A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C57F8_0x1c57f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C59A8u; }
        if (ctx->pc != 0x1C59A8u) { return; }
    }
    ctx->pc = 0x1C59A8u;
label_1c59a8:
    // 0x1c59a8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c59ac: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c59acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c59b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c59b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59b4: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c59b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x1c59b8: 0x24c6bf30  addiu       $a2, $a2, -0x40D0
    ctx->pc = 0x1c59b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950704));
    // 0x1c59bc: 0x24050130  addiu       $a1, $zero, 0x130
    ctx->pc = 0x1c59bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x1c59c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c59c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59c4: 0x1e00000a  bgtz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C59C4u;
    {
        const bool branch_taken_0x1c59c4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1C59C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59C4u;
            // 0x1c59c8: 0x2408ff36  addiu       $t0, $zero, -0xCA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967094));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59c4) {
            ctx->pc = 0x1C59F0u;
            goto label_1c59f0;
        }
    }
    ctx->pc = 0x1C59CCu;
    // 0x1c59cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c59ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c59d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c59d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c59d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c59d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c59d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c59d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c59dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c59dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c59e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c59e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c59e4: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C59E4u;
    ctx->pc = 0x1C59E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59E4u;
            // 0x1c59e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C59ECu;
    // 0x1c59ec: 0x0  nop
    ctx->pc = 0x1c59ecu;
    // NOP
label_1c59f0:
    // 0x1c59f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c59f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c59f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59f8: 0xc071760  jal         func_1C5D80
    ctx->pc = 0x1C59F8u;
    SET_GPR_U32(ctx, 31, 0x1C5A00u);
    ctx->pc = 0x1C59FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59F8u;
            // 0x1c59fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D80u;
    if (runtime->hasFunction(0x1C5D80u)) {
        auto targetFn = runtime->lookupFunction(0x1C5D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A00u; }
        if (ctx->pc != 0x1C5A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5D80_0x1c5d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A00u; }
        if (ctx->pc != 0x1C5A00u) { return; }
    }
    ctx->pc = 0x1C5A00u;
label_1c5a00:
    // 0x1c5a00: 0x141ac0  sll         $v1, $s4, 11
    ctx->pc = 0x1c5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
    // 0x1c5a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c5a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a0c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c5a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a10: 0x24050136  addiu       $a1, $zero, 0x136
    ctx->pc = 0x1c5a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x1c5a14: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C5A14u;
    {
        const bool branch_taken_0x1c5a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A14u;
            // 0x1c5a18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a14) {
            ctx->pc = 0x1C5A50u;
            goto label_1c5a50;
        }
    }
    ctx->pc = 0x1C5A1Cu;
    // 0x1c5a1c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c5a20: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c5a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5a28: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c5a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x1c5a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5a30: 0x24c6bf70  addiu       $a2, $a2, -0x4090
    ctx->pc = 0x1c5a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950768));
    // 0x1c5a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c5a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5a38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c5a38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c5a3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c5a3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5a40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c5a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5a44: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C5A44u;
    ctx->pc = 0x1C5A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A44u;
            // 0x1c5a48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5A4Cu;
    // 0x1c5a4c: 0x0  nop
    ctx->pc = 0x1c5a4cu;
    // NOP
label_1c5a50:
    // 0x1c5a50: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x1c5a50u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c5a54: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C5A54u;
    {
        const bool branch_taken_0x1c5a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a54) {
            ctx->pc = 0x1C5A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A54u;
            // 0x1c5a58: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5A5Cu;
            goto label_1c5a5c;
        }
    }
    ctx->pc = 0x1C5A5Cu;
label_1c5a5c:
    // 0x1c5a5c: 0x2812  mflo        $a1
    ctx->pc = 0x1c5a5cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1c5a60: 0xc0715b2  jal         func_1C56C8
    ctx->pc = 0x1C5A60u;
    SET_GPR_U32(ctx, 31, 0x1C5A68u);
    ctx->pc = 0x1C56C8u;
    if (runtime->hasFunction(0x1C56C8u)) {
        auto targetFn = runtime->lookupFunction(0x1C56C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A68u; }
        if (ctx->pc != 0x1C5A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C56C8_0x1c56c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A68u; }
        if (ctx->pc != 0x1C5A68u) { return; }
    }
    ctx->pc = 0x1C5A68u;
label_1c5a68:
    // 0x1c5a68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c5a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a6c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5A6Cu;
    {
        const bool branch_taken_0x1c5a6c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C5A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A6Cu;
            // 0x1c5a70: 0x703018  mult        $a2, $v1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a6c) {
            ctx->pc = 0x1C5A84u;
            goto label_1c5a84;
        }
    }
    ctx->pc = 0x1C5A74u;
    // 0x1c5a74: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x1c5a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c5a78: 0x24c307ff  addiu       $v1, $a2, 0x7FF
    ctx->pc = 0x1c5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x1c5a7c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c5a7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1c5a80: 0x612c3  sra         $v0, $a2, 11
    ctx->pc = 0x1c5a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 11));
label_1c5a84:
    // 0x1c5a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5a8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c5a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5a90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c5a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c5a94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c5a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5a98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c5a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A9Cu;
            // 0x1c5aa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5AA4u;
    // 0x1c5aa4: 0x0  nop
    ctx->pc = 0x1c5aa4u;
    // NOP
    // 0x1c5aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5ab4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5abc: 0x18c00023  blez        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C5ABCu;
    {
        const bool branch_taken_0x1c5abc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C5AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5ABCu;
            // 0x1c5ac0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5abc) {
            ctx->pc = 0x1C5B4Cu;
            goto label_1c5b4c;
        }
    }
    ctx->pc = 0x1C5AC4u;
    // 0x1c5ac4: 0xc07164a  jal         func_1C5928
    ctx->pc = 0x1C5AC4u;
    SET_GPR_U32(ctx, 31, 0x1C5ACCu);
    ctx->pc = 0x1C5928u;
    goto label_1c5928;
    ctx->pc = 0x1C5ACCu;
label_1c5acc:
    // 0x1c5acc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c5ad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ad8: 0x24c6bf60  addiu       $a2, $a2, -0x40A0
    ctx->pc = 0x1c5ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950752));
    // 0x1c5adc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c5adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ae0: 0x24050152  addiu       $a1, $zero, 0x152
    ctx->pc = 0x1c5ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
    // 0x1c5ae4: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5AE4u;
    {
        const bool branch_taken_0x1c5ae4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C5AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AE4u;
            // 0x1c5ae8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ae4) {
            ctx->pc = 0x1C5B08u;
            goto label_1c5b08;
        }
    }
    ctx->pc = 0x1C5AECu;
    // 0x1c5aec: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c5af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5af4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5af8: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c5af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x1c5afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5b00: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C5B00u;
    ctx->pc = 0x1C5B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B00u;
            // 0x1c5b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5B08u;
label_1c5b08:
    // 0x1c5b08: 0xc07173c  jal         func_1C5CF0
    ctx->pc = 0x1C5B08u;
    SET_GPR_U32(ctx, 31, 0x1C5B10u);
    ctx->pc = 0x1C5CF0u;
    if (runtime->hasFunction(0x1C5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B10u; }
        if (ctx->pc != 0x1C5B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CF0_0x1c5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B10u; }
        if (ctx->pc != 0x1C5B10u) { return; }
    }
    ctx->pc = 0x1C5B10u;
label_1c5b10:
    // 0x1c5b10: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c5b14: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c5b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b1c: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x1c5b20: 0x24c6bf80  addiu       $a2, $a2, -0x4080
    ctx->pc = 0x1c5b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950784));
    // 0x1c5b24: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x1c5b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1c5b28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b2c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5B2Cu;
    {
        const bool branch_taken_0x1c5b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B2Cu;
            // 0x1c5b30: 0x2408ff31  addiu       $t0, $zero, -0xCF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967089));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b2c) {
            ctx->pc = 0x1C5B48u;
            goto label_1c5b48;
        }
    }
    ctx->pc = 0x1C5B34u;
    // 0x1c5b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5b3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5b40: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C5B40u;
    ctx->pc = 0x1C5B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B40u;
            // 0x1c5b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5B48u;
label_1c5b48:
    // 0x1c5b48: 0x1012c0  sll         $v0, $s0, 11
    ctx->pc = 0x1c5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_1c5b4c:
    // 0x1c5b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5b58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B58u;
            // 0x1c5b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5B60u;
}
