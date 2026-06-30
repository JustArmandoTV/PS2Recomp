#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F190
// Address: 0x13f190 - 0x13f340
void sub_0013F190_0x13f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F190_0x13f190");
#endif

    switch (ctx->pc) {
        case 0x13f1ecu: goto label_13f1ec;
        case 0x13f248u: goto label_13f248;
        case 0x13f288u: goto label_13f288;
        default: break;
    }

    ctx->pc = 0x13f190u;

    // 0x13f190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f194: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13f194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13f198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f19c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f1a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f1a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f1a8: 0x8c8556f4  lw          $a1, 0x56F4($a0)
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22260)));
    // 0x13f1ac: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x13f1acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x13f1b0: 0x8c6356b4  lw          $v1, 0x56B4($v1)
    ctx->pc = 0x13f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22196)));
    // 0x13f1b4: 0x261056f0  addiu       $s0, $s0, 0x56F0
    ctx->pc = 0x13f1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22256));
    // 0x13f1b8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x13f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13f1bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13f1c0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13f1c4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x13f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x13f1c8: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x13F1C8u;
    {
        const bool branch_taken_0x13f1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1C8u;
            // 0x13f1cc: 0x24910018  addiu       $s1, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1c8) {
            ctx->pc = 0x13F324u;
            goto label_13f324;
        }
    }
    ctx->pc = 0x13F1D0u;
    // 0x13f1d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13f1d4: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x13f1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x13f1d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13f1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1dc: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x13f1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x13f1e0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x13f1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13f1e4: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x13F1E4u;
    SET_GPR_U32(ctx, 31, 0x13F1ECu);
    ctx->pc = 0x13F1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1E4u;
            // 0x13f1e8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F1ECu; }
        if (ctx->pc != 0x13F1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F1ECu; }
        if (ctx->pc != 0x13F1ECu) { return; }
    }
    ctx->pc = 0x13F1ECu;
label_13f1ec:
    // 0x13f1ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f1f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f1f4: 0xa460573c  sh          $zero, 0x573C($v1)
    ctx->pc = 0x13f1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22332), (uint16_t)GPR_U32(ctx, 0));
    // 0x13f1f8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13f1fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f200: 0xa464573e  sh          $a0, 0x573E($v1)
    ctx->pc = 0x13f200u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22334), (uint16_t)GPR_U32(ctx, 4));
    // 0x13f204: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f208: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13f208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13f20c: 0x9466573a  lhu         $a2, 0x573A($v1)
    ctx->pc = 0x13f20cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22330)));
    // 0x13f210: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13f210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13f214: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f218: 0xa4a6573a  sh          $a2, 0x573A($a1)
    ctx->pc = 0x13f218u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22330), (uint16_t)GPR_U32(ctx, 6));
    // 0x13f21c: 0x94635738  lhu         $v1, 0x5738($v1)
    ctx->pc = 0x13f21cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22328)));
    // 0x13f220: 0x9484573a  lhu         $a0, 0x573A($a0)
    ctx->pc = 0x13f220u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22330)));
    // 0x13f224: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F224u;
    {
        const bool branch_taken_0x13f224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13f224) {
            ctx->pc = 0x13F228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F224u;
            // 0x13f228: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F238u;
            goto label_13f238;
        }
    }
    ctx->pc = 0x13F22Cu;
    // 0x13f22c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f230: 0xa460573a  sh          $zero, 0x573A($v1)
    ctx->pc = 0x13f230u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22330), (uint16_t)GPR_U32(ctx, 0));
    // 0x13f234: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13f238:
    // 0x13f238: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F238u;
    {
        const bool branch_taken_0x13f238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f238) {
            ctx->pc = 0x13F23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F238u;
            // 0x13f23c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F24Cu;
            goto label_13f24c;
        }
    }
    ctx->pc = 0x13F240u;
    // 0x13f240: 0xc0575b4  jal         func_15D6D0
    ctx->pc = 0x13F240u;
    SET_GPR_U32(ctx, 31, 0x13F248u);
    ctx->pc = 0x13F244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F240u;
            // 0x13f244: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D6D0u;
    if (runtime->hasFunction(0x15D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x15D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F248u; }
        if (ctx->pc != 0x13F248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D6D0_0x15d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F248u; }
        if (ctx->pc != 0x13F248u) { return; }
    }
    ctx->pc = 0x13F248u;
label_13f248:
    // 0x13f248: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13f248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13f24c:
    // 0x13f24c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f250: 0x8c645748  lw          $a0, 0x5748($v1)
    ctx->pc = 0x13f250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22344)));
    // 0x13f254: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x13f254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x13f258: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x13f258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x13f25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f260: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x13f260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x13f264: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x13f264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x13f268: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x13f268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f26c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13F26Cu;
    {
        const bool branch_taken_0x13f26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F26Cu;
            // 0x13f270: 0xae250004  sw          $a1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f26c) {
            ctx->pc = 0x13F2A0u;
            goto label_13f2a0;
        }
    }
    ctx->pc = 0x13F274u;
    // 0x13f274: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f278: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f27c: 0x8c455750  lw          $a1, 0x5750($v0)
    ctx->pc = 0x13f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22352)));
    // 0x13f280: 0xc04fcd0  jal         func_13F340
    ctx->pc = 0x13F280u;
    SET_GPR_U32(ctx, 31, 0x13F288u);
    ctx->pc = 0x13F284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F280u;
            // 0x13f284: 0x8c64574c  lw          $a0, 0x574C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22348)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F340u;
    if (runtime->hasFunction(0x13F340u)) {
        auto targetFn = runtime->lookupFunction(0x13F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F288u; }
        if (ctx->pc != 0x13F288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F340_0x13f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F288u; }
        if (ctx->pc != 0x13F288u) { return; }
    }
    ctx->pc = 0x13F288u;
label_13f288:
    // 0x13f288: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f28c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13f290: 0xac605748  sw          $zero, 0x5748($v1)
    ctx->pc = 0x13f290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22344), GPR_U32(ctx, 0));
    // 0x13f294: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f298: 0xac80574c  sw          $zero, 0x574C($a0)
    ctx->pc = 0x13f298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22348), GPR_U32(ctx, 0));
    // 0x13f29c: 0xac605750  sw          $zero, 0x5750($v1)
    ctx->pc = 0x13f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22352), GPR_U32(ctx, 0));
label_13f2a0:
    // 0x13f2a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f2a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f2a8: 0xa46056da  sh          $zero, 0x56DA($v1)
    ctx->pc = 0x13f2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22234), (uint16_t)GPR_U32(ctx, 0));
    // 0x13f2ac: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x13f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x13f2b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f2b4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13f2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13f2b8: 0xa46456d6  sh          $a0, 0x56D6($v1)
    ctx->pc = 0x13f2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22230), (uint16_t)GPR_U32(ctx, 4));
    // 0x13f2bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f2c0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13f2c4: 0x946856d6  lhu         $t0, 0x56D6($v1)
    ctx->pc = 0x13f2c4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22230)));
    // 0x13f2c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f2cc: 0xacc8582c  sw          $t0, 0x582C($a2)
    ctx->pc = 0x13f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22572), GPR_U32(ctx, 8));
    // 0x13f2d0: 0x906756d5  lbu         $a3, 0x56D5($v1)
    ctx->pc = 0x13f2d0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22229)));
    // 0x13f2d4: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x13f2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13f2d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f2dc: 0xa0a656d5  sb          $a2, 0x56D5($a1)
    ctx->pc = 0x13f2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22229), (uint8_t)GPR_U32(ctx, 6));
    // 0x13f2e0: 0x906356d4  lbu         $v1, 0x56D4($v1)
    ctx->pc = 0x13f2e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22228)));
    // 0x13f2e4: 0x908456d5  lbu         $a0, 0x56D5($a0)
    ctx->pc = 0x13f2e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22229)));
    // 0x13f2e8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F2E8u;
    {
        const bool branch_taken_0x13f2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13f2e8) {
            ctx->pc = 0x13F2F8u;
            goto label_13f2f8;
        }
    }
    ctx->pc = 0x13F2F0u;
    // 0x13f2f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f2f4: 0xa06056d5  sb          $zero, 0x56D5($v1)
    ctx->pc = 0x13f2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22229), (uint8_t)GPR_U32(ctx, 0));
label_13f2f8:
    // 0x13f2f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f2fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13f300: 0x906656d5  lbu         $a2, 0x56D5($v1)
    ctx->pc = 0x13f300u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22229)));
    // 0x13f304: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13f304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13f308: 0xaf848030  sw          $a0, -0x7FD0($gp)
    ctx->pc = 0x13f308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934576), GPR_U32(ctx, 4));
    // 0x13f30c: 0x24a556b4  addiu       $a1, $a1, 0x56B4
    ctx->pc = 0x13f30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22196));
    // 0x13f310: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x13f310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13f314: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f318: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13f31c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f320: 0xac6456cc  sw          $a0, 0x56CC($v1)
    ctx->pc = 0x13f320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22220), GPR_U32(ctx, 4));
label_13f324:
    // 0x13f324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f330: 0x3e00008  jr          $ra
    ctx->pc = 0x13F330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F330u;
            // 0x13f334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F338u;
    // 0x13f338: 0x0  nop
    ctx->pc = 0x13f338u;
    // NOP
    // 0x13f33c: 0x0  nop
    ctx->pc = 0x13f33cu;
    // NOP
}
