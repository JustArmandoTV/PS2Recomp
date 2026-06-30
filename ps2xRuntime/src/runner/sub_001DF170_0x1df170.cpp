#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF170
// Address: 0x1df170 - 0x1df2d0
void sub_001DF170_0x1df170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF170_0x1df170");
#endif

    switch (ctx->pc) {
        case 0x1df234u: goto label_1df234;
        case 0x1df244u: goto label_1df244;
        case 0x1df29cu: goto label_1df29c;
        case 0x1df2b4u: goto label_1df2b4;
        default: break;
    }

    ctx->pc = 0x1df170u;

    // 0x1df170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df174: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1df174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1df178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1df17c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1df17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1df180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df184: 0x2442d020  addiu       $v0, $v0, -0x2FE0
    ctx->pc = 0x1df184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
    // 0x1df188: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x1df188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x1df18c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1df18cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1df190: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1df190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1df194: 0x2463d040  addiu       $v1, $v1, -0x2FC0
    ctx->pc = 0x1df194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955072));
    // 0x1df198: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1df198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1df19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df1a0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1df1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1df1a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1a8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1df1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1df1ac: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1df1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1df1b0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1df1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1df1b4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1df1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1df1b8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1df1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1df1bc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1df1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1df1c0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1df1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1df1c4: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x1df1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x1df1c8: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x1df1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x1df1cc: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x1df1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x1df1d0: 0xac870038  sw          $a3, 0x38($a0)
    ctx->pc = 0x1df1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
    // 0x1df1d4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1df1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1df1d8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1df1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1df1dc: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1df1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1df1e0: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1df1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1df1e4: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1df1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1df1e8: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1df1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1df1ec: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1df1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1df1f0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1df1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1df1f4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1df1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1df1f8: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x1df1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x1df1fc: 0xa080010c  sb          $zero, 0x10C($a0)
    ctx->pc = 0x1df1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df200: 0xa080010d  sb          $zero, 0x10D($a0)
    ctx->pc = 0x1df200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 269), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df204: 0xa080010e  sb          $zero, 0x10E($a0)
    ctx->pc = 0x1df204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 270), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df208: 0xa080010f  sb          $zero, 0x10F($a0)
    ctx->pc = 0x1df208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 271), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df20c: 0xa0800110  sb          $zero, 0x110($a0)
    ctx->pc = 0x1df20cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df210: 0xa0800111  sb          $zero, 0x111($a0)
    ctx->pc = 0x1df210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 273), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df214: 0xa0800112  sb          $zero, 0x112($a0)
    ctx->pc = 0x1df214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 274), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df218: 0xa0800113  sb          $zero, 0x113($a0)
    ctx->pc = 0x1df218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 275), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df21c: 0xa0800114  sb          $zero, 0x114($a0)
    ctx->pc = 0x1df21cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 276), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df220: 0xa0820115  sb          $v0, 0x115($a0)
    ctx->pc = 0x1df220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 277), (uint8_t)GPR_U32(ctx, 2));
    // 0x1df224: 0xac850118  sw          $a1, 0x118($a0)
    ctx->pc = 0x1df224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 5));
    // 0x1df228: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x1df228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1df22c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1DF22Cu;
    SET_GPR_U32(ctx, 31, 0x1DF234u);
    ctx->pc = 0x1DF230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF22Cu;
            // 0x1df230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF234u; }
        if (ctx->pc != 0x1DF234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF234u; }
        if (ctx->pc != 0x1DF234u) { return; }
    }
    ctx->pc = 0x1DF234u;
label_1df234:
    // 0x1df234: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x1df234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1df238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df23c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1DF23Cu;
    SET_GPR_U32(ctx, 31, 0x1DF244u);
    ctx->pc = 0x1DF240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF23Cu;
            // 0x1df240: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF244u; }
        if (ctx->pc != 0x1DF244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF244u; }
        if (ctx->pc != 0x1DF244u) { return; }
    }
    ctx->pc = 0x1DF244u;
label_1df244:
    // 0x1df244: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1df244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df24c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1df24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x1df250: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1df250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1df254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df25c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF25Cu;
            // 0x1df260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF264u;
    // 0x1df264: 0x0  nop
    ctx->pc = 0x1df264u;
    // NOP
    // 0x1df268: 0x0  nop
    ctx->pc = 0x1df268u;
    // NOP
    // 0x1df26c: 0x0  nop
    ctx->pc = 0x1df26cu;
    // NOP
    // 0x1df270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1df278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df27c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1df280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df284: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF284u;
    {
        const bool branch_taken_0x1df284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF284u;
            // 0x1df288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df284) {
            ctx->pc = 0x1DF2B4u;
            goto label_1df2b4;
        }
    }
    ctx->pc = 0x1DF28Cu;
    // 0x1df28c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1df28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1df290: 0x2442d020  addiu       $v0, $v0, -0x2FE0
    ctx->pc = 0x1df290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
    // 0x1df294: 0xc0bfa40  jal         func_2FE900
    ctx->pc = 0x1DF294u;
    SET_GPR_U32(ctx, 31, 0x1DF29Cu);
    ctx->pc = 0x1DF298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF294u;
            // 0x1df298: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE900u;
    if (runtime->hasFunction(0x2FE900u)) {
        auto targetFn = runtime->lookupFunction(0x2FE900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF29Cu; }
        if (ctx->pc != 0x1DF29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE900_0x2fe900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF29Cu; }
        if (ctx->pc != 0x1DF29Cu) { return; }
    }
    ctx->pc = 0x1DF29Cu;
label_1df29c:
    // 0x1df29c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1df29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1df2a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1df2a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1df2a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF2A4u;
    {
        const bool branch_taken_0x1df2a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1df2a4) {
            ctx->pc = 0x1DF2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2A4u;
            // 0x1df2a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF2B8u;
            goto label_1df2b8;
        }
    }
    ctx->pc = 0x1DF2ACu;
    // 0x1df2ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1DF2ACu;
    SET_GPR_U32(ctx, 31, 0x1DF2B4u);
    ctx->pc = 0x1DF2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2ACu;
            // 0x1df2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2B4u; }
        if (ctx->pc != 0x1DF2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2B4u; }
        if (ctx->pc != 0x1DF2B4u) { return; }
    }
    ctx->pc = 0x1DF2B4u;
label_1df2b4:
    // 0x1df2b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1df2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df2b8:
    // 0x1df2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2C4u;
            // 0x1df2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF2CCu;
    // 0x1df2cc: 0x0  nop
    ctx->pc = 0x1df2ccu;
    // NOP
}
