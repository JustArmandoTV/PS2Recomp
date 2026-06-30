#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7FD0
// Address: 0x1b7fd0 - 0x1b8150
void sub_001B7FD0_0x1b7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7FD0_0x1b7fd0");
#endif

    switch (ctx->pc) {
        case 0x1b8044u: goto label_1b8044;
        case 0x1b8068u: goto label_1b8068;
        case 0x1b8100u: goto label_1b8100;
        default: break;
    }

    ctx->pc = 0x1b7fd0u;

    // 0x1b7fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7fd4: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x1b7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1b7fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7fdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b7fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b7fe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b7fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7fe8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b7fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b7fec: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1b7fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ff0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b7ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b7ff4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b7ff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ff8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b7ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b7ffc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1b7ffcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8000: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b8000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b8004: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b8004u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8008: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b8008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b800c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1b800cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8010: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b8010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b8014: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B8014u;
    {
        const bool branch_taken_0x1b8014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8014) {
            ctx->pc = 0x1B8018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8014u;
            // 0x1b8018: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B801Cu;
            goto label_1b801c;
        }
    }
    ctx->pc = 0x1B801Cu;
label_1b801c:
    // 0x1b801c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8020: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b8020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8024: 0x8e820ac4  lw          $v0, 0xAC4($s4)
    ctx->pc = 0x1b8024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2756)));
    // 0x1b8028: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1b8028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b802c: 0x26900d88  addiu       $s0, $s4, 0xD88
    ctx->pc = 0x1b802cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3464));
    // 0x1b8030: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x1b8030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b8034: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b8034u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8038: 0x8812  mflo        $s1
    ctx->pc = 0x1b8038u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1b803c: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B803Cu;
    SET_GPR_U32(ctx, 31, 0x1B8044u);
    ctx->pc = 0x1B8040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B803Cu;
            // 0x1b8040: 0x2d13021  addu        $a2, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8044u; }
        if (ctx->pc != 0x1B8044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8044u; }
        if (ctx->pc != 0x1B8044u) { return; }
    }
    ctx->pc = 0x1B8044u;
label_1b8044:
    // 0x1b8044: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8044u;
    {
        const bool branch_taken_0x1b8044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8044) {
            ctx->pc = 0x1B8048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8044u;
            // 0x1b8048: 0x2d13023  subu        $a2, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8058u;
            goto label_1b8058;
        }
    }
    ctx->pc = 0x1B804Cu;
    // 0x1b804c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B804Cu;
    {
        const bool branch_taken_0x1b804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B804Cu;
            // 0x1b8050: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b804c) {
            ctx->pc = 0x1B8124u;
            goto label_1b8124;
        }
    }
    ctx->pc = 0x1B8054u;
    // 0x1b8054: 0x0  nop
    ctx->pc = 0x1b8054u;
    // NOP
label_1b8058:
    // 0x1b8058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b805c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b805cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8060: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B8060u;
    SET_GPR_U32(ctx, 31, 0x1B8068u);
    ctx->pc = 0x1B8064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8060u;
            // 0x1b8064: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8068u; }
        if (ctx->pc != 0x1B8068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8068u; }
        if (ctx->pc != 0x1B8068u) { return; }
    }
    ctx->pc = 0x1B8068u;
label_1b8068:
    // 0x1b8068: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8068u;
    {
        const bool branch_taken_0x1b8068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8068u;
            // 0x1b806c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8068) {
            ctx->pc = 0x1B80A0u;
            goto label_1b80a0;
        }
    }
    ctx->pc = 0x1B8070u;
    // 0x1b8070: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1b8070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1b8074: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x1b8074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1b8078: 0x5072002b  beql        $v1, $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B8078u;
    {
        const bool branch_taken_0x1b8078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1b8078) {
            ctx->pc = 0x1B807Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8078u;
            // 0x1b807c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8128u;
            goto label_1b8128;
        }
    }
    ctx->pc = 0x1B8080u;
    // 0x1b8080: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x1b8080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x1b8084: 0x50520028  beql        $v0, $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B8084u;
    {
        const bool branch_taken_0x1b8084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1b8084) {
            ctx->pc = 0x1B8088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8084u;
            // 0x1b8088: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8128u;
            goto label_1b8128;
        }
    }
    ctx->pc = 0x1B808Cu;
    // 0x1b808c: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x1b808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x1b8090: 0xae1202c0  sw          $s2, 0x2C0($s0)
    ctx->pc = 0x1b8090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 18));
    // 0x1b8094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8098: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1B8098u;
    {
        const bool branch_taken_0x1b8098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8098u;
            // 0x1b809c: 0xae0202bc  sw          $v0, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8098) {
            ctx->pc = 0x1B8124u;
            goto label_1b8124;
        }
    }
    ctx->pc = 0x1B80A0u;
label_1b80a0:
    // 0x1b80a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b80a4: 0x3404ea24  ori         $a0, $zero, 0xEA24
    ctx->pc = 0x1b80a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x1b80a8: 0x8c439b38  lw          $v1, -0x64C8($v0)
    ctx->pc = 0x1b80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941496)));
    // 0x1b80ac: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B80ACu;
    {
        const bool branch_taken_0x1b80ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B80B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80ACu;
            // 0x1b80b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80ac) {
            ctx->pc = 0x1B80D0u;
            goto label_1b80d0;
        }
    }
    ctx->pc = 0x1B80B4u;
    // 0x1b80b4: 0x8e820920  lw          $v0, 0x920($s4)
    ctx->pc = 0x1b80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2336)));
    // 0x1b80b8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1b80b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b80bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B80BCu;
    {
        const bool branch_taken_0x1b80bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b80bc) {
            ctx->pc = 0x1B80C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80BCu;
            // 0x1b80c0: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B80D4u;
            goto label_1b80d4;
        }
    }
    ctx->pc = 0x1B80C4u;
    // 0x1b80c4: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x1b80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1b80c8: 0x384203e8  xori        $v0, $v0, 0x3E8
    ctx->pc = 0x1b80c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1000);
    // 0x1b80cc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1b80ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b80d0:
    // 0x1b80d0: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x1b80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_1b80d4:
    // 0x1b80d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b80d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b80d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B80D8u;
    {
        const bool branch_taken_0x1b80d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B80DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80D8u;
            // 0x1b80dc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80d8) {
            ctx->pc = 0x1B80F0u;
            goto label_1b80f0;
        }
    }
    ctx->pc = 0x1B80E0u;
    // 0x1b80e0: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x1b80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x1b80e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B80E4u;
    {
        const bool branch_taken_0x1b80e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80E4u;
            // 0x1b80e8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80e4) {
            ctx->pc = 0x1B8114u;
            goto label_1b8114;
        }
    }
    ctx->pc = 0x1B80ECu;
    // 0x1b80ec: 0x0  nop
    ctx->pc = 0x1b80ecu;
    // NOP
label_1b80f0:
    // 0x1b80f0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b80f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1b80f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80f8: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B80F8u;
    SET_GPR_U32(ctx, 31, 0x1B8100u);
    ctx->pc = 0x1B80FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80F8u;
            // 0x1b80fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8100u; }
        if (ctx->pc != 0x1B8100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8100u; }
        if (ctx->pc != 0x1B8100u) { return; }
    }
    ctx->pc = 0x1B8100u;
label_1b8100:
    // 0x1b8100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8100u;
    {
        const bool branch_taken_0x1b8100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8100u;
            // 0x1b8104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8100) {
            ctx->pc = 0x1B8110u;
            goto label_1b8110;
        }
    }
    ctx->pc = 0x1B8108u;
    // 0x1b8108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8108u;
    {
        const bool branch_taken_0x1b8108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B810Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8108u;
            // 0x1b810c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8108) {
            ctx->pc = 0x1B8114u;
            goto label_1b8114;
        }
    }
    ctx->pc = 0x1B8110u;
label_1b8110:
    // 0x1b8110: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b8110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1b8114:
    // 0x1b8114: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1b8114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1b8118: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b811c: 0xae1202c8  sw          $s2, 0x2C8($s0)
    ctx->pc = 0x1b811cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 18));
    // 0x1b8120: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x1b8120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_1b8124:
    // 0x1b8124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8128:
    // 0x1b8128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b812c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b812cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8130: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b8130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8134: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b8134u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8138: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b8138u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b813c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b813cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8140: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b8140u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b8144: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b8144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8148: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8148u;
            // 0x1b814c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8150u;
}
