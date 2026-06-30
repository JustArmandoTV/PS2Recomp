#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F160
// Address: 0x26f160 - 0x26f6a0
void sub_0026F160_0x26f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F160_0x26f160");
#endif

    switch (ctx->pc) {
        case 0x26f1ecu: goto label_26f1ec;
        case 0x26f240u: goto label_26f240;
        case 0x26f284u: goto label_26f284;
        case 0x26f2dcu: goto label_26f2dc;
        case 0x26f324u: goto label_26f324;
        case 0x26f36cu: goto label_26f36c;
        case 0x26f3c4u: goto label_26f3c4;
        case 0x26f410u: goto label_26f410;
        case 0x26f45cu: goto label_26f45c;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f538u: goto label_26f538;
        case 0x26f584u: goto label_26f584;
        case 0x26f5d4u: goto label_26f5d4;
        case 0x26f61cu: goto label_26f61c;
        case 0x26f638u: goto label_26f638;
        case 0x26f658u: goto label_26f658;
        default: break;
    }

    ctx->pc = 0x26f160u;

    // 0x26f160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26f164: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26f168: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26f16c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26f170: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26f174: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26f178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26f178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26f17c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26f17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f184: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26f184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f188: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x26f188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x26f18c: 0x8c940010  lw          $s4, 0x10($a0)
    ctx->pc = 0x26f18cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26f190: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x26f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x26f194: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x26f194u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26f198: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x26f198u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f19c: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x26f19cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x26f1a0: 0x2ea10020  sltiu       $at, $s5, 0x20
    ctx->pc = 0x26f1a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x26f1a4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x26F1A4u;
    {
        const bool branch_taken_0x26f1a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1A4u;
            // 0x26f1a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1a4) {
            ctx->pc = 0x26F1F8u;
            goto label_26f1f8;
        }
    }
    ctx->pc = 0x26F1ACu;
    // 0x26f1ac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f1b0: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x26f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x26f1b4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x26f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f1b8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26f1bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f1c0: 0xa044ffff  sb          $a0, -0x1($v0)
    ctx->pc = 0x26f1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 4));
    // 0x26f1c4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f1c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f1cc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f1d0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f1d4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f1d8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f1dc: 0x14400110  bnez        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x26F1DCu;
    {
        const bool branch_taken_0x26f1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1DCu;
            // 0x26f1e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1dc) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F1E4u;
    // 0x26f1e4: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F1E4u;
    SET_GPR_U32(ctx, 31, 0x26F1ECu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F1ECu; }
        if (ctx->pc != 0x26F1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F1ECu; }
        if (ctx->pc != 0x26F1ECu) { return; }
    }
    ctx->pc = 0x26F1ECu;
label_26f1ec:
    // 0x26f1ec: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x26F1ECu;
    {
        const bool branch_taken_0x26f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f1ec) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F1F4u;
    // 0x26f1f4: 0x0  nop
    ctx->pc = 0x26f1f4u;
    // NOP
label_26f1f8:
    // 0x26f1f8: 0x2ea10100  sltiu       $at, $s5, 0x100
    ctx->pc = 0x26f1f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x26f1fc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x26F1FCu;
    {
        const bool branch_taken_0x26f1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f1fc) {
            ctx->pc = 0x26F290u;
            goto label_26f290;
        }
    }
    ctx->pc = 0x26F204u;
    // 0x26f204: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f208: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x26f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f20c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26f210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f214: 0xa055ffff  sb          $s5, -0x1($v0)
    ctx->pc = 0x26f214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 21));
    // 0x26f218: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f21c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f220: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f224: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f228: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f22c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f230: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F230u;
    {
        const bool branch_taken_0x26f230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F230u;
            // 0x26f234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f230) {
            ctx->pc = 0x26F240u;
            goto label_26f240;
        }
    }
    ctx->pc = 0x26F238u;
    // 0x26f238: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F238u;
    SET_GPR_U32(ctx, 31, 0x26F240u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F240u; }
        if (ctx->pc != 0x26F240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F240u; }
        if (ctx->pc != 0x26F240u) { return; }
    }
    ctx->pc = 0x26F240u;
label_26f240:
    // 0x26f240: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f244: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f248: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x26f248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26f24c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f250: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f250u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f254: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f258: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f25c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f264: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f268: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f26c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f270: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f274: 0x144000ea  bnez        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x26F274u;
    {
        const bool branch_taken_0x26f274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F274u;
            // 0x26f278: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f274) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F27Cu;
    // 0x26f27c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F27Cu;
    SET_GPR_U32(ctx, 31, 0x26F284u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F284u; }
        if (ctx->pc != 0x26F284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F284u; }
        if (ctx->pc != 0x26F284u) { return; }
    }
    ctx->pc = 0x26F284u;
label_26f284:
    // 0x26f284: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x26F284u;
    {
        const bool branch_taken_0x26f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f284) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F28Cu;
    // 0x26f28c: 0x0  nop
    ctx->pc = 0x26f28cu;
    // NOP
label_26f290:
    // 0x26f290: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26f290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26f294: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x26f294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x26f298: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x26F298u;
    {
        const bool branch_taken_0x26f298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f298) {
            ctx->pc = 0x26F378u;
            goto label_26f378;
        }
    }
    ctx->pc = 0x26F2A0u;
    // 0x26f2a0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f2a4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x26f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f2a8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26f2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f2b0: 0xa055ffff  sb          $s5, -0x1($v0)
    ctx->pc = 0x26f2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 21));
    // 0x26f2b4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f2b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f2bc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f2c0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f2c4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f2c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f2cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F2CCu;
    {
        const bool branch_taken_0x26f2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F2CCu;
            // 0x26f2d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2cc) {
            ctx->pc = 0x26F2E0u;
            goto label_26f2e0;
        }
    }
    ctx->pc = 0x26F2D4u;
    // 0x26f2d4: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F2D4u;
    SET_GPR_U32(ctx, 31, 0x26F2DCu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F2DCu; }
        if (ctx->pc != 0x26F2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F2DCu; }
        if (ctx->pc != 0x26F2DCu) { return; }
    }
    ctx->pc = 0x26F2DCu;
label_26f2dc:
    // 0x26f2dc: 0x0  nop
    ctx->pc = 0x26f2dcu;
    // NOP
label_26f2e0:
    // 0x26f2e0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f2e4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f2e8: 0x152a03  sra         $a1, $s5, 8
    ctx->pc = 0x26f2e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 21), 8));
    // 0x26f2ec: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f2f0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f2f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f2f8: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f2fc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f304: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f304u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f308: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f30c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f310: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f314: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F314u;
    {
        const bool branch_taken_0x26f314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F314u;
            // 0x26f318: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f314) {
            ctx->pc = 0x26F328u;
            goto label_26f328;
        }
    }
    ctx->pc = 0x26F31Cu;
    // 0x26f31c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F31Cu;
    SET_GPR_U32(ctx, 31, 0x26F324u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F324u; }
        if (ctx->pc != 0x26F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F324u; }
        if (ctx->pc != 0x26F324u) { return; }
    }
    ctx->pc = 0x26F324u;
label_26f324:
    // 0x26f324: 0x0  nop
    ctx->pc = 0x26f324u;
    // NOP
label_26f328:
    // 0x26f328: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f32c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f330: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x26f330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x26f334: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f338: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f338u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f33c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f340: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f344: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f34c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f350: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f354: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f358: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f35c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x26F35Cu;
    {
        const bool branch_taken_0x26f35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F35Cu;
            // 0x26f360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f35c) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F364u;
    // 0x26f364: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F364u;
    SET_GPR_U32(ctx, 31, 0x26F36Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F36Cu; }
        if (ctx->pc != 0x26F36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F36Cu; }
        if (ctx->pc != 0x26F36Cu) { return; }
    }
    ctx->pc = 0x26F36Cu;
label_26f36c:
    // 0x26f36c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x26F36Cu;
    {
        const bool branch_taken_0x26f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f36c) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F374u;
    // 0x26f374: 0x0  nop
    ctx->pc = 0x26f374u;
    // NOP
label_26f378:
    // 0x26f378: 0x3c010100  lui         $at, 0x100
    ctx->pc = 0x26f378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)256 << 16));
    // 0x26f37c: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x26f37cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x26f380: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x26F380u;
    {
        const bool branch_taken_0x26f380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f380) {
            ctx->pc = 0x26F4B0u;
            goto label_26f4b0;
        }
    }
    ctx->pc = 0x26F388u;
    // 0x26f388: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f38c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x26f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f390: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26f390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26f394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f398: 0xa055ffff  sb          $s5, -0x1($v0)
    ctx->pc = 0x26f398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 21));
    // 0x26f39c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f3a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f3a4: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f3a8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f3ac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f3b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f3b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F3B4u;
    {
        const bool branch_taken_0x26f3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F3B4u;
            // 0x26f3b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3b4) {
            ctx->pc = 0x26F3C8u;
            goto label_26f3c8;
        }
    }
    ctx->pc = 0x26F3BCu;
    // 0x26f3bc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F3BCu;
    SET_GPR_U32(ctx, 31, 0x26F3C4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F3C4u; }
        if (ctx->pc != 0x26F3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F3C4u; }
        if (ctx->pc != 0x26F3C4u) { return; }
    }
    ctx->pc = 0x26F3C4u;
label_26f3c4:
    // 0x26f3c4: 0x0  nop
    ctx->pc = 0x26f3c4u;
    // NOP
label_26f3c8:
    // 0x26f3c8: 0x32a2ff00  andi        $v0, $s5, 0xFF00
    ctx->pc = 0x26f3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
    // 0x26f3cc: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x26f3ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x26f3d0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f3d4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f3d8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f3dc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f3e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f3e4: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f3e8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f3ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f3f0: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f3f4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f3f8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f3fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F400u;
    {
        const bool branch_taken_0x26f400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F400u;
            // 0x26f404: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f400) {
            ctx->pc = 0x26F410u;
            goto label_26f410;
        }
    }
    ctx->pc = 0x26F408u;
    // 0x26f408: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F408u;
    SET_GPR_U32(ctx, 31, 0x26F410u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F410u; }
        if (ctx->pc != 0x26F410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F410u; }
        if (ctx->pc != 0x26F410u) { return; }
    }
    ctx->pc = 0x26F410u;
label_26f410:
    // 0x26f410: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x26f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x26f414: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x26f414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x26f418: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f41c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x26f41cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x26f420: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f424: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f428: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f42c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f430: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f434: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f43c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f440: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f444: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f448: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f44c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F44Cu;
    {
        const bool branch_taken_0x26f44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F44Cu;
            // 0x26f450: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f44c) {
            ctx->pc = 0x26F460u;
            goto label_26f460;
        }
    }
    ctx->pc = 0x26F454u;
    // 0x26f454: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F454u;
    SET_GPR_U32(ctx, 31, 0x26F45Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F45Cu; }
        if (ctx->pc != 0x26F45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F45Cu; }
        if (ctx->pc != 0x26F45Cu) { return; }
    }
    ctx->pc = 0x26F45Cu;
label_26f45c:
    // 0x26f45c: 0x0  nop
    ctx->pc = 0x26f45cu;
    // NOP
label_26f460:
    // 0x26f460: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f464: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f468: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x26f468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x26f46c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f470: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f470u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f474: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f478: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f47c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f484: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f484u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f488: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f48c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f490: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f494: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x26F494u;
    {
        const bool branch_taken_0x26f494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F494u;
            // 0x26f498: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f494) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F49Cu;
    // 0x26f49c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F49Cu;
    SET_GPR_U32(ctx, 31, 0x26F4A4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4A4u; }
        if (ctx->pc != 0x26F4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4A4u; }
        if (ctx->pc != 0x26F4A4u) { return; }
    }
    ctx->pc = 0x26F4A4u;
label_26f4a4:
    // 0x26f4a4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x26F4A4u;
    {
        const bool branch_taken_0x26f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4a4) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F4ACu;
    // 0x26f4ac: 0x0  nop
    ctx->pc = 0x26f4acu;
    // NOP
label_26f4b0:
    // 0x26f4b0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f4b4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f4b8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26f4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f4c0: 0xa055ffff  sb          $s5, -0x1($v0)
    ctx->pc = 0x26f4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 21));
    // 0x26f4c4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f4c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f4cc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f4d0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f4d4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f4d8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f4dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F4DCu;
    {
        const bool branch_taken_0x26f4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F4DCu;
            // 0x26f4e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4dc) {
            ctx->pc = 0x26F4F0u;
            goto label_26f4f0;
        }
    }
    ctx->pc = 0x26F4E4u;
    // 0x26f4e4: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F4E4u;
    SET_GPR_U32(ctx, 31, 0x26F4ECu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4ECu; }
        if (ctx->pc != 0x26F4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F4ECu; }
        if (ctx->pc != 0x26F4ECu) { return; }
    }
    ctx->pc = 0x26F4ECu;
label_26f4ec:
    // 0x26f4ec: 0x0  nop
    ctx->pc = 0x26f4ecu;
    // NOP
label_26f4f0:
    // 0x26f4f0: 0x32a2ff00  andi        $v0, $s5, 0xFF00
    ctx->pc = 0x26f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65280);
    // 0x26f4f4: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x26f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26f4f8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f4fc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f500: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f504: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f508: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f50c: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f50cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f510: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f518: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f51c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f520: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f524: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F528u;
    {
        const bool branch_taken_0x26f528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F528u;
            // 0x26f52c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f528) {
            ctx->pc = 0x26F538u;
            goto label_26f538;
        }
    }
    ctx->pc = 0x26F530u;
    // 0x26f530: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F530u;
    SET_GPR_U32(ctx, 31, 0x26F538u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F538u; }
        if (ctx->pc != 0x26F538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F538u; }
        if (ctx->pc != 0x26F538u) { return; }
    }
    ctx->pc = 0x26F538u;
label_26f538:
    // 0x26f538: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x26f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x26f53c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x26f53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x26f540: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f544: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x26f544u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x26f548: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f54c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f550: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f554: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f558: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f558u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f55c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f564: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f568: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f56c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f570: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f574: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F574u;
    {
        const bool branch_taken_0x26f574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F574u;
            // 0x26f578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f574) {
            ctx->pc = 0x26F588u;
            goto label_26f588;
        }
    }
    ctx->pc = 0x26F57Cu;
    // 0x26f57c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F57Cu;
    SET_GPR_U32(ctx, 31, 0x26F584u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F584u; }
        if (ctx->pc != 0x26F584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F584u; }
        if (ctx->pc != 0x26F584u) { return; }
    }
    ctx->pc = 0x26F584u;
label_26f584:
    // 0x26f584: 0x0  nop
    ctx->pc = 0x26f584u;
    // NOP
label_26f588:
    // 0x26f588: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x26f588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x26f58c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x26f58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x26f590: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f594: 0x22e02  srl         $a1, $v0, 24
    ctx->pc = 0x26f594u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x26f598: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f59c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f5a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f5a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f5a8: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f5ac: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f5b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f5b4: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f5b8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f5bc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f5c0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f5c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F5C4u;
    {
        const bool branch_taken_0x26f5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F5C4u;
            // 0x26f5c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f5c4) {
            ctx->pc = 0x26F5D8u;
            goto label_26f5d8;
        }
    }
    ctx->pc = 0x26F5CCu;
    // 0x26f5cc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F5CCu;
    SET_GPR_U32(ctx, 31, 0x26F5D4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5D4u; }
        if (ctx->pc != 0x26F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F5D4u; }
        if (ctx->pc != 0x26F5D4u) { return; }
    }
    ctx->pc = 0x26F5D4u;
label_26f5d4:
    // 0x26f5d4: 0x0  nop
    ctx->pc = 0x26f5d4u;
    // NOP
label_26f5d8:
    // 0x26f5d8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26f5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f5dc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f5e0: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x26f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x26f5e4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26f5e8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f5ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f5f0: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26f5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26f5f4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f5f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f5fc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x26f600: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26f600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26f604: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26f608: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26f608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f60c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F60Cu;
    {
        const bool branch_taken_0x26f60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F60Cu;
            // 0x26f610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f60c) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F614u;
    // 0x26f614: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F614u;
    SET_GPR_U32(ctx, 31, 0x26F61Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F61Cu; }
        if (ctx->pc != 0x26F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F61Cu; }
        if (ctx->pc != 0x26F61Cu) { return; }
    }
    ctx->pc = 0x26F61Cu;
label_26f61c:
    // 0x26f61c: 0x0  nop
    ctx->pc = 0x26f61cu;
    // NOP
label_26f620:
    // 0x26f620: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x26f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x26f624: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x26f624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f628: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x26F628u;
    {
        const bool branch_taken_0x26f628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F628u;
            // 0x26f62c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f628) {
            ctx->pc = 0x26F670u;
            goto label_26f670;
        }
    }
    ctx->pc = 0x26F630u;
    // 0x26f630: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x26f630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f634: 0x0  nop
    ctx->pc = 0x26f634u;
    // NOP
label_26f638:
    // 0x26f638: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x26f638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x26f63c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F63Cu;
    {
        const bool branch_taken_0x26f63c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f63c) {
            ctx->pc = 0x26F658u;
            goto label_26f658;
        }
    }
    ctx->pc = 0x26F644u;
    // 0x26f644: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x26f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x26f648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F648u;
    {
        const bool branch_taken_0x26f648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F648u;
            // 0x26f64c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f648) {
            ctx->pc = 0x26F658u;
            goto label_26f658;
        }
    }
    ctx->pc = 0x26F650u;
    // 0x26f650: 0xc09b704  jal         func_26DC10
    ctx->pc = 0x26F650u;
    SET_GPR_U32(ctx, 31, 0x26F658u);
    ctx->pc = 0x26F654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F650u;
            // 0x26f654: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DC10u;
    if (runtime->hasFunction(0x26DC10u)) {
        auto targetFn = runtime->lookupFunction(0x26DC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F658u; }
        if (ctx->pc != 0x26F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DC10_0x26dc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F658u; }
        if (ctx->pc != 0x26F658u) { return; }
    }
    ctx->pc = 0x26F658u;
label_26f658:
    // 0x26f658: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x26f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x26f65c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26f65cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26f660: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x26f660u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x26f664: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x26f664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26f668: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x26F668u;
    {
        const bool branch_taken_0x26f668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F668u;
            // 0x26f66c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f668) {
            ctx->pc = 0x26F638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f638;
        }
    }
    ctx->pc = 0x26F670u;
label_26f670:
    // 0x26f670: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x26f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26f674: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26f674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f678: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26f678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f67c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26f67cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f688: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26f68c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26f68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f690: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26f690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26f694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26f694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f698: 0x3e00008  jr          $ra
    ctx->pc = 0x26F698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F698u;
            // 0x26f69c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F6A0u;
}
