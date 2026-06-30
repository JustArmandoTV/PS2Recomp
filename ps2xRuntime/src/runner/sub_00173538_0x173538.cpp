#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173538
// Address: 0x173538 - 0x173668
void sub_00173538_0x173538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173538_0x173538");
#endif

    switch (ctx->pc) {
        case 0x17357cu: goto label_17357c;
        case 0x173588u: goto label_173588;
        case 0x173594u: goto label_173594;
        case 0x1735a4u: goto label_1735a4;
        case 0x1735dcu: goto label_1735dc;
        case 0x1735e8u: goto label_1735e8;
        case 0x1735f4u: goto label_1735f4;
        default: break;
    }

    ctx->pc = 0x173538u;

    // 0x173538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17353c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17353cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173540: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x173540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173544: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173548: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x173548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17354c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17354cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x173550: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x173550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17355c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x17355cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x173560: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x173560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x173564: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x173564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x173568: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x173568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17356c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17356Cu;
    {
        const bool branch_taken_0x17356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17356Cu;
            // 0x173570: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17356c) {
            ctx->pc = 0x1735C8u;
            goto label_1735c8;
        }
    }
    ctx->pc = 0x173574u;
    // 0x173574: 0xc05c046  jal         func_170118
    ctx->pc = 0x173574u;
    SET_GPR_U32(ctx, 31, 0x17357Cu);
    ctx->pc = 0x173578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173574u;
            // 0x173578: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170118u;
    if (runtime->hasFunction(0x170118u)) {
        auto targetFn = runtime->lookupFunction(0x170118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17357Cu; }
        if (ctx->pc != 0x17357Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170118_0x170118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17357Cu; }
        if (ctx->pc != 0x17357Cu) { return; }
    }
    ctx->pc = 0x17357Cu;
label_17357c:
    // 0x17357c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17357cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x173580: 0xc05bfe0  jal         func_16FF80
    ctx->pc = 0x173580u;
    SET_GPR_U32(ctx, 31, 0x173588u);
    ctx->pc = 0x173584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173580u;
            // 0x173584: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF80u;
    if (runtime->hasFunction(0x16FF80u)) {
        auto targetFn = runtime->lookupFunction(0x16FF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173588u; }
        if (ctx->pc != 0x173588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FF80_0x16ff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173588u; }
        if (ctx->pc != 0x173588u) { return; }
    }
    ctx->pc = 0x173588u;
label_173588:
    // 0x173588: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x173588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17358c: 0xc05ba82  jal         func_16EA08
    ctx->pc = 0x17358Cu;
    SET_GPR_U32(ctx, 31, 0x173594u);
    ctx->pc = 0x173590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17358Cu;
            // 0x173590: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EA08u;
    if (runtime->hasFunction(0x16EA08u)) {
        auto targetFn = runtime->lookupFunction(0x16EA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173594u; }
        if (ctx->pc != 0x173594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EA08_0x16ea08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173594u; }
        if (ctx->pc != 0x173594u) { return; }
    }
    ctx->pc = 0x173594u;
label_173594:
    // 0x173594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17359c: 0xc05d1d2  jal         func_174748
    ctx->pc = 0x17359Cu;
    SET_GPR_U32(ctx, 31, 0x1735A4u);
    ctx->pc = 0x1735A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17359Cu;
            // 0x1735a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174748u;
    if (runtime->hasFunction(0x174748u)) {
        auto targetFn = runtime->lookupFunction(0x174748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735A4u; }
        if (ctx->pc != 0x1735A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174748_0x174748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735A4u; }
        if (ctx->pc != 0x1735A4u) { return; }
    }
    ctx->pc = 0x1735A4u;
label_1735a4:
    // 0x1735a4: 0x8e4300a8  lw          $v1, 0xA8($s2)
    ctx->pc = 0x1735a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x1735a8: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x1735a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1735ac: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1735acu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1735b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1735b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1735b4: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x1735b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1735b8: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1735b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1735bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1735BCu;
    {
        const bool branch_taken_0x1735bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735BCu;
            // 0x1735c0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735bc) {
            ctx->pc = 0x173630u;
            goto label_173630;
        }
    }
    ctx->pc = 0x1735C4u;
    // 0x1735c4: 0x0  nop
    ctx->pc = 0x1735c4u;
    // NOP
label_1735c8:
    // 0x1735c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1735c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1735cc: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1735CCu;
    {
        const bool branch_taken_0x1735cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1735cc) {
            ctx->pc = 0x1735D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1735CCu;
            // 0x1735d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173628u;
            goto label_173628;
        }
    }
    ctx->pc = 0x1735D4u;
    // 0x1735d4: 0xc05c064  jal         func_170190
    ctx->pc = 0x1735D4u;
    SET_GPR_U32(ctx, 31, 0x1735DCu);
    ctx->pc = 0x1735D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1735D4u;
            // 0x1735d8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    if (runtime->hasFunction(0x170190u)) {
        auto targetFn = runtime->lookupFunction(0x170190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735DCu; }
        if (ctx->pc != 0x1735DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170190_0x170190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735DCu; }
        if (ctx->pc != 0x1735DCu) { return; }
    }
    ctx->pc = 0x1735DCu;
label_1735dc:
    // 0x1735dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1735dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1735e0: 0xc05c046  jal         func_170118
    ctx->pc = 0x1735E0u;
    SET_GPR_U32(ctx, 31, 0x1735E8u);
    ctx->pc = 0x1735E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1735E0u;
            // 0x1735e4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170118u;
    if (runtime->hasFunction(0x170118u)) {
        auto targetFn = runtime->lookupFunction(0x170118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735E8u; }
        if (ctx->pc != 0x1735E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170118_0x170118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735E8u; }
        if (ctx->pc != 0x1735E8u) { return; }
    }
    ctx->pc = 0x1735E8u;
label_1735e8:
    // 0x1735e8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1735ec: 0xc05c052  jal         func_170148
    ctx->pc = 0x1735ECu;
    SET_GPR_U32(ctx, 31, 0x1735F4u);
    ctx->pc = 0x1735F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1735ECu;
            // 0x1735f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170148u;
    if (runtime->hasFunction(0x170148u)) {
        auto targetFn = runtime->lookupFunction(0x170148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735F4u; }
        if (ctx->pc != 0x1735F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170148_0x170148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735F4u; }
        if (ctx->pc != 0x1735F4u) { return; }
    }
    ctx->pc = 0x1735F4u;
label_1735f4:
    // 0x1735f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1735f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1735f8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1735f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1735fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1735FCu;
    {
        const bool branch_taken_0x1735fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1735fc) {
            ctx->pc = 0x173600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1735FCu;
            // 0x173600: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x173604u;
            goto label_173604;
        }
    }
    ctx->pc = 0x173604u;
label_173604:
    // 0x173604: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x173608: 0x1812  mflo        $v1
    ctx->pc = 0x173608u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x17360c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x17360cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x173610: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x173610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x173614: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x173618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17361c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17361Cu;
    {
        const bool branch_taken_0x17361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17361Cu;
            // 0x173620: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17361c) {
            ctx->pc = 0x173630u;
            goto label_173630;
        }
    }
    ctx->pc = 0x173624u;
    // 0x173624: 0x0  nop
    ctx->pc = 0x173624u;
    // NOP
label_173628:
    // 0x173628: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x173628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x17362c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17362cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_173630:
    // 0x173630: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x173630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x173634: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x173638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17363c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173644: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x173644u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x173648: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17364c: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x17364cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x173650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173654: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x173654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x173658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x173658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17365c: 0x3e00008  jr          $ra
    ctx->pc = 0x17365Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17365Cu;
            // 0x173660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173664u;
    // 0x173664: 0x0  nop
    ctx->pc = 0x173664u;
    // NOP
}
